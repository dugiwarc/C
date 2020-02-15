#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void allocate_0(char *ch)
{
        for (int i = 0; i < 256; i++)
        {
                ch[i] = '\0';
        }
}

char *reverse_letter(const char *str)
{
        int i, len = strlen(str), index = 0;
        char *out = (char *)malloc(256);
        char *rev_out = (char *)malloc(256);
        allocate_0(out);
        allocate_0(rev_out);
        for (i = 0; *str != '\0'; i++)
        {

                if (!(isalpha(*str)))
                {
                        len--;
                        *(str++);
                }
                if (isalpha(*str))
                {
                        out[index] = *str;
                        *(str++);
                        index++;
                }
        }
        index = 0;
        len = strlen(out);
        for (i = len - 1; i >= 0; i--)
        {
                rev_out[index] = out[i];
                index++;
        }
        free(out);
        return rev_out; //coding and coding..
}

int main()
{
        char *inp;
        inp = reverse_letter("krishan");
        puts(inp);
        free(inp);
        inp = reverse_letter("krish21an");
        puts(inp);
        free(inp);
        inp = reverse_letter("ultr53o?n");
        puts(inp);
        free(inp);
        inp = reverse_letter("ab23c");
        puts(inp);
        free(inp);

        return EXIT_SUCCESS;
}