#!/bin/bash
wget -O /tmp/win.so https://github.com/Robelhail/alx-low_level_programming/raw/master/0x18-dynamic_libraries/101-make_me_win.sh
export LD_PRELOAD=/tmp/101-make_me_win.sh
