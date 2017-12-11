#!/bin/bash
gcc -c -Wall -fPIC *.c && gcc -shared -Wl,-soname,liball.so -o liball.so *.o
