#include <stdio.h>

int main()
{
    char s[1000], r[1000];
    int firstIndex, lastIndex, count = 0;

    printf("Input a string:\n");
    scanf("%s", s);

    // Calculating string length

    while (s[count] != '\0')
        count++;

    lastIndex = count - 1;

    for (firstIndex = 0; firstIndex < count; firstIndex++)
    {
        r[firstIndex] = s[lastIndex];
        lastIndex--;
    }

    r[firstIndex] = '\0';

    printf("Reversed input:\n%s\n", r);

    return 0;
}