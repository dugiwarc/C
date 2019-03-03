#include <stdio.h>

void numPrintTo(int, int);
int printSum(int);
int fibbo(int);
int main()
{
    // printf("\n\n Recursion : print first 50 natural numbers :\n");
    // printf("-------------------------------------------------\n");
    // printf(" The natural numbers are :");

    // numPrintTo(50, 0);
    // int a = printSum(5);
    int a = fibbo(19);
    printf("%d", a);
    return 0;
}

void numPrintTo(int max, int i)
{
    if (i == max)
    {
        printf(" %d ", max);
        return;
    }
    else
    {
        printf(" %d ", i);
        numPrintTo(max, i+1);
    }
    
}

int printSum(int n)
{
    if(n==0)
        return 0;
    return n + printSum(n-1);
}

int fibbo(int n)
{
if (n == 0 || n == 1)
    return n;
return (fibbo(n-1)+fibbo(n-2));
}