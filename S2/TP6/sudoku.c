#include <stdio.h>

typedef int grill[9][9];


void init(grill g)
{
    grill gg =  {{1, 2, 3, 4, 5, 6, 7, 8, 9},
                 {4, 5, 6, 7, 8, 9, 1, 2, 3},
                 {7, 8, 9, 1, 2, 3, 4, 5, 6},
                 {2, 3, 1, 5, 6, 4, 8, 9, 7},
                 {5, 6, 4, 8, 9, 7, 2, 3, 1},
                 {8, 9, 7, 2, 3, 1, 5, 6, 4},
                 {3, 1, 2, 6, 4, 5, 9, 7, 8},
                 {6, 4, 5, 9, 7, 8, 3, 1, 2},
                 {9, 7, 8, 3, 1, 2, 6, 4, 5}};
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
    printf("\n\t%d %d %d   %d %d %d   %d %d %d\n", g[0][0], g[0][1], g[0][2], g[0][3], g[0][4], g[0][5], g[0][6], g[0][7], g[0][8]);
    printf("\t%d %d %d   %d %d %d   %d %d %d\n", g[1][0], g[1][1], g[1][2], g[1][3], g[1][4], g[1][5], g[1][6], g[1][7], g[1][8]);
    printf("\t%d %d %d   %d %d %d   %d %d %d\n", g[2][0], g[2][1], g[2][2], g[2][3], g[2][4], g[2][5], g[2][6], g[2][7], g[2][8]);
    printf("\n\t%d %d %d   %d %d %d   %d %d %d\n", g[3][0], g[3][1], g[3][2], g[3][3], g[3][4], g[3][5], g[3][6], g[3][7], g[3][8]);
    printf("\t%d %d %d   %d %d %d   %d %d %d\n", g[4][0], g[4][1], g[4][2], g[4][3], g[4][4], g[4][5], g[4][6], g[4][7], g[4][8]);
    printf("\t%d %d %d   %d %d %d   %d %d %d\n", g[5][0], g[5][1], g[5][2], g[5][3], g[5][4], g[5][5], g[5][6], g[5][7], g[5][8]);
    printf("\n\t%d %d %d   %d %d %d   %d %d %d\n", g[6][0], g[6][1], g[6][2], g[6][3], g[6][4], g[6][5], g[6][6], g[6][7], g[6][8]);
    printf("\t%d %d %d   %d %d %d   %d %d %d\n", g[7][0], g[7][1], g[7][2], g[7][3], g[7][4], g[7][5], g[7][6], g[7][7], g[7][8]);
    printf("\t%d %d %d   %d %d %d   %d %d %d\n\n", g[8][0], g[8][1], g[8][2], g[8][3], g[8][4], g[8][5], g[8][6], g[8][7], g[8][8]);
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
