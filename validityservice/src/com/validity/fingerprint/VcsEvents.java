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

public class VcsEvents {

    public static final int FINGER_INDEX_LEFT_INDEX = 2;
    public static final int FINGER_INDEX_LEFT_LITTLE = 5;
    public static final int FINGER_INDEX_LEFT_MIDDLE = 3;
    public static final int FINGER_INDEX_LEFT_RING = 4;
    public static final int FINGER_INDEX_LEFT_THUMB = 1;
    public static final int FINGER_INDEX_REMOVE_ALL = 11;
    public static final int FINGER_INDEX_REMOVE_DATABASE = -1;
    public static final int FINGER_INDEX_RIGHT_INDEX = 7;
    public static final int FINGER_INDEX_RIGHT_LITTLE = 10;
    public static final int FINGER_INDEX_RIGHT_MIDDLE = 8;
    public static final int FINGER_INDEX_RIGHT_RING = 9;
    public static final int FINGER_INDEX_RIGHT_THUMB = 6;
    public static final int FINGER_INDEX_ALL = 21;
    public static final int VCS_EVT_ALL_SENSORS_INITIALIZED = 9;
    public static final int VCS_EVT_EIV_FINGERPRINT_CAPTURED = 17;
    public static final int VCS_EVT_EIV_FINGERPRINT_CAPTURED_BAD = 45;
    public static final int VCS_EVT_ENROLL_CAPTURE_STATUS = 32;
    public static final int VCS_EVT_ENROLL_COMPLETED = 13;
    public static final int VCS_EVT_ENROLL_FAILED = 424;
    public static final int VCS_EVT_ENROLL_NEXT_CAPTURE_START = 16;
    public static final int VCS_EVT_ENROLL_SUCCESS = 421;
    public static final int VCS_EVT_FINGER_DETECTED = 11;
    public static final int VCS_EVT_FINGER_REMOVED = 20;
    public static final int VCS_EVT_FINGER_SETTLED = 33;
    public static final int VCS_EVT_EIV_FINGERPRINT_CAPTURE_REDUNDANT = 49;
    public static final int VCS_EVT_IDENTIFY_COMPLETED = 15;
    public static final int VCS_EVT_IDENTIFY_FAILED = 426;
    public static final int VCS_EVT_IDENTIFY_SUCCESS = 423;
    public static final int VCS_EVT_MIN_ENROLL_ATTEMPTS = 429;
    public static final int VCS_EVT_SENSOR_DETECTED = 2;
    public static final int VCS_EVT_SENSOR_FAILED_INITIALIZATION = 4;
    public static final int VCS_EVT_SENSOR_FINGERPRINT_CAPTURE_COMPLETE = 5;
    public static final int VCS_EVT_SENSOR_FINGERPRINT_CAPTURE_FAILED = 7;
    public static final int VCS_EVT_SENSOR_FINGERPRINT_CAPTURE_START = 8;
    public static final int VCS_EVT_SENSOR_FINGERPRINT_FAILED_SWIPE_RETRY = 10;
    public static final int VCS_EVT_SENSOR_INFO = 428;
    public static final int VCS_EVT_SENSOR_NAVIGATION_REPORT = 12;
    public static final int VCS_EVT_SENSOR_RAW_FINGERPRINT_CAPTURE_COMPLETE = 6;
    public static final int VCS_EVT_SENSOR_READY_FOR_USE = 3;
    public static final int VCS_EVT_SENSOR_REMOVED = 1;
    public static final int VCS_EVT_SET_IR_FLAGS = 37;
    public static final int VCS_EVT_SWIPE_DIRECTION = 41;
    public static final int VCS_EVT_SWIPE_SPEED_UPDATE = 42;
    public static final int VCS_EVT_VERIFY_COMPLETED = 14;
    public static final int VCS_EVT_VERIFY_FAILED = 425;
    public static final int VCS_EVT_VERIFY_SUCCESS = 422;
    public static final int VCS_IDENTIFY_PRIORITY_HIGH = 2;
    public static final int VCS_IDENTIFY_PRIORITY_LOW = 1;
    public static final int VCS_IMAGE_QUALITY_ASP_DATA_INVALID = 1048576;
    public static final int VCS_IMAGE_QUALITY_BAD_SWIPE = 8192;
    public static final int VCS_IMAGE_QUALITY_BASELINE_DATA_INVALID = 4194304;
    public static final int VCS_IMAGE_QUALITY_EMPTY_TOUCH = 268435456;
    public static final int VCS_IMAGE_QUALITY_FINGER_OFFSET = 4096;
    public static final int VCS_IMAGE_QUALITY_FINGER_OFFSET_TOO_FAR_LEFT = 131072;
    public static final int VCS_IMAGE_QUALITY_FINGER_OFFSET_TOO_FAR_RIGHT = 262144;
    public static final int VCS_IMAGE_QUALITY_FINGER_TOO_THIN = 33554432;
    public static final int VCS_IMAGE_QUALITY_GOOD = 0;
    public static final int VCS_IMAGE_QUALITY_REVERSE_MOTION = 8;
    public static final int VCS_IMAGE_QUALITY_SOMETHING_ON_THE_SENSOR = 512;
    public static final int VCS_IMAGE_QUALITY_NOT_A_FINGER_SWIPE = 2097152;
    public static final int VCS_IMAGE_QUALITY_PARTIAL_TOUCH = 134217728;
    public static final int VCS_IMAGE_QUALITY_PRESSURE_TOO_HARD = 524288;
    public static final int VCS_IMAGE_QUALITY_PRESSURE_TOO_LIGHT = 65536;
    public static final int VCS_IMAGE_QUALITY_PROCESS_FAILED = -2147483648;
    public static final int VCS_IMAGE_QUALITY_SKEW_TOO_LARGE = 32768;
    public static final int VCS_IMAGE_QUALITY_STICTION = 1;
    public static final int VCS_IMAGE_QUALITY_TOO_FAST = 2;
    public static final int VCS_IMAGE_QUALITY_TOO_SHORT = 4;
    public static final int VCS_IMAGE_QUALITY_TOO_SLOW = 16;
    public static final int VCS_IMAGE_QUALITY_WET_FINGER = 16777216;
    public static final int VCS_IMAGE_QUALITY_WRONG_FINGER = 536870912;
    public static final int VCS_NAV_DEVICE_DPAD = 3;
    public static final int VCS_NAV_DEVICE_DPAD_OS = 5;
    public static final int VCS_NAV_DEVICE_MAX = 7;
    public static final int VCS_NAV_DEVICE_MOUSE = 4;
    public static final int VCS_NAV_DEVICE_MOUSE_OS = 6;
    public static final int VCS_NAV_DEVICE_NONE = 0;
    public static final int VCS_NAV_DEVICE_RAW_DATA = 1;
    public static final int VCS_NAV_DEVICE_RAW_EVENT = 2;
    public static final int VCS_POLICY_AUTHENTICATE_ALWAYS = 1;
    public static final int VCS_POLICY_AUTHENTICATE_ON_PREVIOUS_IDENTIFY_TIMEOUT = 3;
    public static final int VCS_POLICY_AUTHENTICATE_ON_SCREEN_UNLOCK_TIMEOUT = 2;
    public static final int VCS_RESULT_ALREADY_INPROGRESS = 1004;
    public static final int VCS_RESULT_DATA_REMOVE_FAILED = 1003;
    public static final int VCS_RESULT_DATA_RETRIEVE_FAILED = 1002;
    public static final int VCS_RESULT_DATA_STORE_FAILED = 1001;
    public static final int VCS_RESULT_BAD_QUALITY_IMAGE = 601;
    public static final int VCS_RESULT_FAILED = -1;
    public static final int VCS_RESULT_INVALID_ARGUMENT = 1006;
    public static final int VCS_RESULT_KEYDATA_NOT_FOUND = 777;
    public static final int VCS_RESULT_MATCHER_ADD_IMAGE_FAILED = 306;
    public static final int VCS_RESULT_MATCHER_CHECK_QUALITY_FAILED = 308;
    public static final int VCS_RESULT_MATCHER_CLOSE_FAILED = 301;
    public static final int VCS_RESULT_MATCHER_ENROLL_FAILED = 304;
    public static final int VCS_RESULT_MATCHER_EXTRACT_FAILED = 303;
    public static final int VCS_RESULT_MATCHER_MATCH_FAILED = 302;
    public static final int VCS_RESULT_MATCHER_MATCH_IMAGE_FAILED = 307;
    public static final int VCS_RESULT_MATCHER_OPEN_FAILED = 300;
    public static final int VCS_RESULT_MATCHER_VERIFY_FAILED = 305;
    public static final int VCS_RESULT_MATCH_FAILED = 367;
    public static final int VCS_RESULT_NOT_IMPLEMENTED = 1005;
    public static final int VCS_RESULT_OK = 0;
    public static final int VCS_RESULT_OPERATION_CANCELED = 361;
    public static final int VCS_RESULT_OPERATION_DENIED = 510;
    public static final int VCS_RESULT_PHONE_ROOTED_DATABASE_INVALID = 1007;
    public static final int VCS_RESULT_SENSOR_BUSY = 46;
    public static final int VCS_RESULT_SENSOR_IS_REMOVED = 360;
    public static final int VCS_RESULT_SENSOR_NOT_FOUND = 19;
    public static final int VCS_RESULT_SERVICE_NOT_RUNNING = 321;
    public static final int VCS_RESULT_SYSTEM_SECURITY_ALERT = 532;
    public static final int VCS_RESULT_TOO_MANY_BAD_SWIPES = 515;
    public static final int VCS_RESULT_USER_DOESNT_EXIST = 65;
    public static final int VCS_RESULT_USER_FINGER_ALREADY_ENROLLED = 88;
    public static final int VCS_RESULT_USER_VERIFICATION_FAILED = 363;
    public static final int VCS_SECURITY_LEVEL_HIGH = 100000;
    public static final int VCS_SECURITY_LEVEL_LOW = 1000;
    public static final int VCS_SECURITY_LEVEL_MEDIUM_LOW = 5000;
    public static final int VCS_SECURITY_LEVEL_REGULAR = 10000;
    public static final int VCS_SECURITY_LEVEL_VERY_HIGH = 1000000;
    public static final int VCS_SWIPE_DIRECTION_DOWN = 1;
    public static final int VCS_SWIPE_DIRECTION_LEFT = 3;
    public static final int VCS_SWIPE_DIRECTION_REST = 5;
    public static final int VCS_SWIPE_DIRECTION_RIGHT = 4;
    public static final int VCS_SWIPE_DIRECTION_UP = 0;
}
