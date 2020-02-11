#include <stdio.h>

int factorielle(int n)
{
        int f;
        if (n <= 1)
                f = 1;
        else
                f = n * factorielle(n - 1);
        return f;
}

int main()
{
        printf("%d", factorielle(3));
        return 0;
}