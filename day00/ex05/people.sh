ldapsearch -LL "uid=z*" cn | grep cn | cut -c 5- | sort -f -d -r
