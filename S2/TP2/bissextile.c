#include <stdio.h>

int bissextile(int a)
{
    if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
        return 1;
    else
        return 0;
}

int nb_jours(int mois, int a)
{
    int bissex = bissextile(a);

    int mj;
    if ((mois == 1) || (mois == 3) || (mois == 5) || (mois == 7) || (mois == 8) || (mois == 10) || (mois == 12))
        mj = 31;

    else if (mois == 2)
    {
        if(!bissex)
        {
            mj = 28;
        } else {
            mj = 29;
        }
    }
    else if ((mois < 1) || (mois > 12))
    {
        printf("Ce mois n'existe pas.\n");
        return 0;
    }
    else
        mj = 30;
    return mj;
}

// fonction : lendemain
// arguments : trois entiers representant le jour, le mois et l'annee.
// resultat : aucun.
// pre-conditions : l'annee n'est pas bissextile.
// post-conditions : aucune.
void lendemain(int jour, int mois, int an)
{
    int mj = nb_jours(mois, an);

    if ((jour < 1) || (jour > mj))
    {
        printf("Ce jour n'existe pas.\n");
        return;
    }
    else if (jour < mj)
        jour = jour + 1;
    else
    {
        jour = 1;
        if (mois < 12)
            mois = mois + 1;
        else
        {
            mois = 1;
            an = an + 1;
        }
    }

    printf("Date du lendemain : %d / %d / %d\n", jour, mois, an);
    return;
}

int main()
{
    return 0;
}