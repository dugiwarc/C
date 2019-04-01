#include <stdio.h>

typedef int grill[9][9];


void init(grill g)
{
        grill gg = {
                    {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {4, 5, 6, 7, 8, 9, 1, 2, 3},
                    {7, 8, 9, 1, 2, 3, 4, 5, 6},
                    {2, 3, 1, 5, 6, 4, 8, 9, 7},
                    {5, 6, 4, 8, 9, 7, 2, 3, 1},
                    {8, 9, 7, 2, 3, 1, 5, 6, 4},
                    {3, 1, 2, 6, 4, 5, 9, 7, 8},
                    {6, 4, 5, 9, 7, 8, 3, 1, 2},
                    {9, 7, 8, 3, 1, 2, 6, 4, 5}
                    };
    int i, j;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            g[i][j] = gg[i][j];
    return;
}


void row_check(grill g, int x)
{
    int total = 0;
    for(int i = 0; i < 9; i++)
        total = total + g[x][i];

    if (total != 45)
        printf("Row %d is invalid!\n", x);
    else
        printf("Row %d is valid\n", x);
}

void display_sudoku(grill g)
{

    for(int i = 0; i < 9; i++)
    {
        printf("\n");
        if(i % 3 == 0)
        {
            printf("\n\n");
        }
        for(int j = 0; j < 9; j++)
        {
            if(j % 3 == 0)
                printf("\t");
            printf("%d  ", g[i][j]);
        }
    }
    printf("\n\n");

    return;
}

int main()
{
    grill g2;
    init(g2);
    g2[6][1] = 5; // here we modify the value on row 6              
    row_check(g2, 6);
    display_sudoku(g2);
    return 0;
}
