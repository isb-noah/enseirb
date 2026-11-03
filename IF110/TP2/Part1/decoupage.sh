#! /bin/bash

if [ $# -ne 2 ] || [ ! -e $1 ] || [ -d $1 ] ; then
    echo "les arguments sont incorrects" >&2 
    exit 1 
fi
while read line; do
    n=1
    for mot in $line ; do
        if [ $n -eq $2 ] ; then
            echo $mot
        fi
        n=$(expr "$n" + 1 )
    done


done <$1
exit 0