#!/bin/bash
gcc -c -Wall -fPIC *.c && gcc -shared -Wl,-soname,libholberton.so -o libholberton.so *.o
