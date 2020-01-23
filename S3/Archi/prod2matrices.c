#include <stdio.h>
#include <sys/time.h>
#include "rtclock.h"
#define N 100

double a[N][N], b[N][N], c[N][N];

void initialisation()
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            a[i][j] = i + j * 1.1;
            b[i][j] = i * 2.2 + j;
            c[i][j] = 0;
        }
}

int main()
{
    double t_start, t_end, time1;
    int i, j, k;
    initialisation();

    t_start = rtclock();
    time1 = t_end - t_start;
    fprintf(stdout, "temps sequentiel : %0.6lfs\n", time1);
}