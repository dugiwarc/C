#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void raler(const char *str);

int main()
{
        int fd;

        if ((fd = open("/dev/lpr", O_WRONLY)) == -1)
                raler("open");

        if (write(fd, "ligne a imprimer\r\n", 18) == -1)
                raler("write");

        if (close(fd) == -1)
                raler("close");

        return EXIT_SUCCESS;
}

void raler(const char *str)
{
        perror(str);
        exit(EXIT_FAILURE);
}