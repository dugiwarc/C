#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000

int main()
{
    double(*tab)[N] = malloc(sizeof(double[N][N]));
    clock_t time;

    time = clock();
    for (size_t i = 0; i < N; i++)
        for (size_t j = 0; j < N; j++)
            tab[i][j] = 0.;
    time = clock() - time;

    printf("Temps d'initialisation : %g s\n", ((double)time) / CLOCKS_PER_SEC);
    free(tab);
    return 0;
}