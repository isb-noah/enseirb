#include <stdio.h>

void print_array(int* t, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", t[i]);
    }
}

int main()
{   
    int tab[6] = {1, 2, 3, 5, 7, 10};
    print_array(tab, 6);
    return 0;
}