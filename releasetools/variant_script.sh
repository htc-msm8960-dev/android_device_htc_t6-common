#!/sbin/sh

set -e

# Detect variant and create symlinks to its specific-blobs
modelid=`getprop ro.boot.mid`

case $modelid in
    "0P3P10000") variant="vzw" ;;
    "0P3P70000") variant="spr" ;;
    "0P3P30000") variant="dug" ;;
    "0P3P20000") variant="dwg" ;;
    "0P3P40000") variant="tl" ;;
    "0P3P52000") variant="gsm"; tw="true" ;;
    "0P3P51000") variant="gsm"; eu="true" ;;
    *)           variant="gsm" ;;
esac

# Skip symlink creation for Dual SIM variants because blobs are already in the proper location
if [ "$variant" == "vzw" ] || [ "$variant" == "spr" ] || [ "$variant" == "gsm" ] || [ "$variant" == "tl" ]; then
  basedir="/system/blobs/$variant/"
  cd $basedir
  chmod 755 bin/*
  find . -type f | while read file; do ln -s $basedir$file /system/$file ; done
fi

exit 0
