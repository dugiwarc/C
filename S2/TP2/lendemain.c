#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bissextile(int a) 
{
    if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)) return 1;
    else return 0;
}

/* 
    Date d'entree doit etre valide
*/
void lendemain(int j, int m, int a)
{
    int bissex = bissextile(a);
    char mois[10];
    int c;

    switch (m)
    {
    case 1:
        strcpy(mois, "Janvier");
        if (j > 31)
        {
            printf("JJ Invalide");
            c = 2;
            break;
        }
        else if (j == 31)
        {
            j = 1;
            strcpy(mois, "Fevrier");
            break;
        }
        break;
    case 2:
        strcpy(mois, "Fevrier");
        if (bissex)
        {
            if(j > 29)
            {
                printf("JJ Invalide");
                c = 2;
                break;
            }
            else if (j == 29) 
            {
                j = 1;
                strcpy(mois, "Mars");
                break;
            }
        }
        if (j > 28)
        {
            printf("JJ Invalide\n");
            c = 2;
            break;
        }
        else if (j == 28)
        {
            j = 1;
            strcpy(mois, "Mars");
            break;
        }
        break;
    case 3:
        strcpy(mois, "Mars");
        if (j > 31)
        {
            printf("JJ Invalide");
            c = 2;
            break;
        }
        else if (j == 31)
        {
            j = 1;
            strcpy(mois, "Avril");
            break;
        }
        break;
    case 4:
        strcpy(mois, "Avril");
        if (j > 30)
        {
            printf("JJ Invalide");
            c = 2;
            break;
        }
        else if (j == 30)
        {
            j = 1;
            strcpy(mois, "May");
            break;
        }
        break;
    case 5:
        strcpy(mois, "May");
        if (j > 31)
        {
            printf("JJ Invalide");
            c = 2;
            break;
        }
        else if (j == 31)
        {
            j = 1;
            strcpy(mois, "June");
            break;
        }
        break;
    case 6:
        strcpy(mois, "Juin");
        if (j > 30)
        {
            printf("JJ Invalide");
            c = 2;
            break;
        }
        else if (j == 30)
        {
            j = 1;
            strcpy(mois, "Juillet");
            break;
        }
        break;
    case 7:
        strcpy(mois, "Juillet");
        if (j > 31)
        {
            printf("JJ Invalide");
            c = 2;
            break;
        }
        else if (j == 31)
        {
            j = 1;
            strcpy(mois, "Aout");
            break;
        }
        break;
    case 8:
        strcpy(mois, "Aout");
        if (j > 31)
        {
            printf("JJ Invalide");
            c = 2;
            break;
        }
        else if (j == 31)
        {
            j = 1;
            strcpy(mois, "Septembre");
            break;
        }
        break;
    case 9:
        strcpy(mois, "September");
        if (j > 30)
        {
            printf("JJ Invalide");
            c = 2;
            break;
        }
        else if (j == 30)
        {
            j = 1;
            strcpy(mois, "Octobre");
            break;
        }
        break;
    case 10:
        strcpy(mois, "October");
        if (j > 31)
        {
            printf("JJ Invalide");
            c = 2;
            break;
        }
        else if (j == 31)
        {
            j = 1;
            strcpy(mois, "November");
            break;
        }
        break;
    case 11:
        strcpy(mois, "Novembre");
        if (j > 30)
        {
            printf("JJ Invalide");
            c = 2;
            break;
        }
        else if (j == 30)
        {
            j = 1;
            strcpy(mois, "December");
            break;
        }
        break;
    case 12:
        strcpy(mois, "December");
        if (j > 31)
        {
            printf("JJ Invalide");
            c = 2;
            break;
        }
        else if (j == 31)
        {
            j = 1;
            a = a + 1;
            strcpy(mois, "Janvier");
            break;
        }
        break;
    default:
        break;
    }


    if(c != 2)
    {
        printf("La date du lendemain est:\n%d %s, %d", j, mois, a);
    }
    else 
    {
        printf("\nPress Enter to continue\n");
        getchar();
    }
}

int main()
{
    lendemain(3,2,2021);

    return 0;
}