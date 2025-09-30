#!/bin/bash


cc *.c -c -I../include/
cc *.o autograder/main_taskXX.o -L../lib/my/ -o task11 -lmy
