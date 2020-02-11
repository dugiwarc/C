#include <stdio.h>
#include <stdlib.h>

unsigned int lire_16()
{
        char num[16] = "";
        fgets(num, 16, stdin);
        unsigned int n = strtol(num, NULL, 16);
        printf("n = %d\n", n);
        return n;
}

int main()
{
        unsigned int n = lire_16();
        return 0;
}