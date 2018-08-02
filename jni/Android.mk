LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := ecm-prebuilt
LOCAL_SRC_FILES := $(TARGET_ARCH_ABI)/libecm.so
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include/$(TARGET_ARCH_ABI)
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := gmp-prebuilt
LOCAL_SRC_FILES := $(TARGET_ARCH_ABI)/libgmp.so
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include/$(TARGET_ARCH_ABI)
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE    := ecmjni
LOCAL_SRC_FILES := org_gmplib_gmpjni_ECM.cpp org_gmplib_gmpjni_ECM_ecm_params.cpp
LOCAL_CFLAGS := -O2
LOCAL_SHARED_LIBRARIES := ecm-prebuilt gmp-prebuilt
include $(BUILD_SHARED_LIBRARY)
