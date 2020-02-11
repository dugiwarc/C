#include <stdio.h>
#include <string.h>

struct mois
{
        char nom[16];
        int jours;
};

struct mois initiate_mois(struct mois str, char nom[16], int jours)
{
        for (int i = 0; i < 16; i++)
                str.nom[i] = 0;
        strcpy(str.nom, nom);
        str.jours = jours;
        return str;
}

void init_zero(char *string)
{
        for (int i = 0; i < 16; i++)
                string[i] = 0;
}

int main()
{
        struct mois tab_mois[12];
        char input[16];
        int i, are_equal;
        init_zero(input);

        tab_mois[0] = initiate_mois(tab_mois[0], "January", 31);
        tab_mois[1] = initiate_mois(tab_mois[1], "February", 29);
        tab_mois[2] = initiate_mois(tab_mois[2], "March", 31);
        tab_mois[3] = initiate_mois(tab_mois[3], "April", 30);
        tab_mois[4] = initiate_mois(tab_mois[4], "May", 31);
        tab_mois[5] = initiate_mois(tab_mois[5], "June", 30);
        tab_mois[6] = initiate_mois(tab_mois[6], "July", 31);
        tab_mois[7] = initiate_mois(tab_mois[7], "August", 31);
        tab_mois[8] = initiate_mois(tab_mois[8], "September", 30);
        tab_mois[9] = initiate_mois(tab_mois[9], "October", 31);
        tab_mois[10] = initiate_mois(tab_mois[10], "November", 30);
        tab_mois[11] = initiate_mois(tab_mois[11], "December", 31);

        puts("Enter a month:");
        scanf("%s", input);

        for (i = 0; i < 12; i++)
        {
                are_equal = strcmp(input, tab_mois[i].nom);
                if (!are_equal)
                        break;
        }

        i > 11 ? puts("Query not found") : printf("%s has %d days and is the %d%s month in the calendar\n", tab_mois[i].nom, tab_mois[i].jours, i + 1, i + 1 == 1 ? "st" : 2 ? "nd" : 3 ? "rd" : "th");

        return 0;
}