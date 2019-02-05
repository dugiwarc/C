#include <stdio.h>
#include <string.h>

int indice_ofMax(int array[], int size)
{
    int index = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (array[index] < array[i + 1])
        {
            index = i + 1;
        }
    }
    return index;
}

 'E' 'L'
int main()
{
    char string[100];
    int c = 0, count[26] = {0}, x;

    printf("Enter a string\n");
    gets(string);

    while (string[c] != '\0')
    {
        /** Considering characters from 'a' to 'z' only and ignoring others. */

        if (string[c] >= 'A' && string[c] <= 'Z')
        {
            x = string[c] - 'A';
            count[x]++;
        }
        
        c++;
    }

    int b = indice_ofMax(count, 26);
    printf("%d\n", b);
    printf("%c is the most common letter and it occurs %d times in the string.\n", b + 'A', count[b]);

    return 0;
}