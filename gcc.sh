#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c
./a.out bytecodes/000.m
