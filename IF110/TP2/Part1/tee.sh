#! /bin/bash

if  [ $# -ne 1 ] || [ -d $1 ]; then
    echo "Les arguments sont incorrects" >&2
    exit 1
fi

while read line; do
    echo "$line"
done < $1
exit 0