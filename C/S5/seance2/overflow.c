#include <stdio.h>

int main()
{
	char i=0;
	char bs = 0;
	char bi = 0;
	while (i>=0)
	{
		bs=i++;
	}
	bi=i;
	printf("[%hhd,%hhd]\n",bi,bs);
	return 0;
}



