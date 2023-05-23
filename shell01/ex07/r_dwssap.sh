#!/bin/sh
cat /etc/passwd | cut -d':' -f1 | sed -n 'n;p' | rev | sort -r | sed "$FT_LINE1,$FT_LINE2!d" | tr '\n' ',' | sed 's/,$/./' | sed 's/,/, /g'