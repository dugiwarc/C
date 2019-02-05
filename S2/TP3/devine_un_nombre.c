#include <stdio.h>
#include <stdlib.h>

int main () 
{
    int n, g, i;

    n = 5;

    // Initialise generateur de nombres aleatoires

    n = rand() % 100;

    for(i = 0; i < 50; i++)
    {
        printf("Essai %d\n:", i);
        scanf("%d", &g);
        if (g == n)
        {
            printf("Whouaaaaa.NO.WAY!");
            break;
        }
    }

    return 0;
}
