/**
 * @file 2.1.c
 * @brief 
 * Écrivez un programme qui recopie un fichier toto vers un 
 * fichier titi à créer, à l’aide des fonctions 
 * fopen, putc, getc et fclose.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
        FILE *fp, *fp2;
        int c = 0;

        // b forces binary mode, meaning it will not
        //      translate the data and avoid strange problems
        //      with my data
        fp = fopen("toto", "r");
        fp2 = fopen("titi", "w");

        if (fp == NULL)
                perror("FP");

        if (fp2 == NULL)
                perror("FP@");

        // while ((c = getc(stdin)) != '\n')
        // {
        //         putc(c, stdout);
        //         putc(c, fp2);
        // }

        while ((c = getc(fp)) != EOF)
        {
                putc(c, fp2);
                putc(c, stdout);
        }

        puts("");

        fclose(fp);
        fclose(fp2);

        return 0;
}