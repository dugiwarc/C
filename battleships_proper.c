#include <stdio.h>
#define SIZE 5

int board()
{
    int array[SIZE][SIZE], i, j;

    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
        {
            array[i][j] = 0;
        }
    }
    return array[SIZE][SIZE];
}

void print_array(int *array)
{
    int i, j;
    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n\n");
    }

}


// int modify_array(int ** array)
// {
//     array[3][2] = 1;

//     return array;
// }

int main()
{
    int * a;
    a = board();

    print_array(&a);

    return 0;
}