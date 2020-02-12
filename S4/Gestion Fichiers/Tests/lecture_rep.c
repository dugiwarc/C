#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>

void raler(const char *str);

int main()
{
        DIR *dp;
        struct dirent *d;

        dp = opendir("/home/dugiwarc/Desktop");
        if (dp == NULL)
                raler("opendir");

        while ((d = readdir(dp)) != NULL)
        {
                if (strcmp(d->d_name, ".") != 0 &&
                    strcmp(d->d_name, "..") != 0)
                        printf("%ld %s\n", d->d_ino, d->d_name);
        }

        if (closedir(dp) == -1)
                raler("closedir");

        return EXIT_SUCCESS;
}

void raler(const char *str)
{
        perror(str);
        exit(EXIT_FAILURE);
}