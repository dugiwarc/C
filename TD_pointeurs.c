#include <stdio.h>
#include <stdlib.h>

// 15

// int main() 
// {
//     int *p; 
//     int t[] = {12, 25, 28, 35, 45, 78, 95};
//     p = t;
//     printf("Correct value: %d, My guess: 14\n", *p + 2);
//     printf("Correct value: %d, My guess: 28\n", *(p + 2));
//     printf("Correct value: %d, My guess: @ + 1\n", &p + 1);
//     printf("Correct value: %d, My guess: @th - 4\n", &t[4] - 4);
//     printf("Correct value: %d, My guess: @th + 2\n", t + 2);
//     printf("Correct value: %d, My guess: 4\n", &t[4] - t);
//     printf("Correct value: %d, My guess: 4\n", &t[4] - p);
//     printf("Correct value: %d, My guess: @ + 2\n", p + (*(p + 1) - 23));

// }

// 16

// int * sous_tab(int * tab, int taille, int i1, int i2) 
// {
//     int * new_tab = (int *) malloc ((i2 - i1) * sizeof(int));
//     for(int i = i1; i < i2; i++)
//     {
//         new_tab[i] = tab[i];
//         printf("%d\n", new_tab[i]);
//     }

//     return new_tab;
// }

// int main() 
// {
//     int *new_tab;
//     int t[] = {12, 25, 28, 35, 45, 78, 95};

//     new_tab = sous_tab(t, 7, 2, 4);


//     free(new_tab);
//     return 0;
// }

// 17

// int ** int_mat_id(int n)
// {
//     int ** row = (int **) malloc (n * sizeof(int*));
//     for(int i = 0; i < n; i++)
//     {
//         row[i] = (int *) malloc (n * sizeof(int));
//     }

//     for(int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if(i == j)
//             {
//                 row[i][j] = 1;
//             }
//             else row[i][j] = 0;
//         }
//     }

//     return row;
// }

// int main() 
// {
//     int ** row;
//     int n = 5;
//     row = int_mat_id(n);

//     for(int i = 0; i < n; i++)
//     {
//         printf("\n\n");
//         for(int j = 0; j < n; j++)
//         {
//             printf("%d\t", row[i][j]);
//         }
//     }

//     for(int i = 0; i < n; i++)
//     {
//         free(row[i]);
//     }

//     free(row);
//     printf("\n\n");

//     return 0;
// }

// 18

// int ** transpose(int ** mat, int n)
// {
//     int ** matrice = (int **) malloc (n * sizeof(int *));
//     for(int i = 0; i < n; i++)
//     {
//         matrice[i] = (int *) malloc (n * sizeof(int));
//     }

//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < n; j++)
//         {
//             matrice[i][j] = mat[j][i];
//         }
//     }

//     for(int i = 0; i < n; i++)
//     {
//         printf("\n\n");
//         for(int j = 0; j < n; j++)
//         {
//             printf("%d\t", matrice[i][j]);
//         }
//     }

//     printf("\n\n");
//     return matrice;

// }

int ** random_matrice_carre(int n)
{
    int ** matrice = (int **) malloc (n * sizeof(int *));
    for(int i = 0; i < n; i++)
    {
        matrice[i] = (int *) malloc (n * sizeof(int));
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            matrice[i][j] = rand() % 9;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("\n\n");
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", matrice[i][j]);
        }
    }
    printf("\n\n");
    return matrice;
}

// int main() 
// {
//     int n = 5;
//     int ** result, ** matrice_carre;
//     matrice_carre = random_matrice_carre(n);
//     result = transpose(matrice_carre, n);
    
//     for(int i = 0; i < n; i++)
//     {
//         free(result[i]);
//         free(matrice_carre[i]);
//     }
//     free(result);
//     free(matrice_carre);
//     return 0;
// }

// 19

// int ** somme(int **mat1, int **mat2, int n)
// {
//     int ** mat_default = (int **) malloc (n * sizeof(int *));
//     for(int i = 0; i < n; i++)
//         mat_default[i] = (int *) malloc (n * sizeof(int));

//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < n; j++)
//         {
//             mat_default[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }

//     for(int i = 0; i < n; i++)
//     {
//         printf("\n\n");
//         for(int j = 0; j < n; j++)
//             printf("%d\t", mat_default[i][j]);    
//     }

//     printf("\n\n");
//     return mat_default;
// }

// int main(void) {
//     int n = 5;
//     int ** matrice_1 = (int **) malloc (n * sizeof(int *));
//     int ** matrice_2 = (int **) malloc (n * sizeof(int *)); 
//     int ** matrice_3 = (int **) malloc (n * sizeof(int *)); 


//     matrice_1 = random_matrice_carre(n);
//     matrice_2 = random_matrice_carre(n);
//     matrice_3 = somme(matrice_1, matrice_2, n);
    
//     for(int i = 0; i < n; i++)
//     {
//         free(matrice_1[i]);
//         free(matrice_2[i]);
//         free(matrice_3[i]);
//     }

//     free(matrice_1);
//     free(matrice_2);
//     free(matrice_3);

//     return 0;
// }
