#include <stdio.h>
#include <stdlib.h>

struct Contact
{
    char Name[20];
    struct Contact *Spouse;
};

int main()
{
    struct Contact *contact_00;
    contact_00 = (struct Contact *)malloc(sizeof(struct Contact));

    printf("Add a contact: \n");
    printf("Name: \n");
    scanf("%s", (contact_00)->Name);
    printf("Spouse Name: \n");
    scanf("%s", (contact_00->Spouse)->Name);
    printf("================\n");
    free(contact_00);
    return 0;
}
