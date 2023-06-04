#!/bin/bash
compile="gcc -Wall -Wextra -Werror"
program="main"

cd "./ex00"
$compile *.c -o ../$program