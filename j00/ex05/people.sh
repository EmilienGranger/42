ldapsearch -xLLL -S cn "uid=z*" cn | grep "cn:" | tail -r | cut -c5-
