cat /etc/passwd | cut -d':' -f 1 | sed -n 'n;p' | rev | sort -r | awk "NR==$FT_LINE1, NR==$FT_LINE2" | sed 's/$/,/' | tr '\n' ' ' | sed 's/..$/./'

