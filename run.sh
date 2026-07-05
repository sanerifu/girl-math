#!/usr/bin/env sh

cc gmath_test.c -std=gnu11 -o gmath_test -g3

if [ $? -eq 0 ]; then
    ./gmath_test "$@"
fi
