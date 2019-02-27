#include <stdio.h>

void copyString(char *to, char *from)
{
    while(*from)
        *to++ = *from++;

}

int main(void)
{
    char string1[] = "A string to be copied";
    char string2[30];

    copyString(string2, string1);
    printf("%s\n", string2);
    
    return 0;
}