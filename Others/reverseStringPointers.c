#include <stdio.h>

int string_length(char *);
void reverse(char *);

int main()
{
    char input[100];

    printf("Input a string:\n");
    scanf("%s", input);

    reverse(input);

    printf("Reverse string input:\n%s\n", input);

    return 0;
}

void reverse(char *inputPointer)
{
    int length, c;
    char *firstIndex, *lastIndex, temp;

    length = string_length(inputPointer);
    firstIndex = inputPointer;
    lastIndex = inputPointer;

    for (c = 0; c < length - 1; c++)
        lastIndex++;

    for (c = 0; c < length / 2; c++)
    {
        temp = *lastIndex;
        *lastIndex = *firstIndex;
        *firstIndex = temp;

        firstIndex++;
        lastIndex--;
    }
}

int string_length(char *inputPointer)
{
    int count = 0;
    while (*(inputPointer + count) != '\0')
        count++;

    return count;
}