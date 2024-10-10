#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_swagatmali_ndksample_MainActivityKt_getAPI(JNIEnv *env, jclass clazz) {
    return (*env)-> NewStringUTF(env, "this_is_API_KEY");
}