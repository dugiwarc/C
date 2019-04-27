#include <stdio.h>


int dicho(int t[], int size, int x)
{
    int stock, start, end;
    end = size - 1;
    start = 0;
    while(start <= end)
    {
        stock = ((end-start)/2) + start;
        printf("Try");
        if(t[stock] == x) return 1;
        if(t[stock] < x) start = stock + 1;
        else end = stock - 1;
    }
    return 0;
}

int main()
{
    int array[5]={1,2,3,4,5};
    int size = 5;

    int a = dicho(array, 5, 10);

    if(a) printf("It exists");
    else printf("it doesnt");
    return 0;
}