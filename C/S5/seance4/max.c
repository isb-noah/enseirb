#include <stdio.h>
int main()
{
    int nombres[9] = {5, 4, 2, 1, 9, 4, 3, 8, 3};
    int maximum = nombres[0];
    int i;
    for (i = 1; i < 9; i++)
    {
        if (maximum < nombres[i])
        {
            maximum = nombres[i];
        }
    }
    printf("Le maximum est : %d\n" , maximum);
}