#include <stdio.h>

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

int main()
{
    int t[5] = {0, 10, 50, 25, 15};
    printf("%d\n", max_array(t, 5));
    return 0;
}