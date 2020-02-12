#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
        if (argc != 2)
                return EXIT_FAILURE;

        struct stat fileStat;

        if (stat(argv[1], &fileStat) < 0)
                return EXIT_FAILURE;

        printf("Information for %s\n", argv[1]);
        printf("---------------------------\n");
        printf("File size: \t\t%ld bytes \n", fileStat.st_size);
        printf("Number of Links: \t%ld\n", fileStat.st_nlink);
        printf("File inode: \t\t%ld\n", fileStat.st_ino);
        printf("File permissions: \t");
        printf((S_ISDIR(fileStat.st_mode)) ? "Is a directory" : "-");
        printf((fileStat.st_mode & S_IRUSR) ? "r" : "-");
        printf((fileStat.st_mode & S_IWUSR) ? "w" : "-");
        printf((fileStat.st_mode & S_IXUSR) ? "x" : "-");
        printf((fileStat.st_mode & S_IXGRP) ? "r" : "-");
        printf((fileStat.st_mode & S_IXGRP) ? "w" : "-");
        printf((fileStat.st_mode & S_IXGRP) ? "x" : "-");
        printf((fileStat.st_mode & S_IXOTH) ? "r" : "-");
        printf((fileStat.st_mode & S_IXOTH) ? "w" : "-");
        printf((fileStat.st_mode & S_IXOTH) ? "x" : "-");
        printf("\n\n");

        printf("The file %s a symbolic link\n", (S_ISLNK(fileStat.st_mode)) ? "is" : "is not");
}