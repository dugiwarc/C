// int josephus_survivor(int n, int k)
// {
//         return n == 1 ? 1 : (josephus_survivor(n - 1, k) + k - 1) % n + 1;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
        int data;
        Node next;
        Node pre;
} node, *Node;

Node create_list_node(int data)
{
        Node node = NULL;
        node = malloc(sizeof(node));

        memset(node, 0, sizeof(node));
        node->data = data;
        node->next = NULL;
        node->pre = NULL;

        return node;
}

int josephus_survivor(int n, int k)
{
        Node *all_nodes = malloc(sizeof(node) * n);
        Node del_node = NULL;
        for (int i = 0; i < n; i++)
                all_nodes[i] = create_list_node(i + 1);

        for (int i = 0; i < n; i++)
        {
                if (i == n - 1)
                {
                        all_nodes[i]->next = all_nodes[0];
                        if (i == 0)
                                all_nodes[i]->pre = all_nodes[0];
                        else
                                all_nodes[i]->pre = all_nodes[i - 1];
                }
                else if (i == 0)
                {
                        all_nodes[i]->next = all_nodes[i + 1];
                        all_nodes[i]->pre = all_nodes[i - 1];
                }
                else
                {
                        all_nodes[i]->next = all_nodes[i + 1];
                        all_nodes[i]->pre = all_nodes[i - 1];
                }
        }

        printf("init ok n:%d k:%d \n", n, k);
        int j = 0;
        for (; j < k;)
        {
                if (del_node == NULL)
                {
                        del_node = all_nodes[0];
                        if (k == 1)
                        {
                                del_node->next->pre = del_node->pre;
                                del_node->pre->next = del_node->next;

                                del_node->data = 0;
                                j = -1;
                        }
                        continue;
                }
                del_node = del_node->next;
                j++;
                if (j == k - 1)
                {
                        del_node->next->pre = del_node->pre;
                        del_node->pre->next = del_node->next;
                        del_node->data = 0;
                        j = -1;
                }
                if (del_node->next->data == del_node->data)
                {
                        int result = del_node->data;
                        if (result == 0)
                        {
                                result = n;
                        }
                        for (int i = 0; i < n; i++)
                        {
                                all_nodes[i]->next = NULL;
                                all_nodes[i]->pre = NULL;
                                all_nodes[i]->data = 0;
                                free(all_nodes[i]);
                        }
                        free(all_nodes);
                        all_nodes = NULL;
                        return result;
                        break;
                }
        }
        return 0;
}