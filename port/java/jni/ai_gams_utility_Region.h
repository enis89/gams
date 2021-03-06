/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "gams/GamsExport.h"
/* Header for class ai_gams_utility_Region */

#ifndef _Included_ai_gams_utility_Region
#define _Included_ai_gams_utility_Region
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_Region
 * Signature: ()J
 */
GAMS_EXPORT jlong JNICALL Java_ai_gams_utility_Region_jni_1Region
  (JNIEnv *, jobject);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_freeRegion
 * Signature: (J)V
 */
GAMS_EXPORT void JNICALL Java_ai_gams_utility_Region_jni_1freeRegion
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_getName
 * Signature: (J)Ljava/lang/String;
 */
GAMS_EXPORT jstring JNICALL Java_ai_gams_utility_Region_jni_1getName
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_setName
 * Signature: (JLjava/lang/String;)V
 */
GAMS_EXPORT void JNICALL Java_ai_gams_utility_Region_jni_1setName
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_fromContainer
 * Signature: (JJLjava/lang/String;)V
 */
GAMS_EXPORT void JNICALL Java_ai_gams_utility_Region_jni_1fromContainer
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_toContainer
 * Signature: (JJLjava/lang/String;)V
 */
GAMS_EXPORT void JNICALL Java_ai_gams_utility_Region_jni_1toContainer
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_modify
 * Signature: (J)V
 */
GAMS_EXPORT void JNICALL Java_ai_gams_utility_Region_jni_1modify
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_toString
 * Signature: (J)Ljava/lang/String;
 */
GAMS_EXPORT jstring JNICALL Java_ai_gams_utility_Region_jni_1toString
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_addGpsVertex
 * Signature: (JJ)V
 */
GAMS_EXPORT void JNICALL Java_ai_gams_utility_Region_jni_1addGpsVertex
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_getVertices
 * Signature: (J)[J
 */
GAMS_EXPORT jlongArray JNICALL Java_ai_gams_utility_Region_jni_1getVertices
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_getArea
 * Signature: (J)D
 */
GAMS_EXPORT jdouble JNICALL Java_ai_gams_utility_Region_jni_1getArea
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_getBoundingBox
 * Signature: (J)J
 */
GAMS_EXPORT jlong JNICALL Java_ai_gams_utility_Region_jni_1getBoundingBox
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_containsGps
 * Signature: (JJ)Z
 */
GAMS_EXPORT jboolean JNICALL Java_ai_gams_utility_Region_jni_1containsGps
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_getGpsDistance
 * Signature: (JJ)D
 */
GAMS_EXPORT jdouble JNICALL Java_ai_gams_utility_Region_jni_1getGpsDistance
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_getMaxAlt
 * Signature: (J)D
 */
GAMS_EXPORT jdouble JNICALL Java_ai_gams_utility_Region_jni_1getMaxAlt
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_getMinAlt
 * Signature: (J)D
 */
GAMS_EXPORT jdouble JNICALL Java_ai_gams_utility_Region_jni_1getMinAlt
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_getMaxLat
 * Signature: (J)D
 */
GAMS_EXPORT jdouble JNICALL Java_ai_gams_utility_Region_jni_1getMaxLat
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_getMinLat
 * Signature: (J)D
 */
GAMS_EXPORT jdouble JNICALL Java_ai_gams_utility_Region_jni_1getMinLat
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_getMaxLong
 * Signature: (J)D
 */
GAMS_EXPORT jdouble JNICALL Java_ai_gams_utility_Region_jni_1getMaxLong
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ai_gams_utility_Region
 * Method:    jni_getMinLong
 * Signature: (J)D
 */
GAMS_EXPORT jdouble JNICALL Java_ai_gams_utility_Region_jni_1getMinLong
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
