#include <stdio.h>

void affiche(char *message)
{
    int i = 3;

    do
    {
        printf("%c", (*message) + i);
    } while (*++message);
    printf("\n");
}

int main()
{
    char *mess1 = NULL;
    char *mess2 = "Hello World";
    affiche(mess2);
    affiche(mess1);
    return 1;
}