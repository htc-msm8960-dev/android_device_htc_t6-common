#!/system/bin/sh

buildvariant=`getprop ro.product.device`
case "$buildvariant" in
    "t6vzw" | "t6spr")
        /system/bin/qcks -1 modem_st1 -2 modem_st2 -3 radio_config -4 cdma_record -i /firmware/mdm/image/
        ;;
    *)
        /system/bin/qcks -1 modem_st1 -2 modem_st2 -3 radio_config -4 cdma_record -i /firmware/mdm/image/ -u
        ;;
esac
