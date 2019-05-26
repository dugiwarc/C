#include <stdio.h>

char *series_sum(int n)
{
    float sum = 0.0;
    int count = n;
    char array[10];
    char *pointer = array;

    for (int i = 1; count > 0; i = i + 3)
    {
        sum += (float)1 / i;
        count--;
    }
    sprintf(pointer, "%.2f", sum);
    printf("%s\n", pointer);
    return pointer;
}

int main()
{
    series_sum(2);

    return 0;
}