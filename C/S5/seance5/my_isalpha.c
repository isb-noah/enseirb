#include <stdio.h>

int my_isalpha(char n)
{
    return ((n > 64 && n < 91) || (n > 96 && n < 123));
}    






int main()
{
    char x = 'b';
    printf("%c est une lettre ? %d\n", x, my_isalpha(x));
    return 0;
}