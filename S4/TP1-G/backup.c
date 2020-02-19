#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>

#define CHAR_MAX 256

void raler(char *msg);
void char_to_file(const char *pathname, const char *dest);
int get_ssize(char *src);
void copy_file_to_dest(const char *src, const char *dest);

int main(int argc, char *argv[])
{
        struct stat src;
        struct stat ref;
        struct stat dst;
        char def_ref[CHAR_MAX] = "./def_ref";
        int folder_created = 1;

        if (argc != 4)
        {
                printf("Wrong number of arguments: %d\n", argc);
                exit(EXIT_FAILURE);
        }

        if (lstat(argv[1], &src) == -1)
                raler("Source file/folder/link must exist");

        if (lstat(argv[2], &ref) == -1)
        {
                mkdir(argv[2], 0700);

                printf("Folder %s created\n", argv[2]);
                // copy_to_dest(argv[3], def_ref);
        }

        if (folder_created)
        {
                switch (src.st_mode & S_IFMT)
                {
                case S_IFDIR:
                        printf("Directory detected. Proceeding with saving %s's contents...\n", argv[3]);
                        // copy_folder_to_dest(argv[1], argv[3]);
                        break;
                case S_IFREG:
                        printf("File detected. Proceeding with saving the file to %s\n", argv[3]);
                        // copy_file_to_dest(argv[1], argv[3]);
                        printf("%d\n", get_ssize(argv[1]));
                        copy_file_to_dest(argv[1], argv[3]);
                        break;
                case S_IFCHR:
                        printf("Char ignored\n");
                        break;
                case S_IFLNK:
                        printf("Link detected. Proceeding with saving the file to %s\n", argv[3]);
                        break;
                case S_IFBLK:
                        printf("Block ignored\n");
                        break;
                default:
                        printf("Default\n");
                        break;
                }
                char_to_file(argv[3], def_ref);
                return EXIT_SUCCESS;
        }

        // switch (src.st_mode & S_IFMT)
        // {
        // case S_IFDIR:
        //         printf("Directory detected. Proceeding with saving %s...\n", );
        //         break;
        // case S_IFREG:
        //         printf("File detected. Proceeding ...\n");
        //         break;
        // case S_IFCHR:
        //         printf("Char ignored\n");
        //         break;
        // case S_IFLNK:
        //         printf("Link detected. Proceeding ...\n");
        //         break;
        // case S_IFBLK:
        //         printf("Block ignored\n");
        //         break;
        // default:
        //         printf("Default\n");
        //         break;
        // }

        // switch (ref.st_mode & S_IFMT)
        // {
        // case S_IFDIR:
        //         printf("Reference path detected. Proceeding ...\n");
        //         break;
        // default:
        //         printf("Path must lead to a folder\n");
        //         raler("Path not a folder");
        // }

        // DIR *dp;
        // struct dirent *ent;

        // if ((dp = opendir(argv[1])) == NULL)
        //         raler("OPEN DIR");

        // puts("Retrieving existing referenced folder content:");
        // while ((ent = readdir(dp)) != NULL)
        //         printf("%s\n", ent->d_name);

        // if (closedir(dp) == -1)
        //         raler("CLOSE DIR");

        return EXIT_SUCCESS;
}
void raler(char *msg)
{
        perror(msg);
        exit(EXIT_FAILURE);
}

void char_to_file(const char *pathname, const char *dest)
{
        int fd_1;
        // mode of 0666 will be subject to the system umask and will likely results in actual permissions of 0644
        if ((fd_1 = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0666)) == -1)
                raler("OPEN FD_1");

        while (*(pathname) != '\0')
        {
                pathname++;
                if (write(fd_1, pathname, 1) == -1)
                        raler("WRITE TO FILE");
        }

        if (close(fd_1) == -1)
                raler("CLOSE FD_1");
}

void copie_fichier(const char *src, const char *dest)
{
        int fd_1, fd_2;
        char buffer;
        struct stat src_st, dest_st;
        ssize_t t;

        if (lstat(src, &src_st) == -1)
                raler("LSTAT");

        if (lstat(dest, &dest_st) == -1)
                raler("LSTAT");

        if ((fd_1 = open(src, O_RDONLY)) == -1)
                raler("OPEN FD_1");

        if ((fd_2 = open(dest, O_WRONLY | O_CREAT | O_TRUNC, src_st.st_mode)) == -1)
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

int is_dir(const char *path)
{
        struct stat path_stat;
        lstat(path, &path_stat);
        return S_ISDIR(path_stat.st_mode);
}

void copy_file_to_dest(const char *src, const char *dest)
{
        int srcfd, destfd;
        size_t nbread;
        char buff;

        if ((srcfd = open(src, O_RDONLY)) == -1)
                raler("Error in opening source file");

        if ((destfd = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0666)) == -1)
                raler("Error in opening/creating dest file");

        while ((nbread = read(srcfd, &buff, 1)) > 0)
        {
                if (write(destfd, &buff, 1) != nbread)
                        printf("Error writing data to %s", dest);
        }
        if (nbread == -1)
                printf("Error in reading data from %s", src);

        if (close(srcfd) == -1)
                printf("Error in closing file %s", src);

        if (close(destfd) == -1)
                printf("Error in closing file %s", dest);
}

char *extract_base(char *src)
{

        return src;
}

int get_ssize(char *src)
{
        int count = 0;
        while (*src != '\0')
        {
                count++;
                *(src++);
        }
        return count;
}

void my_concat(char s1[], char s2[])
{
        int i, j;
        i = get_ssize(s1);
        for (j = 0; s2[j] != '\0'; i++, j++)
        {
                s1[i] = s2[j];
        }
        s1[i] = '\0';
}