#include <stdio.h>			

char nb_bit_char(char x)
{
	int i;
	int nb_bit = 0;
	for (i=0 ; i<8*sizeof(char) ; i++)
	{
		if((x&(1<<i)) != 0)
		{
			nb_bit++;
		}
	}
	return nb_bit;
}

int main()
{	
	printf ("%hhd\n", nb_bit_char(13));
	return 0; 
}



