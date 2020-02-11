#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void raler(const char *msg);
void bubble_sort(int list[], int n);

int main()
{
        FILE *fp;
        char str[60];
        int nums[60], i = 0;

        fp = fopen("numbers", "r");

        if (fp == NULL)
                raler("FILE OPEN ERROR");

        fgets(str, 60, fp);

        char *token = strtok(str, " ");

        while (token != NULL)
        {
                nums[i] = atoi(token);
                token = strtok(NULL, " ");
                i++;
        }

        bubble_sort(nums, i);

        for (int j = 0; j < i; j++)
                printf("%d\n", nums[j]);

        if (fclose(fp) == -1)
                raler("CLOSE ERROR");

        return EXIT_FAILURE;
}

void raler(const char *msg)
{
        perror(msg);
}

void bubble_sort(int list[], int n)
{
        int c, d, t;

        for (c = 0; c < n - 1; c++)
        {
                for (d = 0; d < n - c - 1; d++)
                {
                        if (list[d] > list[d + 1])
                        {
                                t = list[d];
                                list[d] = list[d + 1];
                                list[d + 1] = t;
                        }
                }
        }
}