#include <stdio.h>

int main()
{
    float sum = 0, result; int input;
    float coeffs[8] = {0.3, 0.6, 0.6, 0.3, 0.4, 0.2, 0.3, 0.3};
    char subjects[8][10] = {"WEB", "ALGO", "ALGEBRA", "ENGLISH", "PF", "PPE", "BDD", "FCR"};
    
    printf("\t\t\t\t==========================\n");
    printf("\t\t\t\tESTIMATION TABLE FOR SEM 2\n");
    printf("\t\t\t\t==========================\n");

    for(int i = 0; i < 8; i++)
    {
        printf("%s\t", subjects[i]);
        scanf("%d", &input);
        sum+= coeffs[i] * input;
    }
    result = ((sum / 3) + 12.5)/2;
    printf("Result: %.2f\n", result);

    printf("\t\t\t\t==========================\n");
    
    if(result > 10)
        printf("Congrats, nothing to worry about\n");

    return 0;
}