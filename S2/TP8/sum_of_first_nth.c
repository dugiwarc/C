#include <stddef.h>
#include <stdio.h>

float series_sum(const size_t n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1.25;

    float output = 1.0;
    
    for (int i = 1; i < n; i++)
        output += 1. / (3 * i + 1);

    return output;
}

int main()
{
    char s[40];
    float a = series_sum(5);
    sprintf(s, "%.2lf", a);
    printf("%s", s);

    return 0;
}