#include <stdio.h>
#include <math.h>

void carre() 
{
    int s;
    printf("Enter a side: ");
    scanf("%d", &s);
    printf("Perimeter: %d, Diagonale: %f", 4 * s, sqrt(2) * s);
}

int main() 
{   
    carre();

    return 0;
}