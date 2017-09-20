package com.crayfish.cmakeproject;

/**
 * ============================
 * 作    者：crayfish(徐杰)
 * 创建日期：2017/9/15.
 * 描    述：
 * 修改历史：
 * ===========================
 */

public class CMakeTest {
    static {
        System.loadLibrary("hello-lib");
    }

    public native String getJNIX();
}
