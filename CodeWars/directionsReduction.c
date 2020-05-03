#include <stdlib.h>
#include <stdio.h>
// arr: directions to reduce, sz: size of arr, lg size of returned array
// function result will be freed

struct Node
{
        char *data;
        struct Node *next;
        struct Node *prev;
};

struct Node *add(struct Node *node, char *word)
{
        struct Node *node1 = malloc(sizeof(struct Node));
        node1->data = word;
        if (node == NULL)
        {
                return node1;
        }
        else
        {
                node1->next = node;
                node1->prev = NULL;
                node->prev = node1;
                return node1;
        }
};

int check_node(struct Node *node)
{
        switch (node->data[0])
        {
        case 'E':
        case 'W':
                if (node->next->data[0] == 'S' || node->next->data[0] == 'N')
                        return 0;
                break;
        case 'S':
        case 'N':
                if (node->next->data[0] == 'E' || node->next->data[0] == 'W')
                        return 0;
                break;
        }
        return 1;
}

struct Node *new ()
{
        return NULL;
}

struct Node *gethead(struct Node *node)
{
        while (node->prev != NULL)
        {
                node = node->prev;
        }
        return node;
}

struct Node *deletel(struct Node *node)
{
        struct Node *node1 = node;
        if (node == NULL)
                return NULL;
        else
        {

                if (node->next != NULL)
                        node->next->prev = node->prev;
                else
                {
                        node = NULL;
                        node->prev = node1->prev;
                        return node;
                }
                if (node->prev != NULL)
                        node->prev->next = node->next;

                node = node->next;
                free(node1);
                return node;
        }
}

char **dirReduc(char **arr)
{
        int x = 256, y = 16, i, rem = 0;
        char **output = malloc(256 * sizeof(char *));
        for (i = 0; i < 256; i++)
                output[i] = malloc(16 * sizeof(char));
        struct Node *node = new ();
        while (*arr != 0x0)
        {
                node = add(node, *arr);
                *arr++;
        }
        int size = 1, active = 1;
        while (node->next != NULL)
        {
                size++;
                node = node->next;
        }
        node = gethead(node);
        while (active)
        {
                switch (node->data[0])
                {
                case 'E':
                        if (node->next->data[0] == 'W')
                        {
                                node = deletel(node);
                                node = deletel(node);
                                size = size - 2;
                                if (node->prev != NULL)
                                {
                                        node = gethead(node);
                                        if (size == 2)
                                                active = check_node(node);
                                }
                        }
                        else
                                node = node->next;
                        break;
                case 'W':
                        if (node->next->data[0] == 'E')
                        {
                                node = deletel(node);
                                node = deletel(node);
                                size = size - 2;
                                if (node->prev != NULL)
                                {
                                        node = gethead(node);
                                        if (size == 2)
                                                active = check_node(node);
                                }
                        }
                        else
                                node = node->next;
                        break;
                case 'S':
                        if (node->next->data[0] == 'N')
                        {
                                node = deletel(node);
                                node = deletel(node);
                                size = size - 2;
                                if (node->prev != NULL)
                                {
                                        node = gethead(node);
                                        if (size == 2)
                                                active = check_node(node);
                                }
                        }
                        else
                                node = node->next;
                        break;
                case 'N':
                        if (node->next->data[0] == 'S')
                        {
                                node = deletel(node);
                                node = deletel(node);
                                size = size - 2;
                                if (node->prev != NULL)
                                {
                                        node = gethead(node);
                                        if (size == 2)
                                                active = check_node(node);
                                }
                        }
                        else
                                node = node->next;
                        break;
                default:
                        break;
                }
                if (size == 1)
                        active = 0;
        }
        i = 0;
        while (node)
        {
                output[i] = node->data;
                puts(node->data);
                i++;
                node = node->next;
        }
        return output;
}

int main()
{

        char *directions[256] = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
        char **input;
        input = dirReduc(directions);
        free(input);
        return 0;
}