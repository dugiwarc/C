#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int age;
} person;


int main()
{
    person *pointer;

    pointer = (person *) malloc(10 * sizeof(person));

    pointer->name = (char *) malloc(20 * sizeof(char));

    for (int i = 0; i < 10; i++)
    {
        scanf("%s", pointer->name);
        scanf("%d", &pointer->age);
        pointer++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%s", pointer->name);
        printf("%d", pointer->age);
        pointer++;
    }

    free(pointer);

    return 0;
}