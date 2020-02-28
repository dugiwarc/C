#include <string.h>
#include <stdlib.h>

void reverse(char *src, char *dst, int len)
{
    for (int i = 0; i < len; i++)
        dst[i] = src[len - 1 - i];
}

void rotate(char *src, char *dst, int len)
{
    char head = src[0];

    for (int i = 1; i < len; i++)
        dst[i - 1] = src[i];
    dst[len - 1] = head;
}

int check_sum_of_digital(char *src, int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++)
        sum += src[i] % 2;
    return sum % 2;
}

char *revrot(char *s, int sz)
{
    if (strlen(s) < sz || sz <= 0)
        return "";

    int length = strlen(s) / sz * sz + 1;
    char *dst = (char *)malloc(sizeof(char) * length);

    for (int i = 0; i < length - 1; i += sz)
    {
        if (!check_sum_of_digital(s + i, sz))
            reverse(s + i, dst + i, sz);
        else
            rotate(s + i, dst + i, sz);
    }

    dst[length - 1] = 0;
    return dst;
}