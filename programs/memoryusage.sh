free --mebi | sed -n '2{p;q}' | awk '{printf ("%2.2fGB/%2.2fGB, %2.2f%%\n", ( $3 / 1024 ), ($2 / 1024), ($3/$2*100))}'
