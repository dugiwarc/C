#include <stdbool.h>
#include <stdlib.h>

bool comp(const int *a, const int *b, size_t n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] * a[i] == b[j])
                return true;
        }
    }

    return false;
}