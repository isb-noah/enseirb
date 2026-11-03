#! /bin/bash

k=1
x=$1
parseRec() {
    for c in *
    do
        if [ -d "$c" ]; then
            ~/IF110/TP4/Part1/R1/deepness.sh $k
            echo "$c"
            cd "$c"
            k=$(expr $k + 1)
            parseRec
            cd ..
            k=$(expr $k - 1)
        else
            ~/IF110/TP4/Part1/R1/deepness.sh $k
            echo "$c"
        fi
    done
}


if [ $# -eq 1 ] && [ -d $1 ]; then
    cd $x
    parseRec
else
    parseRec
fi



