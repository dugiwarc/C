#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 256

void cut_right_side(char *src, char *dest, int from_index, int size)
{
        int index = 0;
        for (int i = from_index; i < size; i++)
        {
                dest[index] = src[i];
                index++;
        }
}

void cut_left_side(char *array, int up_to_index)
{
        for (int i = 0; i < up_to_index; i++)
                array[i] = array[i];

        array[up_to_index] = '\0';
}

int main()
{

        char input[SIZE] = "", c, right_hand_side[SIZE] = "";
        int i = 0, len;

        while (c != '\n')
        {
                c = getchar();
                input[i++] = c;
        }

        for (i = 0; i < strlen(input); i++)
        {
                if (input[i] == '\\')
                {
                        switch (input[i + 1])
                        {
                        case 't':
                                input[i] = '\t';
                                len = strlen(input);
                                cut_left_side(input, i + 1);
                                cut_right_side(input, right_hand_side, i + 2, len);
                                strcat(input, right_hand_side);
                                break;
                        default:
                                break;
                        }
                }
        }
        puts(input);
        return 0;
}