#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int data;
    struct node * next;
} node;

node * head = NULL;
node * current = NULL;

void printList() 
{
    node * ptr = head;
    printf("\n[head] =>");
    // start from the beginning
    while(ptr != NULL) 
    {
        printf(" %d =>", ptr->data);
        ptr = ptr->next;
    }

    printf(" [null]\n");
}

// insert link at the first location
void insert(int data)
{
    // create a link
    node * link = (node *) malloc (sizeof(node));

    // link->key = key
    link->data = data;

    // point it to the old first node
    link->next = head;

    //point first to new first node
    head = link;
}

int main() 
{
    insert(10);
    insert(20);
    insert(10);
    insert(30);
    insert(50);
    insert(50);

    printList();

    return 0;
}