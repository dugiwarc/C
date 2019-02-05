#include <stdio.h>
int main()
{
    int i, j, number= 1, total, answer, output;

    printf("Enter row number: ");
    scanf("%d", &answer);

    for(i=1; i <= 10; i++)
    {
        total = 0;
        for(j=1; j <= i; ++j)
        {
            if(i == answer)
            {
                total = total + number;
                output = total;
            }   
            number = number + 2;
        }
    }
    printf("\n%d", output);
    return 0;
}