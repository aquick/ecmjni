/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_gmplib_gmpjni_ECM */

#ifndef _Included_org_gmplib_gmpjni_ECM
#define _Included_org_gmplib_gmpjni_ECM
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_gmplib_gmpjni_ECM
 * Method:    native_ecm_version
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_gmplib_gmpjni_ECM_native_1ecm_1version
  (JNIEnv *, jclass);

/*
 * Class:     org_gmplib_gmpjni_ECM
 * Method:    native_factor
 * Signature: (JJDJ)I
 */
JNIEXPORT jint JNICALL Java_org_gmplib_gmpjni_ECM_native_1factor
  (JNIEnv *, jclass, jlong, jlong, jdouble, jlong);

#ifdef __cplusplus
}
#endif
#endif
