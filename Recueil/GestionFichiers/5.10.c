#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

void raler(const char *msg);

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        puts("ARGC");
        exit(EXIT_FAILURE);
    }    

    DIR *dp;
    struct dirent* ent;

    if((dp = opendir(argv[1])) == NULL)
        raler("OPEN DIR");
    
    while((ent = readdir(dp)) != NULL)
        printf("%s\n", ent->d_name);

    if(closedir(dp) == -1)
        raler("CLOSE DIR");

    return EXIT_SUCCESS;
}

void raler(const char *msg)
{
        perror(msg);
        exit(EXIT_FAILURE);
}