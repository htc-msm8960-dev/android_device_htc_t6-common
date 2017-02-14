/*
 * Copyright (C) 2016 The Android Open Source Project
 * Copyright (C) 2016 The Mokee Project
 * Copyright (C) 2016 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.validity.fingerprint;

import android.content.Context;
import android.util.Log;

public class Fingerprint extends FingerprintCore {

    public static final int VCS_ENROLL_MODE_DEFAULT = 1;
    public static final int VCS_ENROLL_MODE_REENROLL = 2;
    public static final int VCS_ENROLL_MODE_SECONDARY = 3;

    public static final int VCS_FINGER_POSITION_FEEDBACK_SWIPE_MIDDLE = 11;
    public static final int VCS_FINGER_POSITION_FEEDBACK_SWIPE_MIDDLE_FULL = 12;
    public static final int VCS_FINGER_POSITION_FEEDBACK_SWIPE_LEFT = 21;
    public static final int VCS_FINGER_POSITION_FEEDBACK_SWIPE_RIGHT = 31;
    public static final int VCS_FINGER_POSITION_FEEDBACK_SWIPE_ANY = 41;

    public static final int VCS_NOTIFY_SNSR_TEST_CONTINUE = 1;
    public static final int VCS_NOTIFY_SNSR_TEST_STOP = 2;
    public static final int VCS_NOTIFY_ENROLL_BEGIN = 3;
    public static final int VCS_NOTIFY_ENROLL_END = 4;

    public static final int VCS_REQUEST_PROCESS_FIDO = 1;
    public static final int VCS_REQUEST_PROCESS_ALIPAY = 2;
    public static final int VCS_REQUEST_COMMAND_SENSOR_TEST = 11;
    public static final int VCS_REQUEST_GET_SENSOR_INFO = 12;
    public static final int VCS_REQUEST_GET_ENROLL_REPEAT_COUNT = 13;
    private static final int VCS_REQUEST_ENABLE_WOF = 21;
    private static final int VCS_REQUEST_GET_WOF_STATE = 22;

    public static final int VCS_SENSOR_STATUS_OK = 0;
    public static final int VCS_SENSOR_STATUS_WORKING = 46;
    public static final int VCS_SENSOR_STATUS_INITIALISING = 358;
    public static final int VCS_SENSOR_STATUS_INITIALIZING = 358;
    public static final int VCS_SENSOR_STATUS_OUT_OF_ORDER = 360;
    public static final int VCS_SENSOR_STATUS_MALFUNCTIONED = 534;
    public static final int VCS_SENSOR_STATUS_FAILURE = 535;

    public static final int VCS_WOF_STATE_INACTIVE = 0;
    public static final int VCS_WOF_STATE_ACTIVE = 1;

public Fingerprint(Context paramContext)
  {
    super(paramContext);
  }
  
  public Fingerprint(Context paramContext, FingerprintCore.EventListener paramEventListener)
  {
    super(paramContext, paramEventListener);
  }
  
  public static int getServiceStatus()
  {
    return jniGetServiceStatus();
  }
  
  private native int jniEnableSensorDevice(int paramInt);
  
  private native int jniEnrollUser(Object paramObject);
  
  private native int jniGetSensorStatus();
  
  private static native int jniGetServiceStatus();
  
  private native int jniLaunchNav();
  
  private native int jniNavStart();
  
  private native int jniNavStop();
  
  private native int jniNotify(int paramInt, Object paramObject);
  
  private native int jniRemoveEnrolledFinger(Object paramObject);
  
  private native int jniRequest(int paramInt, Object paramObject);
  
  public int enableSensorDevice(boolean paramBoolean)
  {
    if (paramBoolean) {}
    for (int i = 1;; i = 0) {
      return jniEnableSensorDevice(i);
    }
  }
  
  public int enroll(EnrollUser paramEnrollUser)
  {
    if (this.mOperation != 150) {
      return -1;
    }
    int i = jniEnrollUser(paramEnrollUser);
    if (i == 0) {
      this.mOperation = 151;
    }
    return i;
  }
  
  public int getSensorStatus()
  {
    return jniGetSensorStatus();
  }
  
  public int launchNav()
  {
    return jniLaunchNav();
  }
  
  public int navStart()
  {
    return jniNavStart();
  }
  
  public int navStop()
  {
    return jniNavStop();
  }
  
  public int notify(int paramInt, Object paramObject)
  {
    return jniNotify(paramInt, paramObject);
  }
  
  @Deprecated
  public int removeEnrolledFinger(EnrollUser paramEnrollUser)
  {
    return jniRemoveEnrolledFinger(paramEnrollUser);
  }
  
  public int removeEnrolledFinger(RemoveEnroll paramRemoveEnroll)
  {
    return jniRemoveEnrolledFinger(paramRemoveEnroll);
  }
  
  public int request(int paramInt, Object paramObject)
  {
    return jniRequest(paramInt, paramObject);
  }
}
