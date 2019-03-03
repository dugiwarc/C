#include <stdio.h>


int _affiche_prime()
{
    int i, Number, count; 
    
    printf(" Prime Number from 1 to 100 are: \n"); 
    for(Number = 1; Number <= 100; Number++)
    {
        count = 0;

        for (i = 2; i <= Number/2; i++)
        {
            if(Number % i == 0)
            {
                count++;
                break;
            }
        }

        if(count == 0 && Number != 1 )
        {
            printf(" %d ", Number);
        }  
    }
    printf("2  2 = %d", 2 % 2);
    return 0;
}


int _is_prime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            printf("False");
            return 0;
        }
    }

    printf("True\n");
    return 0;
}

int _is_div(int a, int n)
{
    if (a % n == 0)
    {
        printf("True");
        return 1;
    }
    else 
    {
        printf("False");
        return 0;
    }
}


void arr(int n)
{
    int arr[n];

    arr[0] = 1;
    arr[1] = 1;

    for(int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] * i;
    }

    for(int j = 0; j < n; j++)
        printf("1/%d\n", arr[j]);
}

int arr_rec(int n)
{   
    if(n == 1 || n == 0)
        return 1;
    if(n == 2)
        return 2;
    return (n * arr_rec(n - 1));
}

int main()
{   
    // int n;
    // scanf("%d", &n);
    // _is_prime(n);
    int n, i = 0;

    printf("Entrez un n:\n")
    scanf("%d", &n);
    
    printf("Premiers %d de la suite sont:\n", n);
    for(int c = 1; c <= n; c++)
    {
        printf("1/%d\n", arr_rec(i));
        i++;
    }

    return 0;
}

