#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    int age, id;
} student;

void add(student *sample_student, int *registered_users)
{
    int index, answer;
    printf("Select an index[1..10] to add the user @: \n");
    scanf("%d", &index);

    for (int i = 1; i <= 10; i++)
        if (registered_users[i] == index)
        {
            printf("User at current address already exists.\nOverwrite?(0/1)\n");
            scanf("%d", &answer);
            if (answer)
            {
                registered_users[index] = index;
                printf("Enter name: \n");
                scanf("%s", sample_student[index].name);
                printf("Enter age: \n");
                scanf("%d", &sample_student[index].age);

                printf("You have successfully registered USER #%d with the following details\n", index);
                printf("User: %s\t Age: %d\n", sample_student[index].name, sample_student[index].age);
            }
            else
                return;
        }
        else
        {
            registered_users[index] = index;
            printf("Enter name: \n");
            scanf("%s", sample_student[index].name);
            printf("Enter age: \n");
            scanf("%d", &sample_student[index].age);

            printf("You have successfully registered USER #%d with the following details\n", index);
            printf("User: %s\t Age: %d\n", sample_student[index].name, sample_student[index].age);
            return;
        }
    return;
}

void list_contacts(student *s)
{
    printf("Registered Contacts:\n");
    for (int i = 0; i < 10; i++)
    {
        if ((s + i)->age > 0)
            printf("%s %d\n", (s + i)->name, (s + i)->age);
    }
}

int main()
{

    int answer = 1;
    int *registered_users = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
        registered_users[i] = 0;

    student *s = (student *)malloc(10 * sizeof(student));

    while (answer != 0)
    {
        printf("0.EXIT\t1.ADD USER\t2.LIST CONTACTS\n");
        scanf("%d", &answer);

        switch (answer)
        {
        case 1:
            add(s, registered_users);
            break;
        case 2:
            list_contacts(s);
            break;
        case 3:
            answer = 0;
            break;
        default:
            break;
        }
    }

    free(s);
    free(registered_users);

    return 0;
}
