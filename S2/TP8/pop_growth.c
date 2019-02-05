#include <stdio.h>

int nbYear(int p0, double percent, int aug, int p) {
    percent = percent * (float).01;
    int years = 0;
    for(; p0 < p ;)
    {
      p0 += p0*percent + aug;
      years += 1;
    }
    
    return years;
}

int main()
{
    int a = nbYear(1000, 2, 50, 1200);

    printf("%d", a);
    return 0;
}