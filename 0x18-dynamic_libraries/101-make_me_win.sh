#!/bin/bash
wget -O /tmp/liblot.so https://github.com/ngarukaalx/alx-low_level_programming/blob/master/0x18-dynamic_libraries/liball.so
export LD_PRELOAD=/tmp/liblot.so
