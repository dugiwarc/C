#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct node *next;
} Node;

Node *head = NULL;
Node *current = NULL;

// Create a linked list
void insert(int data)
{
    // Allocate memore for new node
    Node *link = (Node *)malloc(sizeof(Node));

    link->data = data;
    link->next = NULL;

    // If head is empty, create new list
    if (head == NULL)
    {
        head = link;
        return;
    }

    current = head;

    // Move to the end of the list
    while (current->next != NULL)
        current = current->next;

    // Insert link at the end of the list
    current->next = link;
}

void size_of_list()
{
    int size = 0;

    if (head == NULL)
    {
        printf("List size: %d ", size);
        return;
    }

    current = head;
    size = 1;
    while (current->next != NULL)
    {
        current = current->next;
        size++;
    }
    printf("List size : %d \n", size);
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(1);
    insert(40);
    insert(50);

    size_of_list();
    return 0;
}