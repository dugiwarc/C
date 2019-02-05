#include <stdio.h>
#include <stdlib.h>

void affiche_barres(int R)
{
    int i;
    for(i = 0; i < R; i++)
    {
        printf("|");
    }
}

int choisir_allumettes()
{
    int choix;
    printf("\nChoisissez un nombre d'allumettes: \n");
    scanf("%d", &choix);
    return choix;
}

int ai_player()
{
    int choix = rand() % 5;
    printf("\nAI a pris %d allumettes: \n", choix);
    return choix;
}

int main()
{
    int t, i;
    printf("=========================================");
    printf("\nSelectionnez un nombre d'allumettes: \n");
    printf("=========================================\n");

    scanf("%d", &t);
    
    for(i = t; i > 0; i--)
    {   

        if (t <= 0 )
        {
            if (i % 2 == 0)
            {
                printf("Player 1 Won!");
                getchar();
                break;
            } else {
                printf("AI has won!");
                getchar();
                break;
            }
        }
        affiche_barres(t);
        if(i % 2 == 0)
            {
                printf("\nPlayer 1,");
                t = t - choisir_allumettes();
            } else {
                printf("\nPlayer 2,");
                t = t - ai_player();
            }
    }
    
    printf("\nPress enter to exit: ");
    getchar();
    return 0;
}