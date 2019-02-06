#include <stdio.h>

int main()
{
    int x, y, temp;

    printf("Enter two integers\n");
    scanf("%d%d", &x, &y);

    printf("Before Swapping\nFirst Integer = %d\nSecond Integer = %d\n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("After Swapping\nFirst Integer = %d\nSecond Integer = %d\n", x, y);

    return 0;
}