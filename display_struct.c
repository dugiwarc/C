#include <stdio.h>
typedef struct Person
{
    char name[50];
    int roll;
    float marks;
} se;

int main()
{
    se s[20];
    int i;
    printf("Enter information for students:\n");

    // storing infromation 
    for(i = 0; i < 2; ++i)
    {
        s[i].roll = i + 1;

        printf("\nFor roll number %d, \n", s[i].roll);

        printf("\nEnter name: ");
        scanf("%s", s[i].name);

        printf("\nEnter marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    printf("Displaying information: \n\n");
    // displaying information
    for(i = 0; i < 2; i++)
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("Name: %s", s[i].name);
        printf("\tMarks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}