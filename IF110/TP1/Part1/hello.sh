#!/bin/bash

if [ $# -eq 0 ]; then

	echo "Hello sargeras!"

else 
	
	while [ $# -ne 0 ]
	do
		echo "Hello" $1"!"
		shift
		shift
	done

fi
