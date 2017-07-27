ldapsearch -LLL -Q  "uid=z*" | egrep "^cn: [Zz]" | cut -c 5- | sort -r
