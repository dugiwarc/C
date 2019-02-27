#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *str;

    str = (char *) malloc(15);
    strcpy(str, "jason");
    printf("String = %s, Address = %p\n", str, str);

    str = (char *) realloc(str, 25);
    strcat(str, ".com");
    printf("String = %s, Address = %p\n", str, str);

    free(str);
    str = NULL;

    return 0;
}