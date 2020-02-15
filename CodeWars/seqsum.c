#include <stdlib.h>
#include <stdio.h>

unsigned sequence_sum(unsigned start, unsigned end, unsigned step)
{
        int sum = 0;
        if (start > end)
                return 0;
        for (int i = start; i <= end; i = i + step)
                sum += i;
        printf("%d\n", sum);
        return sum;
}

int main()
{
        sequence_sum(2, 2, 2);
        sequence_sum(2, 6, 2);
        sequence_sum(1, 5, 1);
        sequence_sum(1, 5, 3);
        return EXIT_SUCCESS;
}