#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000000

int main()
{
    double *tab = calloc(N, sizeof(double));
    clock_t time;

    time = clock();
    for (size_t i = 0; i < N; i++)
        for (size_t j = 0; j < 100; j++)
            tab[j] += 3.14;
    time = clock() - time;

    printf("Temps de calcul : %g s\n", ((double)time) / CLOCKS_PER_SEC);
    return 0;
}