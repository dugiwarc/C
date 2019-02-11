#include <stdio.h>

void fib_iter(int n)
{
    int seq[10];
    seq[0] = 0;
    seq[1] = 1;
    seq[2] = 1;
    for(int i = 3; i < n; i++)
    {
        seq[i] = seq[i - 1] + seq[i - 2]; 
    }
    printf("Sequence of first %d terms is: ", n);
    for(int j = 0; j < n; j++)
    {
        printf("%d ", seq[j]);
    }
}

int fib_rec(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    else
        return (fib_rec(n-1)+ fib_rec(n-2));
}



int main()
{
    int n, i = 0, c;

    scanf("%d", &n);

    printf("Fibonacci series terms are:\n");

    for (c = 1; c <= n; c++)
    {
        printf("%d ", fib_rec(i));
        i++;
    }

    return 0;
}