/**
 * @file 1.3.c
 * @brief 
 * Écrivez un programme qui lit des phrases 
 * (c’est-à-dire des suites de caractères quelconques) sur l’entrée standard 
 * et compte le nombre de mots (c’est-à-dire les suites de caractères composées 
 * exclusivement de lettresminuscules ou majuscules) qui s’y trouvent
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

        i = 0;

        while (mots != NULL)
        {
                len = strlen(mots);
                // printf("strlen, %d\t%s\n", len, mots);
                for (j = 0; j < len; j++)
                {
                        is_min = mots[j] >= 'a' && mots[j] <= 'z';
                        is_maj = mots[j] >= 'A' && mots[j] <= 'Z';
                        if (!is_min && !is_maj)
                                break;
                        i = i + (j == len - 1 ? 1 : 0);
                }
                mots = strtok(NULL, " ");
        }

        printf("There are %d words\n", i);

        return (EXIT_SUCCESS);
}