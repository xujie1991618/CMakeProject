//
// Created by lin on 2017/9/15.
//
#include <jni.h>
#include <string>

JNIEXPORT jstring JNICALL
Java_com_crayfish_cmakeproject_CMakeTest_getJNIX(JNIEnv *env, jobject instance) {

    // TODO
    return env->NewStringUTF("aaaaaaaaaaaaaaaaaaa");
}
