#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// Prototypes
void copie_fichier(const char *src, const char *dest);
void raler(const char *str);

int main(int argc, char *argv[])
{
        if (argc != 2)
                raler("Mauvaise nombre d'arguments!");

        copie_fichier(argv[1], argv[2]);

        return EXIT_SUCCESS;
}

void raler(const char *msg)
{
        perror(msg);
        exit(EXIT_FAILURE);
}

void copie_fichier(const char *src, const char *dest)
{
        int fd_1, fd_2;
        char buffer;
        ssize_t t;

        if ((fd_1 = open(src, O_RDONLY)) == -1)
                raler("OPEN FD_1");

        if ((fd_2 = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0666)) == -1)
                raler("OPEN FD_2");

        while ((t = read(fd_1, &buffer, 1)) > 0)
                if (write(fd_2, &buffer, 1) == -1)
                        raler("WRITE");

        if (t == -1)
                raler("READ");

        if (close(fd_1) == -1)
                raler("CLOSE FD_1");

        if (close(fd_2) == -1)
                raler("CLOSE FD_2");
}