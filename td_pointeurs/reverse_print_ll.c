#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct node * next;
} node;

node * head = NULL;
node * current = NULL;

// display the list
void reverse_print(node * list)
{
    if(list == NULL)
    {
        printf("[null] => ");
        return;
    }

    reverse_print(list->next);
    printf(" %d =>", list->data);
}

// Create linked list
void insert(int data) 
{
    node * link = (node *) malloc (sizeof(node));

    link->data = data;
    link->next = NULL;

    // If head is empty, create new list
    if(head == NULL)
    {
        head = link;
        return;
    }

    current = head;

    // move to the end of the list
    while(current->next!=NULL)
        current = current->next;
    
    // Insert link at the end of the list
    current->next = link;
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(1);
    insert(40);
    insert(50);

    reverse_print(head);

    return 0;
}