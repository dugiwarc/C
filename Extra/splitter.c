#include <stdio.h>
#include <string.h>

int main()
{
        char string[50] = "3 3 + 4 55 * 3 / 4 23";

        char *token = strtok(string, " ");

        while (token != NULL)
        {
                printf(" %s\n", token);
                token = strtok(NULL, " ");
        }

        return 0;
}