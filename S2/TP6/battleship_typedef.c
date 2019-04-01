#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 20

typedef int grid[size][size];
int counter = 0;

void grid_filler(grid a)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
            a[i][j] = 0;
    }
}

void grid_display(grid a)
{
    printf("\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("\n");
        for (int j = 0; j < size; j++)
            printf("%d", a[i][j]);
    }
    printf("\n\n");
}

void place_sub(grid a, int sub)
{
    counter++;
    int count = 0;
    srand(time(NULL));
    int direction = rand() % 2, rand_row = rand() % (size - sub), rand_col = rand() % (size - sub);
    printf("Direction %d", direction);
    if(direction)
    {
        // check first if the path is clear for yawing
        for(int i = 0; i < sub; i++)
        {
            if(a[rand_row][rand_col] == 0)
            {
                count++;
                rand_col++;
            }
        }
        rand_col = rand_col - sub;
        // if there's enough space
        if(count == sub)
        {
            // throw the anchor
            printf("\nFunction was run %d times\n", counter);
                
                printf("Space found\nX Location: %d\nY Location: %d\n", rand_row, rand_col);
            while(sub != 0)
            {
                a[rand_row][rand_col] = 1;
                rand_col++;
                sub--;
            }
        }
        // else run the function again
        else
        {
            place_sub(a, sub);
        }
    }
    else
    {
        // check first if the path is clear for yawing
        for (int i = 0; i < sub; i++)
        {
            if (a[rand_row][rand_col] == 0)
            {
                count++;
                rand_row++;
            }
        }
        rand_row = rand_row - sub;
        // if there's enough space
        if (count == sub)
        {
            // throw the anchor
            printf("\nFunction was run %d times\n", counter);

            printf("Space found\nX Location: %d\nY Location: %d\n", rand_row, rand_col);
            while (sub != 0)
            {
                a[rand_row][rand_col] = 1;
                rand_row++;
                sub--;
            }
        }
        // else run the function again
        else
        {
            place_sub(a, sub);
        }
    }
    

}

int main()
{
    grid grid_1;
    grid_filler(grid_1);
    // grid_display(grid_1);
    place_sub(grid_1, 4);
    place_sub(grid_1, 3);
    place_sub(grid_1, 3);
    place_sub(grid_1, 2);
    place_sub(grid_1, 2);
    place_sub(grid_1, 2);
    place_sub(grid_1, 1);
    place_sub(grid_1, 1);
    place_sub(grid_1, 1);
    grid_display(grid_1);
    return 0;
}

