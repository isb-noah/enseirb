#include <stdio.h>

int main()
{
        char i=0;
        char bs = 0;
        char bi = 0;
        while(1)
	{
		i++;
		if (i>bs)
		{
			bs = i;

		}
		if (i<bi)
		{
			bi = i;
			break;
		}
	}
        printf("[%hhd,%hhd]\n",bi,bs);
        return 0;
} 




