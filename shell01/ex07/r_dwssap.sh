cat /etc/passwd | egrep  -v "^#" | awk "NR %2==0" |cut -d ":" -f 1 |rev |sort -r | awk " NR>=$FT_LINE1 && $FT_LINE2>=NR " | tr "\n" " " |xargs | sed 's/ /, /g' |tr "\n" "."
