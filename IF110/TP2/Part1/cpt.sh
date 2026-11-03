#! /bin/bash

if  [ $# -ne 1 ] || [ -d $1 ]; then
    echo "Les arguments sont incorrects" >&2
    exit 1
fi
echo 0 >$1
while true ; do
    read -r x <$1
    echo $((x+1)) >$1
    sleep 1
done
exit 0