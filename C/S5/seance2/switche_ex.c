#include <stdio.h>

int main()
{
	int  nb_billes = 3;
	
	switch (nb_billes)
	{
		case 0:
			printf("Je n'ai pas de bille :(\n");
			break;
		case 1:
			printf("J'ai une bille\n");
			break;
		default:
			printf("J'ai plusieurs billes\n");
			break;
	}
	return 0;
}
