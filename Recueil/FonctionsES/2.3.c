/**
 * @file 2.3.c
 * @brief 
 */
#include <string.h>
#include <stdio.h>
#define MAXNOM 50
#define MAXTEL 10

struct fiche
{
        int occupe;
        char nom[MAXNOM];
        char telephone[MAXTEL];
};

typedef struct fiche fiche;

void chercher(char *nom, fiche *carnet)
{
        int i, len = 0, len_2 = 0;

        len = strlen(nom);

        for (i = 0; i < 50; i++)
        {

                if (!strncmp(carnet[i].nom, nom, len))
                {
                        printf("Fiche: %d\n", i);
                        return;
                }
        }
}

void afficher(int index, fiche *carnet)
{

        if (carnet[index].occupe)
                puts(carnet[index].nom);
}

void afficher_tout(fiche *carnet)
{
        int i = 0;

        for (i = 0; i < 50; i++)
                if (carnet[i].occupe)
                        puts(carnet[i].nom);
        // while (carnet[i].occupe)
        // {
        //         puts(carnet[i].nom);
        //         i++;
        // }
}

void ajouter(char *nom, char *tel, fiche *carnet)
{
        int i = 0;

        while (carnet[i].occupe)
        {
                i++;
        }
        strcpy(carnet[i].nom, nom);
        strcpy(carnet[i].telephone, tel);
        carnet[i].occupe = 1;
}

void detruire(int num, fiche *carnet)
{
        carnet[num].occupe = 0;
}

int main()
{
        fiche carnet[50];
        int i;
        for (i = 0; i < 50; i++)
                carnet[i].occupe = 0;

        carnet[0].occupe = 1;
        strcpy(carnet[0].nom, "Alex");

        carnet[1].occupe = 1;
        strcpy(carnet[1].nom, "Dan");

        ajouter("Natalie", "123", carnet);
        afficher_tout(carnet);
        detruire(1, carnet);
        puts("");
        afficher_tout(carnet);

        return 0;
}
