#include <stdio.h>
#include <stdlib.h>

void decomposition(int min, int* h, int* min2) // min c'est les minutes totales et min2 les minutes restantes apres deduction des heures
{
    *h = min/60;
    *min2 = min%60;
}

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Fournissez un argument\n");
        return 1;
    }
    int h = 0;
    int min = 0;
    decomposition(atoi(argv[1]), &h, &min);
    printf("%d heure_s %d minute_s\n", h, min);
    return 0;
}