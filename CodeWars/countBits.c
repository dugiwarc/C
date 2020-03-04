#include <stddef.h>

size_t countBits(unsigned value)
{
    size_t count = 0;
    for (; value; value >>= 1) if ( value & 1 ) count++;
    return count;
}