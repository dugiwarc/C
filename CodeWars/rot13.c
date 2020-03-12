#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char *rot13(const char *src)
{
        char *rot = malloc(strlen(src) * sizeof(char));
        int index = 0;
        while (*src)
        {
                if (*src >= 97 && *src <= 122)
                        rot[index] = ((*src - 97) + 13) % 26 + 97;
                else if (*src >= 65 && *src <= 90)
                        rot[index] = ((*src - 65) + 13) % 26 + 65;
                else
                        rot[index] = *src;
                index++;
                src++;
        }
        rot[index] = '\0';
        return rot;
}

int main()
{
        char word[256] = "test", *pword = word;
        rot13(pword);

        return 0;
}