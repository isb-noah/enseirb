#! /bin/bash

z=$1

deepness() {
    for ((i = 0; i < z; i++))
    do
        c="----"
        e=" "
        printf "%s %s" $c $e
    done
}

deepness