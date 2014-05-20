#!/system/bin/sh

# Workaround for conn_init not copying the updated firmware
rm /data/misc/wifi/WCNSS_qcom_cfg.ini 2> /dev/null
rm /data/misc/wifi/WCNSS_qcom_wlan_nv.bin 2> /dev/null

echo `getprop ro.serialno` > /sys/devices/platform/wcnss_wlan.0/serial_number
setprop wlan.driver.config /data/misc/wifi/WCNSS_qcom_cfg.ini

# Configure the hardware. Set a random MAC if nvitems aren't available yet.
logwrapper /system/bin/conn_init

echo 1 > /dev/wcnss_wlan

