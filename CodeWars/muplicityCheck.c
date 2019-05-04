#include <stdbool.h>
#include <stdlib.h>

bool comp(int *a, int *b, size_t sizeArray)
{

    int total = 0;

    for (int i = 0; i < sizeArray; i++)
    {

        int squared = a[i] * a[i];
        int sameArray = 0;
        int squaredMatch = 0;

        for (int j = 0; j < sizeArray; j++)
        {
            if (a[i] == a[j])
            {
                sameArray++;
            }
            if (squared == b[j])
            {
                squaredMatch++;
            }
        }
        if (sameArray == squaredMatch)
        {
            total++;
        }
    }
    return (total == sizeArray) ? true : false;
}