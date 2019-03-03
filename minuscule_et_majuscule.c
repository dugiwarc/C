#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];

    scanf("%s", word);
    
    int i = 0, j = strlen(word) - 1;
    int temp;

    while(i < j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }
    
    printf("%s", word);
    
    return 0;
}