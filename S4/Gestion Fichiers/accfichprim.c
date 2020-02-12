#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
        int fd1, fd2;
        char c;
        ssize_t n;

        if ((fd1 = open("toto", O_RDONLY | O_CREAT)) == -1)
        {
                printf("open toto %d\n", errno);
                perror("open toto ");
        }

        system("cat titi");
        puts("");

        if ((fd2 = open("titi", O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0666)) == -1)
                printf("open titi %s\n", strerror(errno));

        lseek(fd1, 4, SEEK_CUR);

        while ((n = read(fd1, &c, 1)) > 0)
        {
                if (write(fd2, &c, 2) == -1)
                        printf("write %s\n", strerror(errno));
        }

        system("cat titi");
        puts("");

        if (n == -1)
                printf("read toto %s\n", strerror(errno));

        if (close(fd1) == -1)
                printf("close toto %s\n", strerror(errno));

        if (close(fd2) == -1)
                printf("close titi %s\n", strerror(errno));

        return 0;
}