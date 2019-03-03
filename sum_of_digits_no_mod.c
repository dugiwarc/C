#include <stdio.h>

int digit_counter(int n)
{
    printf("%d\n", n);
    if(n < 10)
        return 1;
    return 1 + digit_counter(n/10); 
}
int main()
{
    // int a[] = {11,12,13,14,15};
    // int *p;
    int number;
    // p = a;
    // b(p, 4);
    char p = 'y';
    while(p == 'y')
    {
        scanf("%d", &number);
        int a = digit_counter(number);
        printf("%d", a);
        printf("Another?\n");
        scanf("%c", &p);
    }
    return 0;
}