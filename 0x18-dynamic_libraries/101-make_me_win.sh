#!/bin/bash
gcc -shared -o liblot.so lot.o
LD_PRELOAD=./liblot.so ./gm 9 8 10 24 75 9
