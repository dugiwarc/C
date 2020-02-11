#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define BLOCKSIZE 5
#define MY_EOF 0x100

void raler(const char *str);
int my_getchar();

int main()
{
        int c;
        while ((c = my_getchar()) != MY_EOF)
                putc(c, stdout);

        return EXIT_FAILURE;
}

int my_getchar()
{
        static char buff[BLOCKSIZE];
        static int index = 0;
        static int curr_read = 1;

        index %= curr_read;

        if (index == 0)
                if ((curr_read = read(STDIN_FILENO, buff, BLOCKSIZE)) < 0)
                        raler("READ");

        if (curr_read != 0)
                return buff[index++];
        else
                return MY_EOF;
}

void raler(const char *msg)
{
        perror(msg);
        exit(EXIT_FAILURE);
}