#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *f1(int val)
{
        int *p;
        p = val == 0 ? NULL : &val;
        return p;
}
// char *f2(void)
// {
//         char tab[3];
//         strcpy(tab, "abc");
//         return tab;
// }
static char *texte[] = {
    "une",
    "suite",
    "de",
    "lignes",
    NULL,
};
void f3(void)
{
        char **p;
        for (p = texte; *p != NULL; **p++)
                printf("%s\n", *p);
}
char tab[] = "abcdef\n";
void f4(void)
{
        int i;
        for (i = 0; *(tab + i); i++)
                putchar(*(tab + i));
        for (; *tab; (*tab)++)
                putchar(*tab);
}
void f5(char tab[], int pas)
{
        char chaine[] = "abcdef";
        int i;
        for (i = 0; i < sizeof(chaine); i += pas)
                chaine[i] = '-';
        strcpy(tab, chaine);
}

int main()
{
        char t[10] = "GEorge";
        puts(t);
        f5(t, 1);
        return 0;
}