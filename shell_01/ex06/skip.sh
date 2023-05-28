#!/bin/sh
# p = prints the first line n = skipts the next line
# p+n = prints the first line skipts the seconds prints the third and so on.
ls -l | sed -n "p;n"