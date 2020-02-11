#include <stdio.h>
#include <string.h>

char *mon_strchr(char *chaine, int car)
{
        char *pbuff;
        int res = 0;

        while (chaine[0] != '\0')
        {
                if (chaine[0] == car)
                {
                        res = 1;
                        *chaine++;
                        break;
                }
                *chaine++;
        }
        pbuff = chaine;

        return res == 0 ? NULL : pbuff;
}

int main()
{
        char str[] = "http://www.unistra.fr";
        char ch = 'k';
        char *ret;

        if ((ret = mon_strchr(str, ch)) == NULL)
                perror("NOT FOUND");

        printf("String after '%c' is '%s'\n", ch, ret);
        return (0);
}