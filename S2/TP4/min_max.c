#include <stdio.h>

int indice_ofMax(int array[], int size)
{
    int index = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (array[index] < array[i+1])
        {
            index = i + 1;
        }   
    }
    return index;
}

int indice_ofMin(int array[], int size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[index] > array[i + 1])
        {
            index = i;
        }
    }
    return index;
}

int main()
{
    int b, c;
    int array[7] = {1, 4, 2007, -1, 2, 4, 400};

    b = indice_ofMin(array, 7);
    c = indice_ofMax(array, 7);

    printf("Index of Min: %d\n", b);
    printf("Index of Max: %d\n", c);

    return 0;
}