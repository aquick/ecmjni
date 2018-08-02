#include <stdio.h>
#include <errno.h>
#include <malloc.h>
#include "org_gmplib_gmpjni_ECM.h"
#include "org_gmplib_gmpjni_ECM_ECMException.h"
#include "ecm.h"

#define ABS(x) ((x) >= 0 ? (x) : -(x))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

void throwECMException
  ( JNIEnv * env, jint p0, jstring p1)
{
    jclass exception_class = env->FindClass("org/gmplib/gmpjni/ECM$ECMException");
    if (0 != exception_class) {
	jmethodID ctor_id = env->GetMethodID(exception_class, "<init>", "(ILjava/lang/String;)V");
	if (0 != ctor_id) {
	    jobject exception_object = env->NewObject(exception_class, ctor_id, p0, p1);
	    if (0 != exception_object) {
		if (0 != env->Throw( (jthrowable)exception_object)) {
		    env->DeleteLocalRef(exception_object);
		}
	    }
	}
	env->DeleteLocalRef(exception_class);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM
 * Method:    native_ecm_version
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_gmplib_gmpjni_ECM_native_1ecm_1version
  (JNIEnv *env, jclass cl)
{
    jstring ret = env->NewStringUTF(ecm_version());
    return ret;
}

/*
 * Class:     org_gmplib_gmpjni_ECM
 * Method:    native_factor
 * Signature: (JJDJ)I
 */
JNIEXPORT jint JNICALL Java_org_gmplib_gmpjni_ECM_native_1factor
  (JNIEnv *env, jclass cl, jlong f, jlong n, jdouble B1, jlong p)
{
    mpz_t *fptr = reinterpret_cast<mpz_t *>(f);
    mpz_t *nptr = reinterpret_cast<mpz_t *>(n);
    ecm_params *pptr = reinterpret_cast<ecm_params *>(p);

    return ecm_factor(*fptr, *nptr, B1, *pptr);
}
