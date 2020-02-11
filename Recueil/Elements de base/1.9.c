#include <stdio.h>
#include <stdlib.h>
#define SIZE 256

int main()
{

        char output[SIZE], input[SIZE], c;
        int i = 0;
        // system("stty raw");

        while (c != '\n')
        {
                if (c == '\t')
                {
                        input[i] = '\\';
                        i++;
                        input[i] = 't';
                }
                else
                        input[i] = c;
                c = getchar();
                i++;
        }

        puts(input);
        // system("stty sane");
        return 0;
}