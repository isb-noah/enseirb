#include <stdio.h>
int my_isalpha2(char n)
{
    return (n > 64 && n < 91);
}    


char mytolower(char n)
{
    if (my_isalpha2(n))
    {
    return n+32 ;
    }
    else
    {
        return n;
    }
    
}

int main()
{
    char n = 'J';
    printf("%c\n",mytolower(n));
    return 0;
}