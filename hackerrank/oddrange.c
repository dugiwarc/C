#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <assert.h>

int *oddNumbers(int l, int r, int *result_count)
{
        int *result;
        int i;

        assert(result_count && l <= r && INT_MIN < r);

        l += !(l % 2); // if l is even start at l = l + 1
        r -= !(r % 2); // if r is even  end  at r = r - 1

        *result_count = (r - l) / 2 + 1; // calculate array size
        result = malloc(*result_count * sizeof(*result));

        if (!result)
                return NULL;

        // fill it
        for (i = 0; l <= r; ++i, l += 2)
                result[i] = l;

        return result;
}

int main(void)
{
        int min = 42;
        int max = 85;
        int count;
        int *numbers = oddNumbers(min, max, &count);
        int i;

        if (count && !numbers)
        {
                printf("There are %d odd numbers between %d and %d, "
                       "but not enough memory to allocate an array of that size :(\n\n",
                       count, min, max);
                return EXIT_FAILURE;
        }

        printf("Number count: %d\n", count);

        for (i = 0; i < count; ++i)
                printf("%d ", numbers[i]);
        putchar('\n');

        free(numbers);
        return 0;
}