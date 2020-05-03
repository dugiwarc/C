#include <stdio.h>
#include <stdarg.h>

void strlist(int n, ...)
{
        va_list ap;
        char *s;

        va_start(ap, n);
        while (1)
        {
                s = va_arg(ap, char *);
                printf("%s\n", s);
                n--;
                if (n == 0)
                        break;
        }
        va_end(ap);
}

void intlist(int n, ...)
{
        va_list ap;
        int s;
        int sum = 0;
        va_start(ap, n);
        while (1)
        {
                s = va_arg(ap, int);
                sum += s;
                n--;
                if (n == 0)
                        break;
        }
        va_end(ap);
        printf("%d\n", sum);
}

int main()
{
        strlist(3, "string1", "string2", "string3");
        intlist(5, 1, 2, 3, 4, 5);
        return 0;
}