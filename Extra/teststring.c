#include <stdlib.h>
#include <stdio.h>

char *get_scope_string()
{
        static char str[256] = "Hello";

        return str;
}

int main()
{
        char *res;

        res = get_scope_string();

        puts(res);

        return EXIT_SUCCESS;
}