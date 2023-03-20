#!/bin/bash
wget -O /tmp/lottery.so https://github.com/Robelhail/alx-low_level_programming/raw/master/0x17-dynamic_libraries/lottery.so

export LD_PRELOAD=/tmp/lottery.so
