# Art
PRODUCT_PROPERTY_OVERRIDES += \
    dalvik.vm.dex2oat-swap=false

# Audio
PRODUCT_PROPERTY_OVERRIDES += \
    audio.offload.disable=1 \
    persist.audio.fluence.speaker=true \
    persist.audio.fluence.voicecall=true \
    persist.audio.fluence.voicerec=false \
    ro.qc.sdk.audio.fluencetype=fluence \
    use.dedicated.device.for.voip=true \
    use.voice.path.for.pcm.voip=true

# Bluetooth
PRODUCT_PROPERTY_OVERRIDES += \
    qcom.bluetooth.soc=smd \
    ro.qualcomm.bt.hci_transport=smd

# Camera
PRODUCT_PROPERTY_OVERRIDES += \
    ro.cam.hw.version=t6

# Display
PRODUCT_PROPERTY_OVERRIDES += \
    debug.hwui.use_buffer_age=false \
    ro.opengles.version=196608 \
    ro.sf.lcd_density=400

# GPS
PRODUCT_PROPERTY_OVERRIDES += \
    ro.gps.set_privacy=1 \
    persist.gps.qc_nlp_in_use=0 \
    ro.qc.sdk.izat.premium_enabled=0 \
    ro.qc.sdk.izat.service_mask=0x4 \
    ro.gps.agps_provider=1

# Input
PRODUCT_PROPERTY_OVERRIDES += \
    ro.input.noresample=1

# NFC
PRODUCT_PROPERTY_OVERRIDES += \
    debug.nfc.fw_download=true \
    debug.nfc.fw_boot_download=false \
    debug.nfc.se=true \
    ro.nfc.port=I2C

# Performance
PRODUCT_PROPERTY_OVERRIDES += \
    ro.vendor.extension_library=/system/vendor/lib/libqti-perfd-client.so

# Radio
PRODUCT_PROPERTY_OVERRIDES += \
    ro.baseband.arch=mdm

# Time services
PRODUCT_PROPERTY_OVERRIDES += \
    persist.timed.enable=true
