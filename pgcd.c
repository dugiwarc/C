#include <stdio.h>

int pgcd(int a, int b)
{
    int c;
    int output = 1;
    if (a > b)
    {
        c = a;
        a = b;
        b = c;
    }

    for(int i = 2; i < b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            if(i % output == 0)
                output = output * (i/output);
            else
            {
                output *= i;
            }
        }        
    }
    printf("%d", output);
    return output;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int number, number_2, a;
    scanf("%d %d", &number, &number_2);

    
    a = gcd(number, number_2);

    printf("%d", a);
    return 0;
}