#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t get_count(const char *s)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i')
            count++;

    return count;
}

int sum(int a, int b)
{
    static int d = 0;
    d++;
    printf("%d\n    ", d);
    if (b == 1)
        return a;
    return (a + sum(a, b - 1));
}

int main()
{
    int a = get_count("gekki");
    printf("%d\n", a);

    int c = sum(4, 5);
    printf("%d\n", c);
    return 0;
}