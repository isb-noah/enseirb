#! /bin/bash
if [ $# -ne 1 ]; then
  echo "Please provide exactly one argument" >&2 # &2 est la sortie d’erreur
  exit 1 # un code de retour faux
fi

usr1() 
{
    echo $$": Morituri Te Salutant"
    exit 0
}
k=$1
while true ; do

    if [ -z "$pidInitial" ]; then
        # echo Processus initial demare avec PID = $$
        export pidInitial=$$
    
       # echo Processus $$ demare avec le processus initial $pidInitial
    fi
    
    if [ $k -gt 1 ]; then
        k=$(expr $1 - 1)

        ./gladiateur.sh $k
    fi

    trap 'usr1' Usr1
    echo $$ ": AVE Caesar"
    sleep 5 &
    wait $!
    
done


