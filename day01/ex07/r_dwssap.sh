cat /etc/passwd | grep -v '#' | sed -n 'n;p' | cut -d : -f 1 | rev | sort -r | tr '\n' ',' | sed 's/,/, /g' | cut -d ' ' -f $FT_LINE1-$FT_LINE2 | sed 's/,$/./' | tr -d '\n'
