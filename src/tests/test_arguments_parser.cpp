#include <iostream>
#include <math.h>
#include <gams/CPP11_compat.h>
#include <gams/utility/ArgumentParser.h>

namespace knowledge = madara::knowledge;
using namespace gams::utility;

/* multiplicative factor for deciding if a TEST is sufficiently close */
const double TEST_epsilon = 0.0001;

double round_nearest(double in)
{
  return floor(in + 0.5);
}

#define LOG(expr) \
  std::cout << #expr << " == " << (expr) << std::endl

#define TEST(expr, expect) \
  do {\
    double bv = (expr); \
    double v = round_nearest((bv) * 1024)/1024; \
    double e = round_nearest((expect) * 1024)/1024; \
    bool ok = \
      e >= 0 ? (v >= e * (1 - TEST_epsilon) && v <= e * (1 + TEST_epsilon)) \
             : (v >= e * (1 + TEST_epsilon) && v <= e * (1 - TEST_epsilon)); \
    if(ok) \
    { \
      std::cout << #expr << " ?= " << e << "  SUCCESS! got " << bv << std::endl; \
    } \
    else \
    { \
      std::cout << #expr << " ?= " << e << "  FAIL! got " << bv << " instead" << std::endl; \
    } \
  } while(0)

int main(int argc, char *argv[])
{
  knowledge::KnowledgeBase kbase;
  kbase.set("not_args.asdf", "shouldn't appear");
  kbase.set("args.size", knowledge::KnowledgeRecord::Integer (2));
  kbase.set("args.0", "aname");
  kbase.set("args.1", "a val");
  kbase.set("args.2", "bname");
  kbase.set("args.3", "b val");
  kbase.set("args.cname", "c val");
  kbase.set("args.dname", "d val");

  knowledge::KnowledgeVector kvec;

  kbase.to_vector("args.", 0, 3, kvec);

  std::cout << "Map and Vector together:" << std::endl;

  ArgumentParser args("args.", kbase, kvec);

  for(ArgumentParser::const_iterator i = args.begin();
      i != args.end(); i.next())
  {
    std::cout << i.name() << " -> " << i.value() << std::endl;
  }

  std::cout << "Map only:" << std::endl;

  ArgumentParser args2("args.", kbase);

  for(ArgumentParser::const_iterator i = args2.begin();
      i != args2.end(); i.next())
  {
    std::cout << i.name() << " -> " << i.value() << std::endl;
  }

  std::cout << "Vector only:" << std::endl;

  ArgumentParser args3(kvec);

  for(ArgumentParser::const_iterator i = args3.begin();
      i != args3.end(); i.next())
  {
    std::cout << i.name() << " -> " << i.value() << std::endl;
  }

  std::cout << "Map and Vector together, with dereference:" << std::endl;

  for(ArgumentParser::const_iterator i = args.begin(); i != args.end(); ++i)
  {
    std::cout << i->first << " -> " << i->second << std::endl;
  }

#ifdef CPP11
  std::cout << "Map and Vector together, with C++11 foreach:" << std::endl;

  for(const auto &i : args)
  {
    std::cout << i.first << " -> " << i.second << std::endl;
  }
#endif

  return 0;
}
