#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// typedef int battleField[5][5];

int **initBoard()
{
    int **p = (int **)malloc(5 * sizeof(int *));
    for (int i = 0; i < 5; i++)
        p[i] = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            p[i][j] = 126;

    return p;
}

void computerShoot(int **Field)
{
    srand(time(NULL));
    int x, y, totalShots, shots = 0, count = 0, alreadyShotX[totalShots], alreadyShotY[totalShots];

    printf("How many shots would you like to allow?\n");
    scanf("%d", &totalShots);

    for (int i = 0; i < totalShots; i++)
    {
        alreadyShotX[i] = -1;
        alreadyShotY[i] = -1;
    }

    while (shots < totalShots)
    {
        x = rand() % 5;
        y = rand() % 5;
        for (int i = 0; i < totalShots; i++)
        {
            if (alreadyShotX[i] != x && alreadyShotY[i] != y)
            {
                if (i == (totalShots - 1))
                {
                    alreadyShotX[shots] = x;
                    alreadyShotY[shots] = y;
                    break;
                }
                break;
            }
            else
            {
                x = rand() % 5;
                y = rand() % 5;
                i = 0;
            }
        }
        if (Field[x][y] == 36)
        {
            Field[x][y] = 35;
            count++;
        }
        else
            Field[x][y] = 77;

        shots++;
    }
    if (count != 2)
        printf("You won! Long live the user\n");
    else
        printf("Computers won!\n");

    if (count > 0)
        printf("Number of destroyed ships: %d\n", count);

    // printf("Hit report: \n");
    // for (int i = 0; i < totalShots; i++)
    // {
    //     printf("%d %d\n", alreadyShotX, alreadyShotY);
    // }
}

void computerShipPlacement(int **Field)
{
    int x, y;
    int placements = 0;
    int alreadyPlacedX[5], alreadyPlacedY[5];
    for (int i = 0; i < 5; i++)
    {
        alreadyPlacedX[i] = -1;
        alreadyPlacedY[i] = -1;
    }

    srand(time(NULL));
    while (placements < 5)
    {
        x = rand() % 5;
        y = rand() % 5;
        for (int i = 0; i < 5; i++)
        {
            if (alreadyPlacedX[i] != x && alreadyPlacedY[i] != y)
            {
                alreadyPlacedX[placements] = x;
                alreadyPlacedY[placements] = y;
                break;
            }
            else
            {
                x = rand() % 5;
                y = rand() % 5;
                i = 0;
            }
        }

        Field[x][y] = 36;
        placements++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", alreadyPlacedX[i]);
        printf("%d\n", alreadyPlacedY[i]);
    }
}

void showBoard(int **Field)
{

    for (int i = 0; i < 5; i++)
    {
        printf("\n\n\n");
        for (int j = 0; j < 5; j++)
        {
            printf("\t\t");
            printf("%c", Field[i][j]);
        }
    }
    printf("\n\n");
}

void playerShipPlacement(int x, int y, int **Field)
{
    Field[x][y] = 36;
}

void shoot(int x, int y, int **Field)
{
    Field[x][y] = 35;
}

void startGame()
{
    int placements = 2, x, y;
    int **p = initBoard();
    // computerShipPlacement(p);
    showBoard(p);

    while (placements > 0)
    {
        printf("Enter x and y coordinates for ship no. %d\n", placements);
        scanf("%d %d", &x, &y);
        playerShipPlacement(x, y, p);
        showBoard(p);
        placements--;
    }
    printf("Placement done. Now the user will input the number of attempts the computer has to destroy the ships\n");

    computerShoot(p);
    // while (shots > 0)
    // {
    //     printf("Insert coordinates to shoot:\n");
    //     scanf("%d %d", &x, &y);
    //     shoot(x, y, p);
    //     showBoard(p);
    //     shots--;
    // }
    showBoard(p);
    for (int i = 0; i < 5; i++)
        free(p[i]);
    free(p);
}

int main()
{
    startGame();
    return 0;
}