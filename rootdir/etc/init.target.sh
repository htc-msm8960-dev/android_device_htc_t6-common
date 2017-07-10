#!/system/bin/sh

buildvariant=`getprop ro.boot.mid`
case "$buildvariant" in
    "0P3P10000" | "0P3P70000")
        /system/bin/qcks -1 modem_st1 -2 modem_st2 -3 radio_config -4 cdma_record -i /firmware/mdm/image/
        ;;
    "0P3P52000" | "0P3P51000")
        /system/bin/qcks -1 modem_st1 -2 modem_st2 -3 radio_config -4 cdma_record -i /firmware/mdm/image/ -u
        ;;
    *)
        /system/bin/qcks -1 modem_st1 -2 modem_st2 -3 radio_config -4 cdma_record -i /firmware/mdm/image/ -u
        ;;
esac
