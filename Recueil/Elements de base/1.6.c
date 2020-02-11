/**
 * @file 1.6.c
 * @brief 
 * Écrivez un programme qui lit une chaîne de caractères 
 * sur l’entrée standard (avec fgets), la recopie (avec strncpy) 
 * dans une autre chaîne, puis affiche la nouvelle chaîne (avec puts) 
 * et sa longueur (avec strlen et printf).
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
        char input[256];
        char input_copy[256];
        int len;

        printf("Enter a stream of characters: \n");

        fgets(input, 256, stdin);
        strncpy(input_copy, input, 256);

        len = strlen(input_copy);
        puts(input_copy);
        printf("Longueur: %d\n", len);

        return (EXIT_SUCCESS);
}