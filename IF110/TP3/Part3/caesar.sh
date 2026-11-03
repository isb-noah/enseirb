#! /bin/bash
while read line; do
    if [ -d "/proc/$line" ]; then
        kill $line
        echo $line": Morituri Te Salutant"
    fi
    
    
done <arene.txt
