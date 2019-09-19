# Copyright (C) 2013 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

#
# This file sets variables that control the way modules are built
# thorughout the system. It should not be used to conditionally
# disable makefiles (the proper mechanism to control what gets
# included in a build is to use PRODUCT_PACKAGES in a product
# definition file).
#

# WARNING: This line must come *before* including the proprietary
# variant, so that it gets overwritten by the parent (which goes
# against the traditional rules of inheritance).

# inherit from common msm8960
-include device/htc/msm8960-common/BoardConfigCommon.mk

LOCAL_PATH := device/htc/t6-common

# Kernel
BOARD_KERNEL_BASE := 0x80600000
BOARD_KERNEL_IMAGE_NAME := zImage
BOARD_KERNEL_PAGESIZE := 2048
BOARD_KERNEL_CMDLINE := console=none androidboot.hardware=qcom user_debug=23
BOARD_KERNEL_CMDLINE += androidboot.selinux=permissive
BOARD_MKBOOTIMG_ARGS := --ramdisk_offset 0x01800000
TARGET_KERNEL_CONFIG := t6_defconfig
TARGET_KERNEL_SOURCE := kernel/htc/msm8960
TARGET_USES_EARLY_SUSPEND := true

# Bluetooth
BLUETOOTH_HCI_USE_MCT := true
BOARD_BLUETOOTH_BDROID_BUILDCFG_INCLUDE_DIR := $(LOCAL_PATH)/bluetooth
BOARD_HAVE_BLUETOOTH_QCOM := true

# Boot animation
TARGET_BOOTANIMATION_HALF_RES := true

TARGET_PROCESS_SDK_VERSION_OVERRIDE += \
    /system/vendor/bin/vcsFPService=21 \
    /system/vendor/bin/hw/android.hardware.biometrics.fingerprint@2.1-service=21

# Lineage Hardware
BOARD_HARDWARE_CLASS := $(LOCAL_PATH)/lineagehw

# Filesystem
BOARD_BOOTIMAGE_PARTITION_SIZE := 16777216
BOARD_CACHEIMAGE_FILE_SYSTEM_TYPE := ext4
BOARD_CACHEIMAGE_PARTITION_SIZE := 402652672
BOARD_FLASH_BLOCK_SIZE := 131072
BOARD_RECOVERYIMAGE_PARTITION_SIZE := 16795650
BOARD_SYSTEMIMAGE_PARTITION_SIZE := 2550136832
BOARD_USERDATAIMAGE_PARTITION_SIZE := 26843545600

# FM
AUDIO_FEATURE_ENABLED_FM_POWER_OPT := true
BOARD_HAVE_QCOM_FM := true
TARGET_QCOM_NO_FM_FIRMWARE := true

# Graphics
OVERRIDE_RS_DRIVER := libRSDriver_adreno.so
HAVE_ADRENO_SOURCE := false

# GPS
USE_DEVICE_SPECIFIC_GPS := true

# HIDL
DEVICE_MANIFEST_FILE += $(LOCAL_PATH)/manifest.xml

BOARD_ROOT_EXTRA_FOLDERS := \
    firmware/q6 \
    firmware/mdm \
    firmware/wcnss

BOARD_ROOT_EXTRA_SYMLINKS += \
    /data/tombstones:/tombstones \
    /data/persist:/persist \
    /data/ramdump:/ramdump \
    /data/devlog:/devlog

# Recovery
BOARD_GLOBAL_CFLAGS := -DBOARD_RECOVERY_BLDRMSG_OFFSET=2048
BOARD_NO_SECURE_DISCARD := true
TARGET_RECOVERY_DEVICE_DIRS += device/htc/t6-common
TARGET_RECOVERY_FSTAB := $(LOCAL_PATH)/recovery/fstab.recovery
TARGET_RECOVERY_PIXEL_FORMAT := RGBX_8888
TARGET_USERIMAGES_USE_EXT4 := true
TARGET_USERIMAGES_USE_F2FS := true
LZMA_RAMDISK_TARGETS := recovery

# SELinux
#include device/qcom/sepolicy-legacy/sepolicy.mk
#BOARD_SEPOLICY_DIRS += $(LOCAL_PATH)/sepolicy
BOARD_SEPOLICY_DIRS += device/htc/t6-common/sepolicy-minimal

# Releasetools
TARGET_RELEASETOOLS_EXTENSIONS := device/htc/t6-common/releasetools

# Wifi
BOARD_HAS_QCOM_WLAN := true
BOARD_WLAN_DEVICE := qcwcn
BOARD_WPA_SUPPLICANT_DRIVER := NL80211
BOARD_WPA_SUPPLICANT_PRIVATE_LIB := lib_driver_cmd_$(BOARD_WLAN_DEVICE)
BOARD_HOSTAPD_DRIVER := NL80211
BOARD_HOSTAPD_PRIVATE_LIB := lib_driver_cmd_$(BOARD_WLAN_DEVICE)
TARGET_PROVIDES_WCNSS_QMI := true
TARGET_USES_WCNSS_CTRL := true
TARGET_DISABLE_WCNSS_CONFIG_COPY := true
TARGET_USES_QCOM_WCNSS_QMI := true
WIFI_DRIVER_FW_PATH_AP := "ap"
WIFI_DRIVER_FW_PATH_STA := "sta"
WIFI_DRIVER_FW_PATH_PARAM := "/sys/module/wlan/parameters/fwpath"
WPA_SUPPLICANT_VERSION := VER_0_8_X

# inherit from the proprietary version
-include vendor/htc/t6-common/BoardConfigVendor.mk
