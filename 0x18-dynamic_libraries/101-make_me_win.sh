#!/bin/bash
wget -P /tmp -q "https://github.com/Robelhail/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lottery.so"
export LD_PRELOAD="/tmp/lottery.so"
