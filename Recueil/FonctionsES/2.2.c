/**
 * @file 2.2.c
 * @brief 
 * Écrivez un programme pour compter le nombre de lignes 
 * sur l’entrée standard, en utilisant la fonction getchar.
 * Variante : votre programme doit prendre un argument optionnel, 
 * le caractère à compter
 * 
 */
#include <stdio.h>

void compter_lignes()
{
        char c, consec[2] = "";
        int line_count = 0, i = 0;

        puts("Tap 'Enter' twice to terminate the input reader");

        while (c = getchar())
        {
                if (c != '\n')
                        i = 0;

                if (c == '\n')
                {
                        consec[i] = '\n';
                        line_count++;
                        i++;
                }

                if (consec[0] == '\n' && consec[1] == '\n')
                        break;
        }

        printf("Line count: %d\n", line_count - 1);
}

int main()
{
        compter_lignes();
        return 0;
}