#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#define N 30

typedef struct node
{
        int count;
} node;

typedef struct hash_table
{
        node *data[N];
} hash_table;

int add_to_table(hash_table *table, int num)
{
        if (!table->data[num])
        {
                node *e = calloc(1, sizeof(node));
                e->count = 1;
                table->data[num] = e;
                return 1;
        }

        table->data[num]->count++;

        return table->data[num]->count;
}

int *delete_nth(size_t szin, int order[szin], int max_e, size_t *szout)
{
        // initialize a hash table
        hash_table tab = {0};
        // initialize each data element in the hash table to NULL
        for (int i = 0; i < N; ++i)
                tab.data[i] = NULL;

        int id = 0;
        // allocate space the size of the input array to *res and initialize values to zero
        int *res = calloc(szin, sizeof(int));

        // for every element in the input array
        for (int i = 0; i < szin; ++i)
        {
                // if number of occurences is larger than the constraint skip
                if (add_to_table(&tab, order[i]) > max_e)
                        continue;
                // else add item to new allocated array
                res[id] = order[i];
                id++;
        }
        // size of the new array out
        *szout = id;
        return res;
}

int main()
{
        size_t *p = malloc(sizeof(int));
        int array[10] = {1, 2, 2, 2, 2, 4, 4, 4, 4, 4};
        int *ret_arr = malloc(10 * sizeof(int));
        ret_arr = delete_nth(10, array, 2, p);
        printf("%ld\n", *p);
        for (int i = 0; i < *p; i++)
                printf("%d\n", ret_arr[i]);
        return 0;
}