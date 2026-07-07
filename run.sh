#!/usr/bin/env sh

cc gmath_test.c -lm -std=c11 -o gmath_test -g3 -Wall -Wextra -Wpedantic -pedantic

if [ $? -eq 0 ]; then
    ./gmath_test "$@"
fi
