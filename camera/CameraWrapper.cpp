/*
 * Copyright (C) 2012, The CyanogenMod Project
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

/**
* @file CameraWrapper.cpp
*
* This file wraps a vendor camera module.
*
*/

// #define LOG_NDEBUG 0
// #define LOG_PARAMETERS

#define LOG_TAG "CameraWrapper"
#include <cutils/log.h>

#include <utils/threads.h>
#include <utils/String8.h>
#include <hardware/hardware.h>
#include <hardware/camera.h>
#include <camera/Camera.h>
#include <camera/CameraParameters.h>

<<<<<<< HEAD
static const char AE_BRACKET_HDR_OFF[] = "Off";  
static const char AE_BRACKET_HDR[] = "HDR";  
static const char AE_BRACKET[] = "AE-Bracket";  
static const char APP_OIS_SETTING_FALSE[] = "false";  
static const char APP_OIS_SETTING_TRUE[] = "true";  
static const char AUTO_EXPOSURE_CENTER_WEIGHTED[] = "center-weighted";  
static const char AUTO_EXPOSURE_FRAME_AVG[] = "frame-average";  
static const char AUTO_EXPOSURE_SPOT_METERING[] = "spot-metering";  
static const char BURST_MODE_LIMIT20[] = "limit-20";  
static const char BURST_MODE_UNLIMITED[] = "unlimited";  
static const char CAPTURE_MODE_CONTI_BURST_ONE_SHOT[] = "contiburst-one-shot";  
static const char CAPTURE_MODE_CONTI_BURST[] = "contiburst";  
static const char CAPTURE_MODE_CONTI_ZOE[] = "contizoe";  
static const char CAPTURE_MODE_EIS[] = "eis";  
static const char CAPTURE_MODE_HDR[] = "hdr";  
static const char CAPTURE_MODE_NORMAL[] = "normal";  
static const char CAPTURE_MODE_PANORAMA[] = "panorama";  
static const char CAPTURE_MODE_ZOE[] = "zoe";  
static const char CONTI_BURST_CAPTURE_DONE[] = "contiburst-done";  
static const char CONTI_BURST_CAPTURING[] = "contiburst-capturing";  
static const char DENOISE_OFF[] = "denoise-off";  
static const char DENOISE_ON[] = "denoise-on";  
static const char EFFECT_EMBOSS[] = "emboss";  
static const char EFFECT_NEON[] = "neon";  
static const char EFFECT_SKETCH[] = "sketch";  
static const char FACE_DETECTION_OFF[] = "off";  
static const char FACE_DETECTION_ON[] = "on";  
static const char FOCUS_MODE_NORMAL[] = "normal";  
static const char HDR_DISABLE[] = "disable";  
static const char HDR_ENABLE[] = "enable";  
static const char HISTOGRAM_DISABLE[] = "disable";  
static const char HISTOGRAM_ENABLE[] = "enable";  
static const char ISO_100[] = "ISO100";  
static const char ISO_1600[] = "ISO1600";  
static const char ISO_200[] = "ISO200";  
static const char ISO_3200[] = "ISO3200";  
static const char ISO_400[] = "ISO400";  
static const char ISO_6400[] = "ISO6400";  
static const char ISO_800[] = "ISO800";  
static const char ISO_AUTO[] = "auto";  
static const char ISO_HJR[] = "ISO_HJR";  
static const char KEY_AE_BRACKET_HDR[] = "ae-bracket-hdr";  
static const char KEY_APP_OIS_SETTING[] = "ois-setting";  
static const char KEY_AUTO_EXPOSURE[] = "auto-exposure";  
static const char KEY_CAMERA_MODE[] = "camera-mode";  
static const char KEY_CAPTURE_MODE[] = "capture-mode";  
static const char KEY_CONTI_BURST_STATE[] = "contiburst-state";  
static const char KEY_CONTIBURST_TYPE[] = "contiburst-type";  
static const char KEY_CONTRAST[] = "contrast";  
static const char KEY_DEF_CONTRAST[] = "contrast-def";  
static const char KEY_DEF_SATURATION[] = "saturation-def";  
static const char KEY_DEF_SHARPNESS[] = "sharpness-def";  
static const char KEY_DENOISE[] = "denoise";  
static const char KEY_EXIF_DATETIME[] = "exif-datetime";  
static const char KEY_FACE_DETECTION[] = "face-detection";  
static const char KEY_FORCE_USE_AUDIO_ENABLED[] = "forceuseaudio";  
static const char KEY_GPS_ALTITUDE_REF[] = "gps-altitude-ref";  
static const char KEY_GPS_LATITUDE_REF[] = "gps-latitude-ref";  
static const char KEY_GPS_LONGITUDE_REF[] = "gps-longitude-ref";  
static const char KEY_GPS_STATUS[] = "gps-status";  
static const char KEY_GPU_EFFECT_PARAM_0[] = "GE-param0";  
static const char KEY_GPU_EFFECT_PARAM_1[] = "GE-param1";  
static const char KEY_GPU_EFFECT_PARAM_2[] = "GE-param2";  
static const char KEY_GPU_EFFECT_PARAM_3[] = "GE-param3";  
static const char KEY_GPU_EFFECT[] = "GPU-effect";  
static const char KEY_HIGH_DYNAMIC_RANGE_IMAGING[] = "hdr";  
static const char KEY_HISTOGRAM[] = "histogram";  
static const char KEY_ISO_MODE[] = "iso";  
static const char KEY_LENSSHADE[] = "lensshade";  
static const char KEY_MAX_CONTRAST[] = "max-contrast";  
static const char KEY_MAX_SATURATION[] = "max-saturation";  
static const char KEY_MAX_SHARPNESS[] = "max-sharpness";  
static const char KEY_MEMORY_COLOR_ENHANCEMENT[] = "mce";  
static const char KEY_MIN_CONTRAST[] = "contrast-min";  
static const char KEY_MIN_SATURATION[] = "saturation-min";  
static const char KEY_MIN_SHARPNESS[] = "sharpness-min";  
static const char KEY_OIS_MODE[] = "ois_mode";  
static const char KEY_OIS_SUPPORT[] = "ois_support";  
static const char KEY_POWER_MODE_SUPPORTED[] = "power-mode-supported";  
static const char KEY_POWER_MODE[] = "power-mode";  
static const char KEY_PREVIEW_FRAME_RATE_AUTO_MODE[] = "frame-rate-auto";  
static const char KEY_PREVIEW_FRAME_RATE_FIXED_MODE[] = "frame-rate-fixed";  
static const char KEY_PREVIEW_FRAME_RATE_MODE[] = "preview-frame-rate-mode";  
static const char KEY_REDEYE_REDUCTION[] = "redeye-reduction";  
static const char KEY_SATURATION[] = "saturation";  
static const char KEY_SCENE_DETECT[] = "scene-detect";  
static const char KEY_SELECTABLE_ZONE_AF[] = "selectable-zone-af";  
static const char KEY_SHARPNESS[] = "sharpness";  
static const char KEY_SINGLE_ISP_OUTPUT_ENABLED[] = "single-isp-output-enabled";  
static const char KEY_SKIN_TONE_ENHANCEMENT[] = "skinToneEnhancement";  
static const char KEY_SMILEINFO_BYFACE_SUPPORTED[] = "smileinfo-byface-supported";  
static const char KEY_SUPPORTED_AUTO_EXPOSURE[] = "auto-exposure-values";  
static const char KEY_SUPPORTED_CAPTURE_MODES[] = "capture-mode-values";  
static const char KEY_SUPPORTED_DENOISE[] = "denoise-values";  
static const char KEY_SUPPORTED_FACE_DETECTION[] = "face-detection-values";  
static const char KEY_SUPPORTED_HDR_IMAGING_MODES[] = "hdr-values";  
static const char KEY_SUPPORTED_HFR_SIZES[] = "hfr-size-values";  
static const char KEY_SUPPORTED_HISTOGRAM_MODES[] = "histogram-values";  
static const char KEY_SUPPORTED_ISO_MODES[] = "iso-values";  
static const char KEY_SUPPORTED_LENSSHADE_MODES[] = "lensshade-values";  
static const char KEY_SUPPORTED_MEM_COLOR_ENHANCE_MODES[] = "mce-values";  
static const char KEY_SUPPORTED_PREVIEW_FRAME_RATE_MODES[] = "preview-frame-rate-modes";  
static const char KEY_SUPPORTED_REDEYE_REDUCTION[] = "redeye-reduction-values";  
static const char KEY_SUPPORTED_SCENE_DETECT[] = "scene-detect-values";  
static const char KEY_SUPPORTED_SELECTABLE_ZONE_AF[] = "selectable-zone-af-values";  
static const char KEY_SUPPORTED_SKIN_TONE_ENHANCEMENT_MODES[] = "skinToneEnhancement-values";  
static const char KEY_SUPPORTED_TOUCH_AF_AEC[] = "touch-af-aec-values";  
static const char KEY_SUPPORTED_VIDEO_HIGH_FRAME_RATE_MODES[] = "video-hfr-values";  
static const char KEY_SUPPORTED_ZSL_MODES[] = "zsl-values";  
static const char KEY_TIME_CONS_POST_PROCESSING[] = "time-cons-post-processing";  
static const char KEY_TOUCH_AF_AEC[] = "touch-af-aec";  
static const char KEY_TOUCH_INDEX_AEC[] = "touch-index-aec";  
static const char KEY_TOUCH_INDEX_AF[] = "touch-index-af";  
static const char KEY_VIDEO_HIGH_FRAME_RATE[] = "video-hfr";  
static const char KEY_ZSL[] = "zsl";  
static const char LENSSHADE_DISABLE[] = "disable";  
static const char LENSSHADE_ENABLE[] = "enable";  
static const char LOW_POWER[] = "Low_Power";  
static const char MCE_DISABLE[] = "disable";  
static const char MCE_ENABLE[] = "enable";  
static const char NORMAL_POWER[] = "Normal_Power";  
static const char OIS_MODE_OFF[] = "off";  
static const char OIS_MODE_ON[] = "on";  
static const char PIXEL_FORMAT_NV12[] = "nv12";  
static const char PIXEL_FORMAT_RAW[] = "raw";  
static const char PIXEL_FORMAT_YUV420SP_ADRENO[] = "yuv420sp-adreno";  
static const char PIXEL_FORMAT_YV12[] = "yuv420p";  
static const char POST_PROCESSING_BYPASS[] = "bypass";  
static const char POST_PROCESSING_DELAY[] = "delay";  
static const char POST_PROCESSING_ENABLE[] = "enable";  
static const char REDEYE_REDUCTION_DISABLE[] = "disable";  
static const char REDEYE_REDUCTION_ENABLE[] = "enable";  
static const char SCENE_DETECT_OFF[] = "off";  
static const char SCENE_DETECT_ON[] = "on";  
static const char SCENE_MODE_AR[] = "AR";  
static const char SCENE_MODE_BACKLIGHT[] = "backlight";  
static const char SCENE_MODE_FLOWERS[] = "flowers";  
static const char SCENE_MODE_OFF[] = "off";  
static const char SCENE_MODE_TEXT[] = "text";  
static const char SELECTABLE_ZONE_AF_AUTO[] = "auto";  
static const char SELECTABLE_ZONE_AF_CENTER_WEIGHTED[] = "center-weighted";  
static const char SELECTABLE_ZONE_AF_FRAME_AVERAGE[] = "frame-average";  
static const char SELECTABLE_ZONE_AF_SPOT_METERING[] = "spot-metering";  
static const char SKIN_TONE_ENHANCEMENT_DISABLE[] = "disable";  
static const char SKIN_TONE_ENHANCEMENT_ENABLE[] = "enable";  
static const char TOUCH_AF_AEC_OFF[] = "touch-off";  
static const char TOUCH_AF_AEC_ON[] = "touch-on";  
static const char VIDEO_HFR_2X[] = "60";  
static const char VIDEO_HFR_3X[] = "90";  
static const char VIDEO_HFR_4X[] = "120";  
static const char VIDEO_HFR_OFF[] = "off";  
static const char ZSL_OFF[] = "off";  
static const char ZSL_ON[] = "on";  

static const char KEY_VIDEO_HDR[] = "video-hdr";
static const char KEY_VIDEO_HDR_VALUES[] = "video-hdr-values";

static android::Mutex gCameraWrapperLock;
=======
const char KEY_VIDEO_HDR[] = "video-hdr";
const char KEY_VIDEO_HDR_VALUES[] = "video-hdr-values";

// Wrapper common specific parameters names
const char KEY_CAPTURE_MODE[] = "capture-mode";
const char KEY_SUPPORTED_DENOISE[] = "denoise-values";
const char KEY_CONTIBURST_TYPE[] = "contiburst-type";
const char KEY_OIS_SUPPORT[] = "ois_support";
const char KEY_OIS_MODE[] = "ois_mode";
const char KEY_ZSL[] = "zsl";
const char SCENE_MODE_HDR[] = "hdr";
const char KEY_SCENE_MODE[] = "scene-mode";
const char KEY_CAMERA_MODE[] = "camera-mode";

using namespace android;

static Mutex gCameraWrapperLock;
>>>>>>> f27c296... m7-common: Remove face detect key
static camera_module_t *gVendorModule = 0;

static char **fixed_set_params = NULL;

static int camera_device_open(const hw_module_t *module, const char *name,
        hw_device_t **device);
static int camera_device_close(hw_device_t *device);
static int camera_get_number_of_cameras(void);
static int camera_get_camera_info(int camera_id, struct camera_info *info);
static int camera_send_command(struct camera_device * device, int32_t cmd,
        int32_t arg1, int32_t arg2);

static struct hw_module_methods_t camera_module_methods = {
    .open = camera_device_open,
};

camera_module_t HAL_MODULE_INFO_SYM = {
    .common = {
         .tag = HARDWARE_MODULE_TAG,
         .module_api_version = CAMERA_MODULE_API_VERSION_1_0,
         .hal_api_version = HARDWARE_HAL_API_VERSION,
         .id = CAMERA_HARDWARE_MODULE_ID,
         .name = "T6 Camera Wrapper",
         .author = "The LineageOS Project",
         .methods = &camera_module_methods,
         .dso = NULL, /* remove compilation warnings */
         .reserved = { 0 }, /* remove compilation warnings */
    },
    .get_number_of_cameras = camera_get_number_of_cameras,
    .get_camera_info = camera_get_camera_info,
    .set_callbacks = NULL, /* remove compilation warnings */
    .get_vendor_tag_ops = NULL, /* remove compilation warnings */
    .open_legacy = NULL, /* remove compilation warnings */
    .set_torch_mode = NULL, /* remove compilation warnings */
    .init = NULL, /* remove compilation warnings */
    .reserved = { 0 }, /* remove compilation warnings */
};

typedef struct wrapper_camera_device {
    camera_device_t base;
    int id;
    camera_device_t *vendor;
} wrapper_camera_device_t;

#define VENDOR_CALL(dev, func, ...) ({ \
    wrapper_camera_device_t* __wrapper_dev = (wrapper_camera_device_t*) dev; \
    __wrapper_dev->vendor->ops->func(__wrapper_dev->vendor, ##__VA_ARGS__); \
})

#define CAMERA_ID(device) (((wrapper_camera_device_t*)(device))->id)

static int check_vendor_module()
{
    int rv = 0;
    ALOGV("%s", __FUNCTION__);

    if (gVendorModule) {
        ALOGV("%s: already got vendor camera module", __FUNCTION__);
        return 0;
	}

    rv = hw_get_module_by_class("camera", "vendor",
            (const hw_module_t**)&gVendorModule);

    if (rv) {
        ALOGE("%s: failed to open vendor camera module", __FUNCTION__);
    } else {
        ALOGV("%s: success opening vendor camera module", __FUNCTION__);
    }

    return rv;
}

static char *camera_fixup_getparams(int __attribute__((unused)) id,
    const char *settings)
{
    int rotation = 0;
    const char *captureMode = "normal";
    const char *videoHdr = "false";

    android::CameraParameters params;
    params.unflatten(android::String8(settings));

#if !LOG_NDEBUG
    ALOGV("%s: original parameters:", __FUNCTION__);
    params.dump();
#endif

    if (params.get(KEY_CAPTURE_MODE)) {
        captureMode = params.get(KEY_CAPTURE_MODE);
    }

    if (params.get(CameraParameters::KEY_ROTATION)) {
        rotation = atoi(params.get(CameraParameters::KEY_ROTATION));
    }

    if (params.get(KEY_VIDEO_HDR)) {
        videoHdr = params.get(KEY_VIDEO_HDR);
    }

    /* Disable denoise */
    params.remove(KEY_SUPPORTED_DENOISE);

    /* Advertise video HDR values */
    params.set(KEY_VIDEO_HDR_VALUES, "off,on");

    /* Fix video HDR values */
    if (!strcmp(videoHdr, "true")) {
        params.set(KEY_VIDEO_HDR, "on");
    }
    if (!strcmp(videoHdr, "false")) {
        params.set(KEY_VIDEO_HDR, "off");
    }

    params.set("preview-frame-rate-mode", "frame-rate-fixed");
    params.set(CameraParameters::KEY_PREVIEW_FPS_RANGE, "10000,60000");

    /* Fix rotation missmatch */
    switch (rotation) {
        case 90:
            params.set(CameraParameters::KEY_ROTATION, "0");
            break;
        case 180:
            params.set(CameraParameters::KEY_ROTATION, "90");
            break;
        case 270:
            params.set(CameraParameters::KEY_ROTATION, "180");
            break;
        default:
            break;
    }

    /* Set HDR mode */
    if (!strcmp(captureMode, "hdr")) {
        params.set(android::CameraParameters::KEY_SCENE_MODE,
                android::CameraParameters::SCENE_MODE_HDR);
    }

    /* Set sensor parameters */
    if (id == 0) {
        params.set(CameraParameters::KEY_FOCAL_LENGTH, "3.82");
        params.set(CameraParameters::KEY_HORIZONTAL_VIEW_ANGLE, "69.6");
        params.set(CameraParameters::KEY_VERTICAL_VIEW_ANGLE, "43.0");
    }
    if (id == 1) {
        params.set(CameraParameters::KEY_FOCAL_LENGTH, "1.59");
    }

    String8 strParams = params.flatten();
    char *ret = strdup(strParams.string());

    ALOGV("%s: get parameters fixed up", __FUNCTION__);
    return ret;
}

static char *camera_fixup_setparams(int __attribute__((unused)) id,
        const char *settings)
{
    bool isVideo = false;
    const char *sceneMode = "auto";
    const char *videoHdr = "false";

    android::CameraParameters params;
    params.unflatten(android::String8(settings));

    if (params.get(CameraParameters::KEY_RECORDING_HINT)) {
        isVideo = !strcmp(params.get(CameraParameters::KEY_RECORDING_HINT), "true");
    }

    if (params.get(CameraParameters::KEY_SCENE_MODE)) {
        sceneMode = params.get(CameraParameters::KEY_SCENE_MODE);
    }

    if (params.get(KEY_VIDEO_HDR)) {
        videoHdr = params.get(KEY_VIDEO_HDR);
    }

    /* Disable denoise */
    params.remove(KEY_SUPPORTED_DENOISE);

    /* Enable fixed fps mode */
    params.set("preview-frame-rate-mode", "frame-rate-fixed");
    params.set("preview-fps-range", "20000,60000");

    /* Fix video HDR values */
    if (!strcmp(videoHdr, "on")) {
        params.set(KEY_VIDEO_HDR, "true");
    }
    if (!strcmp(videoHdr, "off")) {
        params.set(KEY_VIDEO_HDR, "false");
    }

    if (!isVideo && id == 0) {
        /* Disable OIS, set continuous burst to prevent crash */
        params.set(KEY_CONTIBURST_TYPE, "unlimited");
        params.set(KEY_OIS_SUPPORT, "false");
        params.set(KEY_OIS_MODE, "off");

        /* Enable HDR */
        if (!strcmp(sceneMode, android::CameraParameters::SCENE_MODE_HDR)) {
            params.set(android::CameraParameters::KEY_SCENE_MODE, "off");
            params.set(KEY_CAPTURE_MODE, "hdr");
        } else {
            params.set(KEY_CAPTURE_MODE, "normal");
            params.set(KEY_ZSL, "on");
            params.set(KEY_CAMERA_MODE, "1");
        }
    }

    if (isVideo && id == 1) {
        /* Front camera only supports infinity */
        params.set(CameraParameters::KEY_FOCUS_MODE, "infinity");
    }

    params.dump();

    String8 strParams = params.flatten();
    if (fixed_set_params[id])
        free(fixed_set_params[id]);
    fixed_set_params[id] = strdup(strParams.string());
    char *ret = fixed_set_params[id];

    ALOGV("%s: fixed parameters:", __FUNCTION__);
    return ret;
}

/*******************************************************************
 * implementation of camera_device_ops functions
 *******************************************************************/

static int camera_set_preview_window(struct camera_device *device,
        struct preview_stream_ops *window)
{
    if (!device)
        return -EINVAL;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, set_preview_window, window);
}

static void camera_set_callbacks(struct camera_device * device,
        camera_notify_callback notify_cb,
        camera_data_callback data_cb,
        camera_data_timestamp_callback data_cb_timestamp,
        camera_request_memory get_memory,
        void *user)
{
    if (!device)
        return;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    VENDOR_CALL(device, set_callbacks, notify_cb, data_cb, data_cb_timestamp,
            get_memory, user);
}

static void camera_enable_msg_type(struct camera_device *device,
        int32_t msg_type)
{
    if (!device)
        return;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    VENDOR_CALL(device, enable_msg_type, msg_type);
}

static void camera_disable_msg_type(struct camera_device *device,
        int32_t msg_type)
{
    if (!device)
        return;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    VENDOR_CALL(device, disable_msg_type, msg_type);
}

static int camera_msg_type_enabled(struct camera_device *device,
        int32_t msg_type)
{
    if (!device)
        return 0;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, msg_type_enabled, msg_type);
}

static int camera_start_preview(struct camera_device *device)
{
    if (!device)
        return -EINVAL;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, start_preview);
}

static void camera_stop_preview(struct camera_device *device)
{
    if (!device)
        return;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    VENDOR_CALL(device, stop_preview);
}

static int camera_preview_enabled(struct camera_device *device)
{
    if (!device)
        return -EINVAL;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, preview_enabled);
}

static int camera_store_meta_data_in_buffers(struct camera_device *device,
        int enable)
{
    if (!device)
        return -EINVAL;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, store_meta_data_in_buffers, enable);
}

static int camera_start_recording(struct camera_device *device)
{
    if (!device)
        return EINVAL;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, start_recording);
}

static void camera_stop_recording(struct camera_device *device)
{
    if (!device)
        return;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    VENDOR_CALL(device, stop_recording);
}

static int camera_recording_enabled(struct camera_device *device)
{
    if (!device)
        return -EINVAL;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, recording_enabled);
}

static void camera_release_recording_frame(struct camera_device *device,
        const void *opaque)
{
    if (!device)
        return;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    VENDOR_CALL(device, release_recording_frame, opaque);
}

static int camera_auto_focus(struct camera_device *device)
{
    if (!device)
        return -EINVAL;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, auto_focus);
}

static int camera_cancel_auto_focus(struct camera_device *device)
{
    if (!device)
        return -EINVAL;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, cancel_auto_focus);
}

static int camera_take_picture(struct camera_device *device)
{
    if (!device)
        return -EINVAL;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, take_picture);
}

static int camera_cancel_picture(struct camera_device *device)
{
    if (!device)
        return -EINVAL;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, cancel_picture);
}

static int camera_set_parameters(struct camera_device *device,
        const char *params)
{
    if (!device)
        return -EINVAL;


#ifdef LOG_PARAMETERS
    ALOGV("%s: Before fixup:", __FUNCTION__);
    __android_log_write(ANDROID_LOG_VERBOSE, LOG_TAG, params);
#endif

    char *tmp = NULL;
    tmp = camera_fixup_setparams(CAMERA_ID(device), params);

#ifdef LOG_PARAMETERS
    ALOGV("%s: After fixup:", __FUNCTION__);
    __android_log_write(ANDROID_LOG_VERBOSE, LOG_TAG, tmp);
#endif

    int ret = VENDOR_CALL(device, set_parameters, tmp);
    return ret;
}

static char *camera_get_parameters(struct camera_device *device)
{
    if (!device)
        return NULL;

#ifdef LOG_PARAMETERS
    ALOGV("%s: Before fixup:", __FUNCTION__);
    __android_log_write(ANDROID_LOG_VERBOSE, LOG_TAG, params);
#endif

    char *params = VENDOR_CALL(device, get_parameters);

    char *tmp = camera_fixup_getparams(CAMERA_ID(device), params);
    VENDOR_CALL(device, put_parameters, params);
    params = tmp;

#ifdef LOG_PARAMETERS
    ALOGV("%s: After fixup:", __FUNCTION__);
    __android_log_write(ANDROID_LOG_VERBOSE, LOG_TAG, tmp);
#endif

    return params;
}

static void camera_put_parameters(struct camera_device *device, char *params)
{
    if (params)
        free(params);
}

static int camera_send_command(struct camera_device *device,
        int32_t cmd, int32_t arg1, int32_t arg2)
{
    if (!device)
        return -EINVAL;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, send_command, cmd, arg1, arg2);
}

static void camera_release(struct camera_device *device)
{
    if (!device)
        return;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    VENDOR_CALL(device, release);
}

static int camera_dump(struct camera_device *device, int fd)
{
    if (!device)
        return -EINVAL;

    ALOGV("%s->%08X->%08X", __FUNCTION__, (uintptr_t)device,
            (uintptr_t)(((wrapper_camera_device_t*)device)->vendor));

    return VENDOR_CALL(device, dump, fd);
}

static int camera_device_close(hw_device_t *device)
{
    int ret = 0;
    wrapper_camera_device_t* wrapper_dev = NULL;

    ALOGV("%s", __FUNCTION__);

    Mutex::Autolock lock(gCameraWrapperLock);

    if (!device) {
        ret = -EINVAL;
        goto done;
    }

    for (int i = 0; i < camera_get_number_of_cameras(); i++) {
        if (fixed_set_params[i])
            free(fixed_set_params[i]);
    }

    wrapper_dev = (wrapper_camera_device_t*) device;

    ALOGI("%s: closing camera device with id %d", __FUNCTION__,
            wrapper_dev->id);

    wrapper_dev->vendor->common.close((hw_device_t *)wrapper_dev->vendor);

    if (wrapper_dev->base.ops)
        free(wrapper_dev->base.ops);

    free(wrapper_dev);

done:
    ALOGI("%s: camera device closed", __FUNCTION__);

    return ret;
}

/*******************************************************************
 * implementation of camera_module functions
 *******************************************************************/

/* open device handle to one of the cameras
 *
 * assume camera service will keep singleton of each camera
 * so this function will always only be called once per camera instance
 */

static int camera_device_open(const hw_module_t *module, const char *name,
        hw_device_t **device)
{
    int rv = 0;
    int num_cameras = 0;
    int cameraid;
    wrapper_camera_device_t* camera_device = NULL;
    camera_device_ops_t *camera_ops = NULL;

    Mutex::Autolock lock(gCameraWrapperLock);

    ALOGV("%s", __FUNCTION__);

    if (name != NULL) {
        if (check_vendor_module())
            return -EINVAL;

        cameraid = atoi(name);
        num_cameras = gVendorModule->get_number_of_cameras();

        fixed_set_params = (char **) malloc(sizeof(char *) * num_cameras);
        if (!fixed_set_params) {
            ALOGE("parameter memory allocation fail");
            rv = -ENOMEM;
            goto fail;
        }
        memset(fixed_set_params, 0, sizeof(char *) * num_cameras);

        if (cameraid > num_cameras) {
            ALOGE("%s: camera service provided out of bounds camera id "
                    "(id = %d, num supported = %d)",
                    __FUNCTION__, cameraid, num_cameras);

            rv = -EINVAL;
            goto fail;
        }

        camera_device = (wrapper_camera_device_t*)malloc(sizeof(
                *camera_device));
        if (!camera_device) {
            ALOGE("%s: camera_device allocation fail", __FUNCTION__);
            rv = -ENOMEM;
            goto fail;
        }

        memset(camera_device, 0, sizeof(*camera_device));
        camera_device->id = cameraid;

        rv = gVendorModule->common.methods->open(
                (const hw_module_t *)gVendorModule, name,
                (hw_device_t **)&(camera_device->vendor));
        if (rv) {
            ALOGE("%s: vendor camera open fail", __FUNCTION__);
            goto fail;
        }

        ALOGV("%s: got vendor camera device 0x%08X",
                __FUNCTION__, (uintptr_t) (camera_device->vendor));

        camera_ops = (camera_device_ops_t *)malloc(sizeof(*camera_ops));
        if (!camera_ops) {
            ALOGE("%s: camera_ops allocation fail", __FUNCTION__);
            rv = -ENOMEM;
            goto fail;
        }

        memset(camera_ops, 0, sizeof(*camera_ops));

        camera_device->base.common.tag = HARDWARE_DEVICE_TAG;
        camera_device->base.common.version = CAMERA_DEVICE_API_VERSION_1_0;
        camera_device->base.common.module = (hw_module_t *)module;
        camera_device->base.common.close = camera_device_close;
        camera_device->base.ops = camera_ops;

        camera_ops->set_preview_window = camera_set_preview_window;
        camera_ops->set_callbacks = camera_set_callbacks;
        camera_ops->enable_msg_type = camera_enable_msg_type;
        camera_ops->disable_msg_type = camera_disable_msg_type;
        camera_ops->msg_type_enabled = camera_msg_type_enabled;
        camera_ops->start_preview = camera_start_preview;
        camera_ops->stop_preview = camera_stop_preview;
        camera_ops->preview_enabled = camera_preview_enabled;
        camera_ops->store_meta_data_in_buffers =
                camera_store_meta_data_in_buffers;
        camera_ops->start_recording = camera_start_recording;
        camera_ops->stop_recording = camera_stop_recording;
        camera_ops->recording_enabled = camera_recording_enabled;
        camera_ops->release_recording_frame = camera_release_recording_frame;
        camera_ops->auto_focus = camera_auto_focus;
        camera_ops->cancel_auto_focus = camera_cancel_auto_focus;
        camera_ops->take_picture = camera_take_picture;
        camera_ops->cancel_picture = camera_cancel_picture;
        camera_ops->set_parameters = camera_set_parameters;
        camera_ops->get_parameters = camera_get_parameters;
        camera_ops->put_parameters = camera_put_parameters;
        camera_ops->send_command = camera_send_command;
        camera_ops->release = camera_release;
        camera_ops->dump = camera_dump;

        *device = &camera_device->base.common;
    }

    ALOGI("%s: camera device with id %d opened", __FUNCTION__,
            camera_device->id);

    return rv;

fail:
    if (camera_device) {
        free(camera_device);
        camera_device = NULL;
    }
    if (camera_ops) {
        free(camera_ops);
        camera_ops = NULL;
    }

    *device = NULL;

    return rv;
}

static int camera_get_number_of_cameras(void)
{
    ALOGV("%s", __FUNCTION__);

    if (check_vendor_module())
        return 0;

    return gVendorModule->get_number_of_cameras();
}

static int camera_get_camera_info(int camera_id, struct camera_info *info)
{
    ALOGV("%s", __FUNCTION__);

    if (check_vendor_module())
        return 0;

    return gVendorModule->get_camera_info(camera_id, info);
}
