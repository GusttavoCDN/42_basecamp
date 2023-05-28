#!/bin/sh
# The ! inverts the logica. In the below command is excluding the lines out of the range.
cat /etc/passwd | cut -d ':' -f1 | sed -n 'n;p' | rev | sort -r | sed "$FT_LINE1,$FT_LINE2!d" | tr '\n' ',' | sed 's/,/, /g' | rev | sed 's/ ,/./' | rev