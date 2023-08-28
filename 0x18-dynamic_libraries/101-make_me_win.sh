#!/bin/bash
wget -p /tmp https://github.com/ngarukaalx/alx-low_level_programming/blob/master/0x18-dynamic_libraries/liblot.so
export LD_PRELOAD=/tmp/liblot.so
