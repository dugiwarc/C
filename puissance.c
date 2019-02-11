#include <stdio.h>

int puissance_rec(int n, int pow)
{   
    if(pow == 0)
        return 1;
    
    return (n * puissance(n, pow - 1));
}

int puissance_iter(int n, int pow)
{
    int output = 1;
    for (int i = 1; i <= pow; i++)
        output *= n;

    return output;
}

int main()
{
    int n, pow;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("Enter a power\n");
    scanf("%d", &pow);

    int a = puissance_iter(n, pow);

    printf("Your result: %d\n", a);

    return 0;
}