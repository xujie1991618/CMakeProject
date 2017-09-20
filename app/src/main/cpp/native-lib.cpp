#include <jni.h>
#include <string>

JNIEXPORT jstring JNICALL
Java_com_crayfish_cmakeproject_MainActivity_getString(JNIEnv *env, jobject instance) {

    // TODO

    return env->NewStringUTF("aaa");
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_crayfish_cmakeproject_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
