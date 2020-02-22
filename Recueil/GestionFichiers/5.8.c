#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

void raler(const char *msg);
void rwx(mode_t droits);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        puts("ARGC");
        exit(EXIT_FAILURE);
    }

    struct stat st;

    if (lstat(argv[1], &st) == -1)
        raler("LSTAT");

    switch (st.st_mode & S_IFMT)
    {
    case S_IFDIR:
        printf("Directory\n");
        break;
    case S_IFREG:
        printf("File\n");
        break;
    case S_IFCHR:
        printf("Char ignored\n");
        break;
    case S_IFLNK:
        printf("Link\n");
        break;
    case S_IFBLK:
        printf("Block ignored\n");
        break;
    default:
        printf("Default\n");
        break;
    }

    rwx(st.st_mode);
    puts("");
    return EXIT_SUCCESS;
}

void rwx(mode_t droits)
{
    printf("Permissions: \t");
    printf((S_ISDIR(droits)) ? "d" : "-");
    printf((droits & S_IRUSR) ? "r" : "-");
    printf((droits & S_IWUSR) ? "w" : "-");
    printf((droits & S_IXUSR) ? "x" : "-");
    printf((droits & S_IRGRP) ? "r" : "-");
    printf((droits & S_IWGRP) ? "w" : "-");
    printf((droits & S_IXGRP) ? "x" : "-");
    printf((droits & S_IROTH) ? "r" : "-");
    printf((droits & S_IWOTH) ? "w" : "-");
    printf((droits & S_IXOTH) ? "x" : "-");
    printf("\n\n");
}

void raler(const char *msg)
{
    perror(msg);
    exit(EXIT_FAILURE);
}