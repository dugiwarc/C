#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <curses.h>


struct item
{
    char *itemName;
    int qty;
    float price, amount;
};

void readItem(struct item *i);
void printItem(struct item *i);

int main(void)
{
    struct item itm, *pItem;

    pItem = &itm;

    pItem -> itemName = (char *) malloc(30 * sizeof(char));

    if(!pItem)
        exit(-1);

    readItem(pItem);

    //print item
    printItem(pItem);

    free(pItem -> itemName);

    return 0;
}

void readItem(struct item * i)
{
    printf("\nEnter product name: \n");
    scanf("%s", i->itemName);

    printf("\nEnter price: \n");
    scanf("%f", &i->price);

    printf("\nEnter quantity: \n");
    i->amount = (float)i->qty * i->price;
}

void printItem(struct item * i)
{
    printf("\nName: %s", i->itemName);
    printf("\nPrice: %f", i->price);
    printf("\nQuantity: %d", i->qty);
    printf("\nTotal Amount: %.2f", i->amount);
}