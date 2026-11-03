while read line; do
    kill $line
    echo $line": Morituri Te Salutant"
    
done <arene.txt
rm arene.txt
touch arene.txt
