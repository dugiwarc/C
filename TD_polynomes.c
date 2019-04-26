#include <stdio.h>
#include <stdlib.h>

// 1

typedef struct 
{
    int degree;
    int * coeff;
} polynome;


// 2

polynome * new_polynome(int n)
{
    polynome * newest_polynome = (polynome *) malloc (sizeof(polynome));
    for(int i = 0; i < n; i++)
        newest_polynome->coeff[i] = 1;
    
    return newest_polynome;
}

int main(void)
{
    polynome * new_polynome = (polynome *) malloc (sizeof(polynome));
    new_polynome = new_polynome(5);

    for(int i = 0; i < 5; i++)
        printf("%d", new_polynome->coeff[i]);

    free(new_polynome->coeff);
    return 0;
}

