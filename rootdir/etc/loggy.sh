#!/bin/sh
# loggy.sh.

date=`date +%F_%H-%M-%S`
logcat -v time -f  /storage/sdcard0/oreo_logcat_${date}.txt
