#!/bin/bash
gcc -fBIC *.c
gcc -shared *.o -o liball.so
