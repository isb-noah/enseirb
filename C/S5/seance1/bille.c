#include <stdio.h>

int main()
{
	int nb_billes = 3;
	int a_moi = 1;
	if (a_moi && nb_billes)
	{
		if (nb_billes > 1)
		{
			printf("J'ai plus qu'une bille\n");
		}
		else
		{
			printf("j'ai une seule et unique bille\n");
		}
	}
	else
	{
		printf("J'ai rien :(\n");
	}
}
