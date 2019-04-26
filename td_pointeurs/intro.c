#include <stdio.h>
#include <stdlib.h>

// 7

// void increment(int *p)
// {
//     (*p)++;
// }

// 8

// void echange(int *p1, int *p2)
// {
//     (*p1) = 9;
//     (*p2) = 10;
// }

// 9

// void carre(int *x)
// {
//     (*x) = (*x) * (*x); 
// }

// 10

// void disque(float rayon, float *diametre, float *perimetre, float *surface)
// {
//     *diametre = 2 * rayon;
//     *perimetre = 2 * 3.14 * rayon;
//     *surface = 2 * 3.14 * rayon * rayon;
//     printf("%.3f\n", *diametre);
//     printf("%.3f\n", *perimetre);
//     printf("%.3f\n", *surface);

// }

// 11

// void somme_diff(int x, int y, int *somme, int *diff)
// {
//     *somme = x + y;
//     *diff = x - y;
// }

// 12
// int * cree_tab_carre(int n)
// {
//     int *pointeur_sur_zone_memoire = (int *) malloc (n * sizeof(int));
    
//     for(int i = 1; i <= n; i++)
//         pointeur_sur_zone_memoire[i] = i * i;

//     for(int i = 0; i < n; i++)
//         printf("%d\n", *(pointeur_sur_zone_memoire + i + 1));

//     return pointeur_sur_zone_memoire;
// }

// 13
// int * copie_tab(int *tab, int n)
// {
//     int * pointeur_sur_copie = (int *) malloc (n * sizeof(int));
//     for(int i = 0; i < n; i++)
//         pointeur_sur_copie[i] = tab[i];

//     return pointeur_sur_copie;
// }

// 14
// int * concat (int *tab1, int *tab2, int n1, int n2)
// {
//     int *zone_acc = (int *) malloc ((n1 + n2) * sizeof(int));
//     int reset = 0, count = 0;

//     for(int i = 0; i < n1; i++)
//     {
//         zone_acc[i] = tab1[i];
//         count++;
//     }

//     for(int j = count; j < n1 + n2; j++)
//     {
//         zone_acc[j] = tab2[reset];
//         reset++;
//     }

//     return zone_acc;
// }

// 15

// int main() 
// {
//     int t[] = {12, 25, 28, 35, 45, 78, 95};
//     int *p = t;

//     for(int i = 0; i < 7; i++)
//         printf("%d ", t[i]);
//     printf("\n");
//     printf("(a) Correct answer: %d \t My answer: 14\n", *p + 2);
//     printf("(b) Correct answer: %d \t My answer: 28\n", *(p + 2));
//     printf("(c) Correct answer: %d \t My answer: 13\n", &p + 1);
//     printf("(d) Correct answer: %d \t My answer: 41\n", &t[4] - 4);
//     printf("(e) Correct answer: %d \t My answer: Error\n", t);
//     printf("(f) Correct answer: %d \t My answer: 37\n", &t[3] - t);
//     printf("(g) Correct answer: %d \t My answer: Error\n", &t[4] - p);
//     printf("(h) Correct answer: %d \t My answer: Error\n", p + (*(p + 1) - 23));

//     return 0;
// }

// 16

// int * sous_tab(int * tab, int taille, int i1, int i2)
// {   
//     int size = i2 - i1 + 1;
//     int new_tab[size];
//     int * ret_p = new_tab; 


//     for(int i = i1; i <= i2; i++)
//         new_tab[i - i1] = tab[i]; 
        

//     return ret_p;
// }

// int main() 
// {
//     int a[10] = {1,2,3,4,5,6,7,8,9,10};
//     int * p1 = a, * p_ret;
//     p_ret = sous_tab(p1, 10, 3, 6);


//     for(int i = 0; i < 4; i++)
//         printf("%dw\n", *(p_ret + i));
    
//     return 0;

// }

// 17

// int ** init_mat_id(int n)
// {
//     int ** new_mat = (int **) malloc (n * sizeof(int *));
//     for(int i = 0; i < n; i++)
//         new_mat[i] = (int *) malloc (n * sizeof(int));

//     for(int i = 0; i < n; i++)
//     {    
//         for(int j = 0; j < n; j++)
//         {
//             if(i == j)
//             {
//                 new_mat[i][j] = 1;
//             }
//             else
//             {
//                 /* code */
//                 new_mat[i][j] = 0;
//             }
            
//         }
//     }



//     return new_mat;
// }

// int main()
// {
//     int ** p;

//     p = init_mat_id(10);

//     for(int i = 0; i < 10; i++)
//     {
//         printf("\n\n");
//         for(int j = 0; j < 10; j++)
//             printf("%d\t", p[i][j]);
//     }

//     for(int i = 0; i < 10; i++)
//         free(p[i]);
    
//     free(p);

//     return 0;
// }


// 18
// int ** transpose(int ** mat, int n)
// {
//     int ** new_mat = (int **) malloc(n * sizeof(int *));
//     for(int i = 0; i < n; i++)
//         new_mat[i] = (int *) malloc(n * sizeof(int));

//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < n; j++)
//             new_mat[i][j] = mat[j][i];

//     return new_mat;
// }

// int main()
// {
//     int n = 5;
//     int ** mat = (int **) malloc (5 * sizeof(int *));
//     for(int i = 0; i < n; i++)
//         mat[i] = (int *) malloc (5 * sizeof(int));
    


//     for(int i = 0; i < n; i++)
//     {
//         printf("\n");
//         for(int j = 0; j < n; j++)
//         {
//             mat[i][j] = i;
//             printf("%d\t", mat[i][j]);
//         }
//     }
//     printf("\n");

//     int ** new_mat = transpose(mat, n);

//     for(int i = 0; i < n; i++)
//     {
//         printf("\n");
//         for(int j = 0; j < n; j++)
//             printf("%d\t", new_mat[i][j]);
//     }

//     for(int i = 0; i < n; i++)
//         free(new_mat[i]);

//     free(new_mat);
//     printf("\n");
//     return 0;
// }

// 19
