#include <stdio.h>

int *min(int *const q)
{
        int *min = &q[0];
        return min;
}

int main()
{
        int q[20] = {4};
        printf("%d\n", *min(q) += 5);
        printf("%d\n", *min(q) += 5);
        printf("%d\n", q[0]);

        return 0;
}