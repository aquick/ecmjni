#include "org_gmplib_gmpjni_ECM_ecm_params.h"
#include "org_gmplib_gmpjni_ECM_ECMException.h"
#include "ecm.h"
#include "malloc.h"
#include <stdio.h>

extern void throwECMException
  ( JNIEnv * env, jint p0, jstring p1);

JNIEnv *_env = NULL;
jobject _objects[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
jlong _handles[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int stop_callback_0()
{
    if (_env == NULL) return 0;

    jobject obj = _objects[0];
    jclass cls = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_stop_callback");
    jmethodID method_id = _env->GetMethodID(cls, "stop", "()Z");
    jclass cls2 = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = _env->GetFieldID(cls2, "stop_callback", "Lorg/gmplib/gmpjni/ECM$ecm_stop_callback;");
    jobject obj2 = _env->GetObjectField(obj, field_id);
    jboolean ret = JNI_FALSE;

    if (obj != 0) {
        ret = _env->CallBooleanMethod(obj2, method_id);
    }
    _env->DeleteLocalRef(cls);
    _env->DeleteLocalRef(cls2);
    _env->DeleteLocalRef(obj2);
    return (ret == JNI_FALSE ? 0 : 1);
}

int stop_callback_1()
{
    if (_env == NULL) return 0;

    jobject obj = _objects[1];
    jclass cls = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_stop_callback");
    jmethodID method_id = _env->GetMethodID(cls, "stop", "()Z");
    jclass cls2 = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = _env->GetFieldID(cls2, "stop_callback", "Lorg/gmplib/gmpjni/ECM$ecm_stop_callback;");
    jobject obj2 = _env->GetObjectField(obj, field_id);
    jboolean ret = JNI_FALSE;

    if (obj != 0) {
        ret = _env->CallBooleanMethod(obj2, method_id);
    }
    _env->DeleteLocalRef(cls);
    _env->DeleteLocalRef(cls2);
    _env->DeleteLocalRef(obj2);
    return (ret == JNI_FALSE ? 0 : 1);
}

int stop_callback_2()
{
    if (_env == NULL) return 0;

    jobject obj = _objects[2];
    jclass cls = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_stop_callback");
    jmethodID method_id = _env->GetMethodID(cls, "stop", "()Z");
    jclass cls2 = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = _env->GetFieldID(cls2, "stop_callback", "Lorg/gmplib/gmpjni/ECM$ecm_stop_callback;");
    jobject obj2 = _env->GetObjectField(obj, field_id);
    jboolean ret = JNI_FALSE;

    if (obj != 0) {
        ret = _env->CallBooleanMethod(obj2, method_id);
    }
    _env->DeleteLocalRef(cls);
    _env->DeleteLocalRef(cls2);
    _env->DeleteLocalRef(obj2);
    return (ret == JNI_FALSE ? 0 : 1);
}

int stop_callback_3()
{
    if (_env == NULL) return 0;

    jobject obj = _objects[3];
    jclass cls = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_stop_callback");
    jmethodID method_id = _env->GetMethodID(cls, "stop", "()Z");
    jclass cls2 = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = _env->GetFieldID(cls2, "stop_callback", "Lorg/gmplib/gmpjni/ECM$ecm_stop_callback;");
    jobject obj2 = _env->GetObjectField(obj, field_id);
    jboolean ret = JNI_FALSE;

    if (obj != 0) {
        ret = _env->CallBooleanMethod(obj2, method_id);
    }
    _env->DeleteLocalRef(cls);
    _env->DeleteLocalRef(cls2);
    _env->DeleteLocalRef(obj2);
    return (ret == JNI_FALSE ? 0 : 1);
}

int stop_callback_4()
{
    if (_env == NULL) return 0;

    jobject obj = _objects[4];
    jclass cls = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_stop_callback");
    jmethodID method_id = _env->GetMethodID(cls, "stop", "()Z");
    jclass cls2 = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = _env->GetFieldID(cls2, "stop_callback", "Lorg/gmplib/gmpjni/ECM$ecm_stop_callback;");
    jobject obj2 = _env->GetObjectField(obj, field_id);
    jboolean ret = JNI_FALSE;

    if (obj != 0) {
        ret = _env->CallBooleanMethod(obj2, method_id);
    }
    _env->DeleteLocalRef(cls);
    _env->DeleteLocalRef(cls2);
    _env->DeleteLocalRef(obj2);
    return (ret == JNI_FALSE ? 0 : 1);
}

int stop_callback_5()
{
    if (_env == NULL) return 0;

    jobject obj = _objects[5];
    jclass cls = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_stop_callback");
    jmethodID method_id = _env->GetMethodID(cls, "stop", "()Z");
    jclass cls2 = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = _env->GetFieldID(cls2, "stop_callback", "Lorg/gmplib/gmpjni/ECM$ecm_stop_callback;");
    jobject obj2 = _env->GetObjectField(obj, field_id);
    jboolean ret = JNI_FALSE;

    if (obj != 0) {
        ret = _env->CallBooleanMethod(obj2, method_id);
    }
    _env->DeleteLocalRef(cls);
    _env->DeleteLocalRef(cls2);
    _env->DeleteLocalRef(obj2);
    return (ret == JNI_FALSE ? 0 : 1);
}

int stop_callback_6()
{
    if (_env == NULL) return 0;

    jobject obj = _objects[6];
    jclass cls = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_stop_callback");
    jmethodID method_id = _env->GetMethodID(cls, "stop", "()Z");
    jclass cls2 = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = _env->GetFieldID(cls2, "stop_callback", "Lorg/gmplib/gmpjni/ECM$ecm_stop_callback;");
    jobject obj2 = _env->GetObjectField(obj, field_id);
    jboolean ret = JNI_FALSE;

    if (obj != 0) {
        ret = _env->CallBooleanMethod(obj2, method_id);
    }
    _env->DeleteLocalRef(cls);
    _env->DeleteLocalRef(cls2);
    _env->DeleteLocalRef(obj2);
    return (ret == JNI_FALSE ? 0 : 1);
}

int stop_callback_7()
{
    if (_env == NULL) return 0;

    jobject obj = _objects[7];
    jclass cls = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_stop_callback");
    jmethodID method_id = _env->GetMethodID(cls, "stop", "()Z");
    jclass cls2 = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = _env->GetFieldID(cls2, "stop_callback", "Lorg/gmplib/gmpjni/ECM$ecm_stop_callback;");
    jobject obj2 = _env->GetObjectField(obj, field_id);
    jboolean ret = JNI_FALSE;

    if (obj != 0) {
        ret = _env->CallBooleanMethod(obj2, method_id);
    }
    _env->DeleteLocalRef(cls);
    _env->DeleteLocalRef(cls2);
    _env->DeleteLocalRef(obj2);
    return (ret == JNI_FALSE ? 0 : 1);
}

int stop_callback_8()
{
    if (_env == NULL) return 0;

    jobject obj = _objects[8];
    jclass cls = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_stop_callback");
    jmethodID method_id = _env->GetMethodID(cls, "stop", "()Z");
    jclass cls2 = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = _env->GetFieldID(cls2, "stop_callback", "Lorg/gmplib/gmpjni/ECM$ecm_stop_callback;");
    jobject obj2 = _env->GetObjectField(obj, field_id);
    jboolean ret = JNI_FALSE;

    if (obj != 0) {
        ret = _env->CallBooleanMethod(obj2, method_id);
    }
    _env->DeleteLocalRef(cls);
    _env->DeleteLocalRef(cls2);
    _env->DeleteLocalRef(obj2);
    return (ret == JNI_FALSE ? 0 : 1);
}

int stop_callback_9()
{
    if (_env == NULL) return 0;

    jobject obj = _objects[9];
    jclass cls = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_stop_callback");
    jmethodID method_id = _env->GetMethodID(cls, "stop", "()Z");
    jclass cls2 = _env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = _env->GetFieldID(cls2, "stop_callback", "Lorg/gmplib/gmpjni/ECM$ecm_stop_callback;");
    jobject obj2 = _env->GetObjectField(obj, field_id);
    jboolean ret = JNI_FALSE;

    if (obj != 0) {
        ret = _env->CallBooleanMethod(obj2, method_id);
    }
    _env->DeleteLocalRef(cls);
    _env->DeleteLocalRef(cls2);
    _env->DeleteLocalRef(obj2);
    return (ret == JNI_FALSE ? 0 : 1);
}

typedef int (*callback_fcn)(void);

callback_fcn _callbacks[10] = {
    &stop_callback_0,
    &stop_callback_1,
    &stop_callback_2,
    &stop_callback_3,
    &stop_callback_4,
    &stop_callback_5,
    &stop_callback_6,
    &stop_callback_7,
    &stop_callback_8,
    &stop_callback_9
};

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_method
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1method
  (JNIEnv *env, jobject obj, jint m)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params" );
    jfieldID field_id = env->GetFieldID(cls, "handle", "J" );
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->method = m;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_x
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1x
  (JNIEnv *env, jobject obj, jlong _x)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    mpz_t *xptr = reinterpret_cast<mpz_t *>(_x);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        mpz_set((*ptr)->x, *xptr);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_y
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1y
  (JNIEnv *env, jobject obj, jlong _y)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    mpz_t *yptr = reinterpret_cast<mpz_t *>(_y);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        mpz_set((*ptr)->y, *yptr);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_rng_seed
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1rng_1seed
  (JNIEnv *env, jobject obj, jlong seed)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
	unsigned long int val = static_cast<unsigned long int>(seed);
	mpz_set_ui((*ptr)->rng->_mp_seed, val); // so ECM doesn't set the seed
	gmp_randseed_ui((*ptr)->rng, val);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_param
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1param
  (JNIEnv *env, jobject obj, jint _param)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->param = _param;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_sigma
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1sigma
  (JNIEnv *env, jobject obj, jlong _sigma)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    mpz_t *sigmaptr = reinterpret_cast<mpz_t *>(_sigma);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        mpz_set((*ptr)->sigma, *sigmaptr);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_sigma_is_A
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1sigma_1is_1A
  (JNIEnv *env, jobject obj, jint _sigma_is_A)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->sigma_is_A = _sigma_is_A;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_go
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1go
  (JNIEnv *env, jobject obj, jlong _go)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    mpz_t *goptr = reinterpret_cast<mpz_t *>(_go);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        mpz_set((*ptr)->go, *goptr);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_B1done
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1B1done
  (JNIEnv *env, jobject obj, jdouble _B1done)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->B1done = _B1done;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_B2min
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1B2min
  (JNIEnv *env, jobject obj, jlong _B2min)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    mpz_t *B2minptr = reinterpret_cast<mpz_t *>(_B2min);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        mpz_set((*ptr)->B2min, *B2minptr);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_B2
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1B2
  (JNIEnv *env, jobject obj, jlong _B2)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    mpz_t *B2ptr = reinterpret_cast<mpz_t *>(_B2);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        mpz_set((*ptr)->B2, *B2ptr);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_k
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1k
  (JNIEnv *env, jobject obj, jlong _k)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->k = (unsigned long)_k;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_S
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1S
  (JNIEnv *env, jobject obj, jint _S)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->S = _S;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_repr
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1repr
  (JNIEnv *env, jobject obj, jint _repr)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->repr = _repr;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_nobase2step2
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1nobase2step2
  (JNIEnv *env, jobject obj, jint _nobase2step2)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->nobase2step2 = _nobase2step2;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_verbose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1verbose
  (JNIEnv *env, jobject obj, jint _verbose)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->verbose = _verbose;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    openStream
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_openStream
  (JNIEnv *env, jobject, jstring fname)
{
    jboolean is_copy;
    char const *fname_chars = NULL;
    FILE *f = NULL;

    fname_chars = env->GetStringUTFChars(fname, &is_copy);
    f = fopen(fname_chars, "w+");
    env->ReleaseStringUTFChars(fname, fname_chars);
    return reinterpret_cast<jlong>(f);
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    closeStream
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_closeStream
  (JNIEnv *, jobject, jlong handle)
{
    FILE *f = reinterpret_cast<FILE *>(handle);
    fclose(f);
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    set_errstreamh
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_set_1errstreamh
  (JNIEnv *env, jobject obj, jlong _es)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->es = reinterpret_cast<FILE *>(_es);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    set_outstreamh
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_set_1outstreamh
  (JNIEnv *env, jobject obj, jlong _os)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->os = reinterpret_cast<FILE *>(_os);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_chkfilename
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT jlong JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1chkfilename
  (JNIEnv *env, jobject obj, jstring fname)
{
    jboolean is_copy;
    char const *fname_chars = NULL;
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);

    fname_chars = env->GetStringUTFChars(fname, &is_copy);
    if (ptr != NULL) {
        (*ptr)->chkfilename = const_cast<char *>(fname_chars);
    }
    return reinterpret_cast<jlong>(fname_chars);
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_treefilename
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT jlong JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1treefilename
  (JNIEnv *env, jobject obj, jstring fname)
{
    jboolean is_copy;
    char const *fname_chars = NULL;
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);

    fname_chars = env->GetStringUTFChars(fname, &is_copy);
    if (ptr != NULL) {
        (*ptr)->TreeFilename = const_cast<char *>(fname_chars);
    }
    return reinterpret_cast<jlong>(fname_chars);
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    release
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_release
  (JNIEnv *env, jobject, jstring str, jlong handle)
{
    char const *str_chars = reinterpret_cast<char const *>(handle);
    env->ReleaseStringUTFChars(str, str_chars);
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_maxmem
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1maxmem
  (JNIEnv *env, jobject obj, jdouble _maxmem)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->maxmem = _maxmem;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_stage1time
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1stage1time
  (JNIEnv *env, jobject obj, jdouble _stage1time)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->stage1time = _stage1time;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_use_ntt
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1use_1ntt
  (JNIEnv *env, jobject obj, jint _use_ntt)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->use_ntt = _use_ntt;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_stop_callback
 * Signature: ()J
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1stop_1callback
  (JNIEnv *env, jobject obj, jboolean is_null)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    int index = 0;
    int mindex = -1;

    if (ptr != NULL) {
        while (index < 10) {
            if (_handles[index] == handle) {
                break;
            }
            if (_objects[index] == 0) {
                if (mindex < 0) {
                    mindex = index;
                }
            }
            index++;
        }
        if (index < 10) {
            if (is_null == JNI_TRUE) {
                env->DeleteGlobalRef(_objects[index]);
                _objects[index] = 0;
                _handles[index] = 0;
                (*ptr)->stop_asap = 0;
            }
        } else {
            if (is_null == JNI_TRUE) {
	        throwECMException(env, org_gmplib_gmpjni_ECM_ECMException_INTERNAL_ERROR,
				env->NewStringUTF("clearing ecm_stop_callback for unknown ecm_params"));
	    }
            if (mindex >= 0) {
                _handles[mindex] = handle;
                _objects[mindex] = env->NewGlobalRef(obj);
                (*ptr)->stop_asap = _callbacks[mindex];
            } else {
                // limit exceeded of ecm_params objects
                // (there is no way to tell which ecm_params a given callback originates from
                // so we use a fixed list of 10 callback functions)
	        throwECMException(env, org_gmplib_gmpjni_ECM_ECMException_OUT_OF_MEMORY,
				env->NewStringUTF("limit exceeded for ecm_stop_callback's"));
            }
        }
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_batch_s
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1batch_1s
  (JNIEnv *env, jobject obj, jlong _batch_s)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    mpz_t *batch_s_ptr = reinterpret_cast<mpz_t *>(_batch_s);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        mpz_set((*ptr)->batch_s, *batch_s_ptr);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_batch_last_B1_used
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1batch_1last_1B1_1used
  (JNIEnv *env, jobject obj, jdouble _batch_last_B1_used)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->batch_last_B1_used = _batch_last_B1_used;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_gpu
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1gpu
  (JNIEnv *env, jobject obj, jint _gpu)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->gpu = _gpu;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_gpu_device
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1gpu_1device
  (JNIEnv *env, jobject obj, jint _gpu_device)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->gpu_device = _gpu_device;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_gpu_device_init
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1gpu_1device_1init
  (JNIEnv *env, jobject obj, jint _gpu_device_init)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->gpu_device_init = _gpu_device_init;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_gpu_number_of_curves
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1gpu_1number_1of_1curves
  (JNIEnv *env, jobject obj, jlong _gpu_number_of_curves)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->gpu_number_of_curves = (unsigned int)_gpu_number_of_curves;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_gw_k
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1gw_1k
  (JNIEnv *env, jobject obj, jdouble _gw_k)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->gw_k = _gw_k;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_gw_b
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1gw_1b
  (JNIEnv *env, jobject obj, jlong _gw_b)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->gw_b = (unsigned long)_gw_b;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_gw_n
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1gw_1n
  (JNIEnv *env, jobject obj, jlong _gw_n)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->gw_n = (unsigned long)_gw_n;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_gw_c
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1gw_1c
  (JNIEnv *env, jobject obj, jlong _gw_c)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->gw_c = _gw_c;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_E_type
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1E_1type
  (JNIEnv *env, jobject obj, jint _type)
{
    jclass cls = env->FindClass( "org/gmplib/gmpjni/ECM$ecm_params" );
    jfieldID field_id = env->GetFieldID( cls, "handle", "J" );
    jlong handle = env->GetLongField( obj, field_id );
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->E->type = _type;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_E_law
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1E_1law
  (JNIEnv *env, jobject obj, jint _law)
{
    jclass cls = env->FindClass( "org/gmplib/gmpjni/ECM$ecm_params" );
    jfieldID field_id = env->GetFieldID( cls, "handle", "J" );
    jlong handle = env->GetLongField( obj, field_id );
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->E->law = _law;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_E_disc
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1E_1disc
  (JNIEnv *env, jobject obj, jint _disc)
{
    jclass cls = env->FindClass( "org/gmplib/gmpjni/ECM$ecm_params" );
    jfieldID field_id = env->GetFieldID( cls, "handle", "J" );
    jlong handle = env->GetLongField( obj, field_id );
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        (*ptr)->E->disc = _disc;
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_E_a1
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1E_1a1
  (JNIEnv *env, jobject obj, jlong _a)
{
    jclass cls = env->FindClass( "org/gmplib/gmpjni/ECM$ecm_params" );
    jfieldID field_id = env->GetFieldID( cls, "handle", "J" );
    jlong handle = env->GetLongField( obj, field_id );
    mpz_t *aptr = reinterpret_cast<mpz_t *>(_a);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        mpz_set((*ptr)->E->a1, *aptr);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_E_a2
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1E_1a2
  (JNIEnv *env, jobject obj, jlong _a)
{
    jclass cls = env->FindClass( "org/gmplib/gmpjni/ECM$ecm_params" );
    jfieldID field_id = env->GetFieldID( cls, "handle", "J" );
    jlong handle = env->GetLongField( obj, field_id );
    mpz_t *aptr = reinterpret_cast<mpz_t *>(_a);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        mpz_set((*ptr)->E->a2, *aptr);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_E_a3
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1E_1a3
  (JNIEnv *env, jobject obj, jlong _a)
{
    jclass cls = env->FindClass( "org/gmplib/gmpjni/ECM$ecm_params" );
    jfieldID field_id = env->GetFieldID( cls, "handle", "J" );
    jlong handle = env->GetLongField( obj, field_id );
    mpz_t *aptr = reinterpret_cast<mpz_t *>(_a);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        mpz_set((*ptr)->E->a3, *aptr);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_E_a4
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1E_1a4
  (JNIEnv *env, jobject obj, jlong _a)
{
    jclass cls = env->FindClass( "org/gmplib/gmpjni/ECM$ecm_params" );
    jfieldID field_id = env->GetFieldID( cls, "handle", "J" );
    jlong handle = env->GetLongField( obj, field_id );
    mpz_t *aptr = reinterpret_cast<mpz_t *>(_a);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        mpz_set((*ptr)->E->a4, *aptr);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_E_a6
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1E_1a6
  (JNIEnv *env, jobject obj, jlong _a)
{
    jclass cls = env->FindClass( "org/gmplib/gmpjni/ECM$ecm_params" );
    jfieldID field_id = env->GetFieldID( cls, "handle", "J" );
    jlong handle = env->GetLongField( obj, field_id );
    mpz_t *aptr = reinterpret_cast<mpz_t *>(_a);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        mpz_set((*ptr)->E->a6, *aptr);
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_E_buf
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1E_1buf
  (JNIEnv *env, jobject obj, jint index, jlong val)
{
    jclass cls = env->FindClass( "org/gmplib/gmpjni/ECM$ecm_params" );
    jfieldID field_id = env->GetFieldID( cls, "handle", "J" );
    jlong handle = env->GetLongField( obj, field_id );
    mpz_t *valptr = reinterpret_cast<mpz_t *>(val);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        if (index >= EC_W_NBUFS) {
	    throwECMException(env, org_gmplib_gmpjni_ECM_ECMException_PARAMETER_OUT_OF_RANGE,
				env->NewStringUTF("index out of range"));
        } else {
            mpz_set((*ptr)->E->buf[index], *valptr);
        }
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    native_set_E_sq
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_native_1set_1E_1sq
  (JNIEnv *env, jobject obj, jint index, jlong val)
{
    jclass cls = env->FindClass( "org/gmplib/gmpjni/ECM$ecm_params" );
    jfieldID field_id = env->GetFieldID( cls, "handle", "J" );
    jlong handle = env->GetLongField( obj, field_id );
    mpz_t *valptr = reinterpret_cast<mpz_t *>(val);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
        if (index >= 10) {
	    throwECMException(env, org_gmplib_gmpjni_ECM_ECMException_PARAMETER_OUT_OF_RANGE,
				env->NewStringUTF("index out of range"));
        } else {
            mpz_set((*ptr)->E->sq[index], *valptr);
        }
    }
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    init
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_init
  (JNIEnv *env, jobject)
{
    ecm_params *ptr = 0;
    ptr = (ecm_params *)malloc(sizeof(ecm_params));
    if (ptr != NULL) {
	ecm_init(*ptr);
    }
    _env = env;
    return reinterpret_cast<jlong>(ptr);
}

/*
 * Class:     org_gmplib_gmpjni_ECM_ecm_params
 * Method:    fini
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_gmplib_gmpjni_ECM_00024ecm_1params_fini
  (JNIEnv *env, jobject obj)
{
    jclass cls = env->FindClass("org/gmplib/gmpjni/ECM$ecm_params");
    jfieldID field_id = env->GetFieldID(cls, "handle", "J");
    jlong handle = env->GetLongField(obj, field_id);
    ecm_params *ptr = reinterpret_cast<ecm_params *>(handle);
    if (ptr != NULL) {
	ecm_clear(*ptr);
	free(ptr);
	env->SetLongField(obj, field_id, (jlong)0);
    }
}
