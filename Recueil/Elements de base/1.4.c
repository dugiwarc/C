/**
 * @file 1.4.c
 * @brief 
 * Modifiez le programme de l’exercice précédent pour afficher 
 * seulement les mots (et pas les chiffres, les signes de ponctuation, etc.), un par ligne.
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
        int i = 0, j = 0, len, is_min = 0, is_maj = 0;
        char input[256], c, *mots;

        printf("Enter a set of characters followed by an empty space:\n");

        c = getchar();

        while (c != '\n')
        {
                input[i] = c;
                c = getchar();
                i++;
        }

        mots = strtok(input, " ");

        while (mots != NULL)
        {
                len = strlen(mots);
                // printf("strlen, %d\t%s\n", len, mots);
                i = 0;
                for (j = 0; j < len; j++)
                {
                        is_min = mots[j] >= 'a' && mots[j] <= 'z';
                        is_maj = mots[j] >= 'A' && mots[j] <= 'Z';
                        if (!is_min && !is_maj)
                                break;
                        i = i + (j == len - 1 ? 1 : 0);
                        if (i)
                                printf("\n%s\n", mots);
                }
                mots = strtok(NULL, " ");
        }

        return (EXIT_SUCCESS);
}