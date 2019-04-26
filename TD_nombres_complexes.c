#include <stdio.h>
#include <stdlib.h>

// 1
typedef struct
{
    float re, im; 
} complexe;


// 2

// complexe * new_complexe(float r, float i)
// {
//     complexe * pointeur_vers_complexe = (complexe *) malloc (sizeof(complexe));

//     return pointeur_vers_complexe;
// }

// 3

// void print_complexe(complexe *p)
// {
//     printf("%f %f\n", p->re, p->im);
//     printf("%f %f\n", (*p).re, (*p).im);

//     return;
// }

// int main(void) {
//     complexe * Ion = malloc(sizeof(complexe));
//     (*Ion).re = 3.4;
//     Ion->im = 9.1;

//     print_complexe(Ion);

//     free(Ion);

//     return 0;
// }

// 4
// complexe * addition_complexes(complexe *c1, complexe *c2)
// {
//     complexe *c3 = malloc(sizeof(complexe));

//     c3->re = c1->re + c2->re;
//     c3->im = c1->im + c2->im;

//     return c3;
// }

// 5
complexe * produit_complexes(complexe *c1, complexe *c2)
{
    complexe *c3 = (complexe *) malloc (sizeof(c3));
    c3->re = c1->re * c2->re;
    c3->im = c1->im * c2->im;

    return c3;
}

int main(void) 
{
    complexe * c1 = (complexe *) malloc (sizeof(complexe));
    complexe * c2 = (complexe *) malloc (sizeof(complexe));
    complexe * c3 = (complexe *) malloc (sizeof(complexe));

    c1->re = 4.5;
    c1->im = 5.5;
    c2->re = 6.5;
    c2->im = 7.5;


    c3 = produit_complexes(c1, c2);

    printf("%f %f\n", c3->re, c3->im);

    free(c1);
    free(c2);
    free(c3);


    return 0;
}

