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


int main()
{
    char* chaine = "Bonjour";
    printf("%s a %d characteres\n", chaine, my_strlen(chaine));
    return 0;
}