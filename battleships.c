#include <stdio.h>
#include <stdlib.h>
#DEFINE SIZE 10

int ** board()
{
    int board[][];

    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            board[i][j] = 1;
        }
    }

    return board;
}

// take ship's size and the array as arguments and return a modified array
int * setup(int ship_size, int * board);
{
    // generate a random (x, y);
    int x = rand() % SIZE;
    int y = rand() % SIZE;

    // generate a random axis, where 0 represents the x and 1 the y direction;
    int axis = rand() % 2;

    // check if the inserted ship fits within the board limits  
    while(1)
    {
        // check availability on the x axis
        if(side == 0)
        {
            // if it doesn't bleed over then ...
            if ((x + ship_size) < SIZE)
            {
                // ... allocate a range for the size of the ship
                for(int i = x; i < x + ship_size; i++)
                {
                    // ... if there's not a part of another ship already in place
                    if(board[i][j] != 0)
                    {
                        // place the new ship's parts/components
                        board[i][j] = 0;                        
                    }
                    else
                    {
                        // throw error and exit the loop
                        printf("Tile already taken!");
                        break;
                    }
                }
            }
            else
            {
                // throw error and exit the loop
                printf("Out of boundary!")
                break;
            }
        }
        else
        {
            // check availability on the y axis, exact same thing as above
            if ((y + ship_size) < SIZE)
            {
                for(int i = y; i < y + ship_size; i++)
                {
                    if(board[x][i] != 0)
                    {
                        board[x][i] = 0;                        
                    }
                    else
                    {
                        printf("Tile already taken!");
                        break;
                    }
                }
            }
            else
            {
                printf("Out of boundary!")
                break;
            }
        }
        // return the modified array and exit the loop
        return board;
        break;
    }
}

// take target coordinates and the current state of the board
int * shoot(int x, int y, int * array)
{
    // check wether there's anything on the given coordinates, where 0 denotes a part of the ship
    if(array[x][y] == 0)
    {
        // target sinks and turns into an 1
        array[x][y] == 1;
        printf("HIT!");
    } 
    else
    {
        // nothing happens
        printf("MISS!");
    }

    return array;
}

int check(int * array)
{
    // sets a count for unsung heroes.. hrm floating ships
    int count = 0;

    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
            {
                if array[i][j] = 0;
                // in the case where we find anything standing we count it up
                count++; 
            }
    }
    // return remaining hits to complete the game
    return count;
}

int main()
{
    int ** board = board();
    board = setup(5);
    board = setup(4);
    board = setup(3);
    board = setup(3);
    board = setup(2);
    while(a != 0)
    {
        shoot(x, y, board);
        a = check(board);
    }
    return 0;
}