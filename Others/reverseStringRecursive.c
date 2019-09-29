#include <stdio.h>
#include <string.h>

void reverse(char *, int, int);

int main()
{
    char input[100];

    printf("Input a string:\n");
    scanf("%s", input);

    reverse(input, 0, strlen(input) - 1);

    printf("Reversed input string: \n%s\n", input);

    return 0;
}

void reverse(char *inputPointer, int firstIndex, int lastIndex)
{
    char tempChar;

    if (firstIndex >= lastIndex)
        return;

    tempChar = *(inputPointer + firstIndex);
    *(inputPointer + firstIndex) = *(inputPointer + lastIndex);
    *(inputPointer + lastIndex) = tempChar;

    reverse(inputPointer, ++firstIndex, --lastIndex);
}