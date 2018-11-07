cat /etc/passwd | grep -v "^#" | awk "NR%2==0" | cut -d":" -f1 | rev | sort -r | awk "NR >= $FT_LINE1-1 && NR <= $FT_LINE2-1" | tr "\n" "," | sed "s/,/, /g" | sed -ne "s/\(.*\)\, /\1\./p"
