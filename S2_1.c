#include <stdio.h>
#include <math.h>

int minimum (int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    else if (b < a && b < c)
        return b;
    else return c;
}

int return_sqrt (int a)
{
    return a * a;
}

void read_input ()
{
    int a;
    scanf("%d", &a);
    printf("Your result is %d", a * a);    
}

void est_majeure()
{
    int a;
    scanf("%d", &a);
    if (a >= 18)
        printf("Peut voter");
    else printf("Ne peut pas voter");
}

float prem_degre()
{
    float a, b, c;
    printf("Introduisez a");
    scanf("%f", &a);
    printf("Introduisez b");
    scanf("%f", &b);
    printf("Introduisez c");
    scanf("%f", &c);

    float x = (c - b) / a; 
    return x;
}

void calc()
{
    int a, b, c;
    float d;
    printf("Entrez un nombre: ");
    scanf("%d", &a);
    printf("Entrez un autre: ");
    scanf("%d", &b);

    printf("Choisissez une operations parmis les suivantes: \n1. addition\n2. soustraction\n3. multiplication\n4. division\n");
    scanf("%d", &c);

    switch(c)
    {
        case 1:
            printf("%d + %d = %d", a, b, a + b);
            break;

        case 2:
            printf("%d", a - b);
            break;

        case 3:
            printf("%d", a * b);
            break;

        case 4:
            if (b == 0) 
            {
                printf("Error");
                break;
            }
            else 
            {
                d = (float)a / b;
                printf("%.2f", d);
                break;
            }
        default:
            printf("\nGoodbye");
            break;
    }
}

void abs_value(float a)
{
    printf("%f", fabs(a));
}

void parity(int a, int b)
{
    if (a < 0 || b < 0)
        printf("Negative result");
    else
        printf("Positive result");
}

void bissextile()
{
    int a;
    scanf("%d", &a);
    if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
        printf("L'annee est bissextile");
    else
        printf("L'annee n'est pas bissextile");
}

void duree_voyage()
{
    int HD, MD, HA, MA, H, M;
    printf("HD: ");
    scanf("%d", &HD);
    printf("MD: ");
    scanf("%d", &MD);
    printf("HA: ");
    scanf("%d", &HA);
    printf("MA: ");
    scanf("%d", &MA);

    if (HA < HD)
        H = 24 - HD + HA - 1;
    else
        H = HA - HD - 1;

    M = 60 - MD + MA;

    printf("Duree totale : %d heures et %d minutes", H, M);
}

void aire_carree()
{
    int d;
    printf("Longueur cote: ");
    scanf("%d", &d);
    printf("Aire: %d", d * d);
}

void aire_disque()
{
    int r;
    printf("Longueur rayon: ");
    scanf("%d", &r);
    printf("Aire disque: %f", r * r * M_PI);
}

void aire_triangle()
{
    int a, b, c;
    float p;
    printf("Longueur a: ");
    scanf("%d", &a);
    printf("Longueur b: ");
    scanf("%d", &b);
    printf("Longueur c: ");
    scanf("%d", &c);
    printf("Demi-perimetre: ");
    scanf("%f", &p);
    float A;
    A = (p)*(p-a)*(p-b)*(p-c);
    printf("Aire: %lf", sqrt(A));
}

void voyelle()
{
    char lettre;
    printf("Lettre: ");
    scanf("%c", &lettre);
    if (lettre == 'a' || lettre == 'e' || lettre == 'i' || lettre == 'o' || lettre == 'u')
        printf("Voyelle");
    else
        printf("Consonnante");
}

void jour_semaine()
{
    int d;
    printf("Enter a number: ");
    scanf("%d", &d);
    
    switch(d)
    {
        case 1:
            printf("Monday");
            break;

        case 2: 
            printf("Tuesday");
            break;
    }
}

int main() 
{
    // calc();
    // abs_value(-24.22);
    // parity(6, 3);
    // bissextile();
    // duree_voyage();
    // aire_carree();
    // aire_disque();
    // aire_triangle();
    // voyelle();

    jour_semaine();

    return 0;
}