#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count)
{
        int i, res = 0, current_pos;
        if (bits[count - 1] == 1)
                res += 1;
        current_pos = 2;
        for (i = count - 2; i >= 0; i--)
        {
                res += bits[i] * current_pos;
                current_pos *= 2;
        }
        return res;
}

int main()
{
        int a[4] = {0, 1, 1, 0};
        unsigned b;

        b = binary_array_to_numbers(a, 4);
        printf("%d\n", b);

        return 0;
}