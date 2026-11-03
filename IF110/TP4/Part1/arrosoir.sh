#! /bin/bash
x=$1
arroser() {
    
    echo $x >plante.txt
    echo $x
}


boucle_imp() {
    for((i = 0; i<$x; i++ ))
    do
        echo $i >plante.txt
        echo $i
    done

}



boucleRec() {
    if [ "$x" -ne 0 ]; then
        x=$(expr $x - 1)
        read y <plante.txt
        y=$(expr $y + 1)
        echo $y >plante.txt
        boucleRec
    else
        echo "X n'est plus"
    fi
}

boucleRec
