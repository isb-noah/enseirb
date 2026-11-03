#include <stdio.h>
#include <stdlib.h>
struct decomposition 
{
    int heures;
    int minutes;
};


struct decomposition decomp(int min)
{
    struct decomposition a;
    a.heures = min/60;
    a.minutes = min%60;
    return a;
}

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Fournissez un argument\n");
        return 1;
    }
    struct decomposition hm= decomp(atoi(argv[1]));
    printf("%d heure_s et %d minute_s\n",hm.heures , hm.minutes);
    return 0;
}