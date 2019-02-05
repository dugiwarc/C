#include <stdio.h>

void calcul()
{
    int a, b, op;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operation number:\n1.Add\n2.Subtract\n3.Divide\n4.Multiply\n");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
            printf("%d + %d = %d", a, b, a + b);
            break;
        case 2:
            printf("%d - %d = %d", a, b, a - b);
            break;
        case 3:
            if (b == 0)
            {
                printf("Error: Division by 0 ");
                break;
            }
            printf("%d / %d = %f", a, b, (float)a/b);
            break;
        case 4:
            printf("%d * %d = %d", a, b, a * b);
            break;
        default:
            printf("No such operation");
            break;
    }
}

int main()
{
    calcul();

    return 0;
}