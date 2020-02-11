// Program to illustrate the getopt()
// function in C

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_lines(char *str, char *path)
{
        char *ptr;
        FILE *fp;
        long ret;
        ret = strtol(str, &ptr, 10);

        int count = 0;
        if ((fp = fopen(path, "r")) == NULL)
                perror("Path not found ");

        fseek(fp, 0, SEEK_END);
        int len = ftell(fp);
        char now;

        printf("File size: %d bytes\n", len);
        printf("Printing last %ld lines\n", ret);

        while (count < ret)
        {
                fseek(fp, -2, SEEK_CUR);
                if (ftell(fp) < 0)
                        break;
                now = fgetc(fp);
                if (now == '\n')
                        ++count;
        }

        len = ftell(fp);
        printf("Current position: %d bytes\n", len);

        while (1)
        {
                now = fgetc(fp);
                if (feof(fp))
                        break;
                printf("%c", now);
        }
        fclose(fp);
}

int main(int argc, char *argv[])
{
        int opt;
        // put ':' in the starting of the
        // string so that program can
        //distinguish between '?' and ':'
        while ((opt = getopt(argc, argv, "n:")) != -1)
        {

                switch (opt)
                {
                // case 'i':
                // case 'l':
                // case 'r':
                // case 'x':
                //         printf("option: %c\n", opt);
                //         break;
                case 'n':
                        print_lines(optarg, argv[optind]);
                        break;
                // case ':':
                //         printf("option needs a value\n");
                //         break;
                // case '?':
                //         printf("unknown option: %c\n", optopt);
                //         break;
                default:
                        break;
                }
        }

        // optind is for the extra arguments
        // which are not parsed
        // for (; optind < argc; optind++)
        // {
        //         printf("extra arguments: %s\n", argv[optind]);
        // }

        return 0;
}