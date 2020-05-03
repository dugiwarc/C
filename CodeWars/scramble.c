// #include <stdbool.h>

// bool scramble(const char *str1, const char *str2)
// {
//         int index[26] = {0};

//         while (*str2)
//                 index[*str2++ - 'a']++;
//         while (*str1)
//                 index[*str1++ - 'a']--;
//         for (int i = 0; i < 26; i++)
//         {
//                 if (index[i] > 0)
//                         return false;
//         }
//         return true;
// }

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct node
{
        char data;
        struct node *next;
} node, *Node;

Node contains(char chary, Node node)
{
        Node head = node;
        Node temp;
        if (node->data == chary)
        {
                temp = node;
                head = node->next;
                free(temp);
                return head;
        }
        else
                while (node->next)
                {
                        if (node->next->data == chary)
                        {
                                temp = node->next;
                                node->next = node->next->next;
                                free(temp);

                                return head;
                        }
                        node = node->next;
                }
        return NULL;
}

bool scramble(char *str1, char *str2)
{
        Node temp;
        Node head = malloc(sizeof(node));
        head->next = NULL;
        while (*str1)
        {
                Node new = malloc(sizeof(node));
                new->next = head;
                new->data = str1[0];
                head = new;
                str1++;
        }

        while (*str2)
        {
                if (contains(str2[0], head) == NULL)
                {
                        while (head->next)
                        {
                                temp = head;
                                head = head->next;
                                free(temp);
                        }
                        return false;
                }
                str2++;
        }
        while (head->next)
        {
                temp = head;
                head = head->next;
                free(temp);
        }
        return true;
}

int main()
{
        fprintf(stdout, "%s", (scramble("rkqodlw", "world") ? "True" : "False"));
        return 0;
}