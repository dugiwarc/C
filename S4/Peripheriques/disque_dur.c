#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

void raler(const char *str);

int main()
{
        u_int8_t bloc[512];
        struct stat fileStat;
        int fd;

        if (stat("/dev/loop", &fileStat) < 0)
                raler("stat");

        printf("RDEV: %ld\n", fileStat.st_rdev);
        printf("RDEV: %d\n", fileStat.st_mode);
        printf("RDEV: %ld\n", fileStat.st_dev);
        printf(S_ISCHR(fileStat.st_mode) ? "is char\n" : "-");
        printf(S_ISBLK(fileStat.st_mode) ? "is block\n" : "-");

        // printf((fileStat.st_mode & S_IFCHR) ? "is char\n" : "-");
        // printf((fileStat.st_mode & S_IFBLK) ? "is block\n" : "-");

        if ((fd = open("/dev/disk", O_RDONLY)) == -1)
                raler("open");

        if (read(fd, bloc, sizeof bloc) == -1)
                raler("read");
        if (close(fd) == -1)
                raler("close");
}

void raler(const char *str)
{
        perror(str);
        exit(EXIT_FAILURE);
}
