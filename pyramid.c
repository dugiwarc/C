#include <stdio.h>
#include <stdlib.h>

void pyramid()
{
    int rows;
    scanf("%d", &rows);
    int l = 1;
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 0; j < rows - i; j++)
            printf(" ");

        for(int k = 0; k < l; k++)
        {
            if(k % 2 == 0)
                printf("*");
            else
                printf("A");
        }
        l+=2;
        printf("\n");
    }
}

void pattern()
{
    int rows;
    scanf("%d", &rows);
    int l = 2, m = 1;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 0; j < rows - i; j++)
            printf(" ");

        for(int k = 1; k < l; k++)
        {
            if(k>(l+1)/2)
            {   
                m--;
                printf("%d", m-1);
            }
            else
            {
                printf("%d", m);
                m++;
            }
        }
        l+=2;
        printf("\n");
    }
}

void diamond_pattern()
{
    int rows, l = 1;
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        if(i > 1 && i <= (rows+1)/2)
            l+=2;
        else if(i > (rows+1)/2)
        {
            l-=2;
        }
        
        for(int j = 0; j<abs((rows+1)/2-i);j++)
        {  
            printf(" ");
        }
        for(int k = 0; k < l; k++)
        {
            if(rows >= 10)
            {
                if((i >= rows/2-1) && (i <= rows/2 + 1) && (k >=l/4) && (k<(l-l/4)))
                {
                    if ((i == rows / 2) && (k >= l / 4) && (k <= (l - l / 4)))
                    {
                        if(k == l/2-2)
                            printf("Hello");
                        else if(k > l/2+2 && k < l/2+7)
                        {
                            printf("");
                        }
                        else
                            printf(" ");
                    }
                    else
                        printf(" ");
                }
                else
                    printf("3");
            }
            else
            {
                printf("3");
            }            
        }
        printf("\n");
    }
}

int main()
{
    diamond_pattern();
    return 0;
}