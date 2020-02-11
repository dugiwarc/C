#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 256

int str_is_subset(char *str_1, char *str_2, int size_1, int size_2)
{
        int i, j, count = 0, test_j = 0;

        for (i = 0; i < size_1; i++)
        {
                for (j = test_j; j < size_2; j++)
                {
                        if (str_1[i] == str_2[j])
                        {
                                count++;
                                test_j = count;
                                break;
                        }
                        else
                        {
                                test_j = 0;
                                count = 0;
                                break;
                        }
                }
        }
        if (count == size_2)
                return 1;
        else
                return 0;
}

int init_zero(char *str)
{
        int i;
        for (i = 0; i < SIZE; i++)
                str[i] = 0;
}

int get_size(char *str)
{
        int count = 0, i;
        for (i = 0; i < SIZE; i++)
                if (str[i] != '\0')
                        count++;
        return count - 1;
}

int main()
{
        int i = 0, j, is_a_subset, len_1, len_2;
        char input_1[SIZE];
        char input_2[SIZE];

        init_zero(input_1);
        init_zero(input_2);

        puts("Enter first stream of data:");
        fgets(input_1, SIZE, stdin);

        puts("Enter second stream of data:");
        fgets(input_2, SIZE, stdin);

        len_1 = get_size(input_1);
        len_2 = get_size(input_2);

        is_a_subset = str_is_subset(input_1, input_2, len_1, len_2);

        if (is_a_subset)
                puts("Yes");
        else
                puts("Not a subset");

        return (EXIT_SUCCESS);
}