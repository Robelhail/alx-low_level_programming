#!/bin/bash
wget -O /tmp/lottery.so https://github.com/Robelhail/alx-low_level_programming/blob/master/0x18-dynamic_libraries/lottery.so
export LD_PRELOAD=/tmp/lottery.so
