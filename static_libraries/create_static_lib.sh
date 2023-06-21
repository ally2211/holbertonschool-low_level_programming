#!/bin/bash

gcc -c *.c

ar rcs liball.a *.o

chmod +x create_static_lib.sh
