#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define PRabp(n) printf("Ligne %d: "                                 \
                        "a: 0x%p %d, b: 0x%p %d, p: 0x%p 0x%p %d\n", \
                        n, &a, a, &b, b, &p, p, *p)

#define PRtp(n) printf("Ligne %d: "                           \
                       "t: 0x%p %d %d %d, p: 0x%p 0x%p %d\n", \
                       n, t, t[0], t[1], t[2], &p, p, *p)

int main(int argc, char *argv[])
{
        int a, b;
        int t[3] = {4, 5, 6};
        int *p;

        p = &b;
        a = 0;
        b = 2;
        PRabp(1);
        *p = 4;
        PRabp(2);
        // p++;
        // PRabp(3);
        (*p)++;
        PRabp(4);
        // p = 0;
        // PRabp(5);
        p = t;
        PRtp(6);
        p[0] = 10;
        p[1] = 11;
        PRtp(7);
        p++;
        PRtp(8);
        *p = 15;
        *(p + 1) = 16;
        PRtp(9);
        p++;
        PRtp(10);
        p[0] = 20;
        // p[1] = 21;
        PRtp(11);
        return 0;
}