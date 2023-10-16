#!/bin/bash
gcc -fBIC *.c
gcc -shared *.c -o liball.so
