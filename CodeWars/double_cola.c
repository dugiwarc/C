#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct node
{
        char *data;
        struct node *next;
} node, *Node;

typedef struct list
{
        Node head;
        Node tail;
} list, *List;

void init_list(List l)
{
        l->head = NULL;
        l->tail = NULL;
};

Node create_node(char *data)
{
        Node new_node;
        new_node = malloc(sizeof(node));
        new_node->data = data;
        new_node->next = NULL;

        return new_node;
}

void add_tail(List l, char *data)
{
        Node new_node;
        new_node = create_node(data);
        if (l->head == NULL)
        {
                l->head = new_node;
                l->tail = new_node;
        }
        else
        {
                l->tail->next = new_node;
                l->tail = l->tail->next;
        }
}

void add_head(List l, char *data)
{
        Node new_node;
        new_node = create_node(data);
        if (l->head == NULL)
        {
                l->head = new_node;
                l->tail = new_node;
        }
        else
        {
                new_node->next = l->head;
                l->head = new_node;
        }
}

void del_tail(List l)
{
        Node temp;
        if (l->tail == NULL)
                return;

        else
        {
                temp = l->head;

                while (temp->next != l->tail)
                        temp = temp->next;

                l->tail->next = NULL;
        }
}

void del_head(List l)
{
        if (l->head == NULL)
                return;
        else
                l->head = l->head->next;
}

const char *who_is_next(long long n, size_t length, const char *const a[length])
{

        return 0;
}

int main()
{

        List l;
        l = malloc(sizeof(list));
        add_head(l, "Howard");
        add_head(l, "Rajesh");
        add_head(l, "Penny");
        add_head(l, "Leonard");
        add_head(l, "Sheldon");

        Node node;
        node = l->head;
        int a = 0;

        while (node && a++ < 10010)
        {
                if ((a = a + 1) >= 10010)
                        puts(node->data);
                add_tail(l, node->data);
                add_tail(l, node->data);
                del_head(l);
                node = node->next;
        }

        return 0;
}