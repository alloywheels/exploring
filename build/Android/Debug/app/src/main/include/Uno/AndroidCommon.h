#pragma once
#include <android/log.h>
#include <jni.h>
#include <cstdio>
#include <cstdlib>

#define LOGD(...) (__android_log_print(ANDROID_LOG_DEBUG, "exploring", __VA_ARGS__))
