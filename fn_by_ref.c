#include <stdio.h>

void addOne(int * n)
{
    (*n)++;
}

int main()
{
    int n = 9;
    printf("Before: %d\n", n);
    addOne(&n);
    printf("After: %d\n", n);

    return 0;
}