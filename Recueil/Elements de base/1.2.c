/**
 * @file 1.2.c
 * @brief 
 * Écrivez un programme qui lit des caractères (avec la fonction getchar)
 * sur l’entrée standard et compte le nombre d’occurrences de chaque 
 * lettre (on ne distinguera pas les minuscules des majuscules).
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        int i = 0, len, is_min = 0, is_maj = 0;
        char input[100], alphabet[26];

        printf("Enter a set of characters:\n");

        char c = getchar();
        while (c != '\n')
        {
                input[i] = c;
                c = getchar();
                i++;
        }

        len = strlen(input);

        for (i = 0; i < 26; i++)
                alphabet[i] = 0;

        for (i = 0; i < len; i++)
        {
                is_min = input[i] >= 'a' && input[i] <= 'z';
                is_maj = input[i] >= 'A' && input[i] <= 'Z';

                if (is_min)
                        alphabet[input[i] - 97]++;
                if (is_maj)
                        alphabet[input[i] - 65]++;
        }

        printf("The string you entered contains the following frequency of letters: \n");

        for (i = 0; i < 26; i++)
                if (alphabet[i] != 0)
                        printf("'%c' = %d\n", (i + 97), alphabet[i]);

        return (EXIT_SUCCESS);
}