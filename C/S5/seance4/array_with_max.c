#include <stdio.h>

void print_array(int* t, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", t[i]);
    }
}

int max_array(int* t, int n)
{
    int m = t[0];
    for (int i = 0; i < n; i++)
    {
        if (t[i] > m)
        {
            m = t[i];
        }
    }
    return m;
}


int* array_with_max(int t1[], int t2[], int n)
{
    int m1 = max_array(t1, n);
    int m2 = max_array(t2, n);
    if (m1 > m2)
    {
        return t1;
    }
    else
    {
        return t2;
    }
}
int main()
{
    int t1[3] = {1, 2, 3};
    int t2[3] = {1, 2, 4};
    print_array(t1, 3);
    print_array(t2, 3);
    print_array(array_with_max(t1, t2, 3), 3);

    return 0;
}