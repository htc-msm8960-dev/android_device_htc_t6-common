#!/sbin/sh

set -e

# Helper functions
copy()
{
  LD_LIBRARY_PATH=/system/lib /system/bin/toybox cp --preserve=a "$1" "$2"
}

# Detect variant and copy its specific-blobs
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

# Skip copying blobs in case of Dual SIM variants because the files are already in the proper location
if [ "$variant" == "vzw" ] || [ "$variant" == "spr" ] || [ "$variant" == "gsm" ] || [ "$variant" == "tl" ]; then
  basedir="/system/vendor/blobs/$variant/"
  if [ -d $basedir ]; then
    cd $basedir

    for file in `find . -type f` ; do
      mkdir -p `dirname /system/$file`
      copy $file /system/$file
    done

    for file in bin/* ; do
      chmod 755 /system/$file
    done
  else
    echo "Expected source directory does not exist!"
    exit 1
  fi
fi

exit 0
