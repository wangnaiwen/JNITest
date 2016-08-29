//
// Created by wnw on 2016/8/29.
//
#include<jni.h>
#include "com_wit_jnitest_MainActivity.h"

JNIEXPORT jstring JNICALL Java_com_wit_jnitest_MainActivity_getStringFromNative
  (JNIEnv *env, jobject obj){
     return (*env)->NewStringUTF(env,"This just a test for Android Studio NDK JNI developer!");
  }
