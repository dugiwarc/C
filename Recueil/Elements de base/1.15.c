#include <stdio.h>
#include <stdlib.h>

void ecrire_2(unsigned int number)
{
        if (number)
        {
                ecrire_2(number >> 1);
                putc((number & 1) ? '1' : '0', stdout);
        }
}

int main()
{
        ecrire_2(10);
        puts("");
        putc((131 & 1) ? 'A' : 'B', stdout);
        puts("");
        return 0;
}