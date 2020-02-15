#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *camel_case(const char *s)
{
        int i, len, space_trigger = 0, is_lowercase = 0;
        len = strlen(s);
        char *out = NULL;
        out = (char *)malloc(256);
        for (i = 0; i < 256; i++)
                out[i] = '\0';
        for (i = 0; i < len; i++)
        {
                if (*(s) == 32)
                {
                        space_trigger = 1;
                        *(s++);
                        len--;
                        i--;
                        continue;
                }
                if (i == 0 && *(s) >= 97 && *(s) <= 122 || space_trigger)
                {
                        out[i] = *(s)-32;
                        space_trigger = 0;
                }
                else
                        out[i] = *(s);
                *(s++);
        }

        return out;
}

int main()
{
        char *s;
        s = camel_case("hello case");
        puts(s);
        free(s);
        s = camel_case("camel case word");
        puts(s);
        free(s);
        s = camel_case(" say hello ");
        puts(s);
        free(s);
        return EXIT_SUCCESS;
}