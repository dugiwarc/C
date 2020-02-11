#include <stdio.h>
#define CARRE(x) (x * x)

int main()
{
        int a = 5;
        a = CARRE(a);

        printf("%d\n", a);

        return 0;
}