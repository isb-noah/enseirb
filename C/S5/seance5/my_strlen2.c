#include <stdio.h>

int my_strlen(char* s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
        
    }
    return i;
}


int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++)
    {
        printf("%s a %d characteres\n", argv[i], my_strlen(argv[i]));
    }
    return 0;
}