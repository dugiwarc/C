#include <stdio.h>

void afficher_tab(int * array, int size)
{
    for(int i = 0; i < size; i++)
        printf("%d\t", array[i]);
}

void afficher_sorted(int * array, int n)
{
    int i, j, temp;
    for(i=0; i < n-1; i++)
    {
        for(j=0; j < n-1-i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int lst[4] = {9, 6, 7, 8};

    afficher_tab(lst, 4);
    afficher_sorted(lst, 4);
    afficher_tab(lst, 4);

    return 0;

}