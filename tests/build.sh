#!/bin/sh

#OPTS="-Wall -s -O3"
OPTS="-ggdb -Wall"
gcc $OPTS -I.. -o test test.c ../pool.c
