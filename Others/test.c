#include <stdio.h>
#include <stdlib.h>

// 1.
// int main()
// {
//     int x = 5;
//     int *y = &x;
//     printf("L'addresse de x : %u (%x) \n", &x, &x); // ? ?
//     printf(" y : %d\n", *y);                        // 5
//     printf("*y : %d\n", *y);                        // 5
//     *y = 7;
//     printf("*y : %d\n", *y); // 7
//     return 1;
// }

// 2.
// int main()
// {
//     int x = 5;
//     int y = 7;
//     int *px = &x;
//     int *py = &y;

//     printf("*px : %d\n", *px); // 5
//     printf("*py : %d\n", *py); // 7

//     int *pz;
//     pz = px;
//     px = py;
//     py = pz;

//     printf("*px : %d\n", *px); // 7
//     printf("*py : %d\n", *py); // 5

//     return 1;
// }

// 3.

// typedef struct
// {
//     int abs, ord;
// } point;

// int f(int t[], int x, point p)
// {
//     t[1] = 12;
//     x = 22;
//     p.abs = 15;
//     return 5;
// }

// int main()
// {
//     int t[3] = {1, 2, 3};
//     int x = 124;
//     int y = 142;
//     point p = {10, 20};

//     printf("%d %d %d\n", t[0], t[1], t[2]); // 1 2 3
//     y = f(t, x, p);
//     printf("%d %d %d\n", x, y, p.abs); // 124, 5, 10

//     return 1;
// }

// 4.
// typedef struct
// {
//     int tab[3], num;
// } toto;

// void f(int t[1], toto *p)
// {
//     t[2] = 12;
//     p->num = 15;
//     p->tab[2] = 169;
//     return;
// }

// int main()
// {
//     int t[3] = {1, 2, 3};
//     toto p = {{1, 2, 3}, 1245};
//     toto *pointer;
//     pointer = &p;
//     f(t, pointer);
//     printf("%d %d %d\n", t[0], t[1], t[2]); // 1 12 3
//     printf("%d\n", p.tab[2]);               // 3
//     return 1;
// }

// Conclusion : Only way to modify a value is by passing a pointer to the fn or a tab;

// 5.
// int main()
// {
//     int i;
//     char *jour[7] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
//     for (i = 2; i < 5; i++)
//         printf("%s\n", *(jour + i));

//     return 0;
// }

// 6. + 15.
// int main()
// {
//     int t[] = {12, 25, 28, 35, 45, 78, 95};
//     int *p;
//     p = t;
//     // int i = 5;
//     // int *p = (int *)malloc(sizeof(int));
//     // int *q = (int *)malloc(sizeof(int));
//     // *p = i;
//     // q = &i;
//     // i++;
//     // printf("*p = %d, *q = %d\n", *p, *q);
//     // printf("%p\n", (p + 2));
//     printf("%d\n", *p + 2);              // 14
//     printf("%d\n", *(p + 2));            // 28
//     printf("%d\n", &p + 1);              // @ + 1
//     printf("%d\n", &t[4] - 4);           // @ - 4
//     printf("%d\n", t + 2);               // @ + 2
//     printf("%d\n", &t[4] - t);           // @ - t
//     printf("%d\n", &t[4] - p);           // @ - p
//     printf("%d\n", p + (*(p + 1) - 23)); // @ + 2

//     return 0;
// }

// 7.
// void incremente(int *p)
// {
//     (*p)++;
// }

// int main()
// {
//     int a = 0, *p;
//     p = &a;

//     incremente(p);

//     printf("%d\n", a);

//     return 0;
// }

// 8.
// void echange(int *p1, int *p2)
// {
//     int *temp;
//     temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

// int main()
// {
//     int a = 1, b = 2;
//     int *pa, *pb;
//     pa = &a;
//     pb = &b;

//     printf("%d %d\n", a, b);

//     echange(pa, pb);

//     printf("%d %d\n", a, b);

//     return 0;
// }

// 9.
// void carre(int *x)
// {
//     int d = (*x) * (*x);
//     int *temp;
//     temp = *x;
//     printf("%d\n", temp);
//     // printf("%d\n", *(temp));

//     *x = d;
// }

// int main()
// {
//     int a = 8;
//     int *pa;
//     pa = &a;
//     carre(pa);
//     printf("%d\n", a);
// }

// 10.
// void disque(float rayon, float *diametre, float *perimetre, float *surface)
// {
//     *diametre = 2 * rayon;
//     *surface = 3.14 * rayon * rayon;
//     *perimetre = 2 * 3.14 * rayon;
// }

// int main()
// {
//     float rayon = 4.0, diam = 0.0, perim = 0.0, surf = 0.0;
//     float *diametre, *perimetre, *surface;
//     diametre = &diam;
//     perimetre = &perim;
//     surface = &surf;

//     printf("%f %f %f\n", diam, perim, surf);
//     disque(rayon, diametre, perimetre, surface);
//     printf("%f %f %f\n", diam, perim, surf);

//     return 0;
// }

// 11.
// void somme_diff(int x, int y, int *somme, int *diff)
// {
//     *somme = x + y;
//     *diff = x - y;
// }

// int main()
// {
//     int a = 5, b = 10, somme = 0, diff = 0;
//     int *psomme, *pdiff;
//     psomme = &somme;
//     pdiff = &diff;

//     somme_diff(a, b, psomme, pdiff);

//     printf("%d %d\n", somme, diff);

//     return 0;
// }

// 12.
// int *cree_tab_carre(int n)
// {
//     int *p, tableau[n];
//     p = tableau;
//     for (int i = 1; i <= n; i++)
//         tableau[i - 1] = i * i;

//     return p;
// }

// int main()
// {
//     int a = 5, *b;
//     b = cree_tab_carre(a);
//     for (int i = 0; i < a; i++)
//         printf("%d\n", *(b + i));

//     return 0;
// }

// 13.
// int *copie_tab(int *tab, int n)
// {
//     int tabbie[n];
//     int *ptab;
//     ptab = tabbie;

//     for (int i = 0; i < n; i++)
//         tabbie[i] = tab[i];

//     return ptab;
// }

// int main()
// {
//     int n = 9;
//     int tab[n];
//     for (int i = 0; i < n; i++)
//         tab[i] = 0;

//     int *ptab, *receivere;
//     ptab = tab;

//     receivere = copie_tab(ptab, 9);

//     for (int i = 0; i < n; i++)
//         printf("%d\n", *(receivere + i));

//     return 0;
// }

// 14.
// int *concat(int *tab1, int *tab2, int n1, int n2)
// {
//     int *pfinal;
//     int tab[n1 + n2];
//     pfinal = tab;

//     for (int i = 0; i < n1; i++)
//         tab[i] = tab1[i];

//     int index = 6;
//     for (int i = n1 + n2; i >= n1; i--)
//     {
//         tab[i] = tab2[index];
//         index--;
//     }

//     return pfinal;
// }

// int main()
// {
//     int tab1[5] = {1, 2, 3, 4, 5}, tab2[6] = {6, 7, 8, 9, 10, 11};

//     int *ptab1, *ptab2, *ptabf;
//     ptab1 = tab1;
//     ptab2 = tab2;

//     ptabf = concat(ptab1, ptab2, 5, 6);

//     for (int i = 0; i < 11; i++)
//         printf("%d\n", *(ptabf + i));

//     return 0;
// }

// 15. -- see 6.

// 16.
// int *sous_tab(int *tab, int taille, int i1, int i2)
// {
//     int tabo[i2 - i1], index = 0;
//     int *ptab;
//     ptab = tabo;

//     for (int i = i1; i < i2; i++)
//     {
//         tabo[index] = tab[i];
//         index++;
//     }

//     return ptab;
// }

// int main()
// {
//     int tab[6] = {1, 2, 3, 4, 5, 6};
//     int *pt, *ptrec;
//     pt = tab;
//     ptrec = sous_tab(pt, 6, 3, 5);
//     for (int i = 0; i < 2; i++)
//         printf("%d\n", *(ptrec + i));

//     return 0;
// }

// 17.
// int **transposee(int **mat, int n)
// {
//     int **newMat = (int **)malloc(n * sizeof(int *));
//     for (int i = 0; i < n; i++)
//         newMat[i] = (int *)malloc(n * sizeof(int));

//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             newMat[i][j] = mat[j][i];

//     for (int i = 0; i < n; i++)
//     {
//         printf("\n");
//         for (int j = 0; j < n; j++)
//             printf("%d\t", newMat[i][j]);
//     }

//     printf("\n");

//     return newMat;
// }

// int main()
// {
//     int n = 6;
//     int **p = (int **)malloc(n * sizeof(int *));
//     for (int i = 0; i < n; i++)
//         p[i] = (int *)malloc(n * sizeof(int));

//     int **t;

//     int count = 0;
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//         {
//             p[i][j] = count;
//             count++;
//         }

//     for (int i = 0; i < n; i++)
//     {
//         printf("\n");
//         for (int j = 0; j < n; j++)
//             printf("%d\t", p[i][j]);
//     }
//     printf("\n\n\n");

//     t = transposee(p, n);

//     for (int i = 0; i < n; i++)
//     {
//         free(p[i]);
//         free(t[i]);
//     }

//     free(p);
//     free(t);

//     return 0;
// }

// #include <stdio.h>

// int check_anagram(char [], char []);

// int main()
// {
//   char a[100], b[100];

//   printf("Enter a string\n");
//   gets(a);

//   printf("Enter a string\n");
//   gets(b);

//   if (check_anagram(a, b) == 1)
//     printf("The strings are anagrams.\n");
//   else
//     printf("The strings aren't anagrams.\n");

//   return 0;
// }

// int check_anagram(char a[], char b[])
// {
//   int first[26] = {0}, second[26] = {0}, c=0;

//   // Calculating frequency of characters of first string

//   while (a[c] != '\0')
//   {
//     first[a[c]-'a']++;
//     c++;
//   }

//   c = 0;

//   while (b[c] != '\0')
//   {
//     second[b[c]-'a']++;
//     c++;
//   }

//   // Comparing frequency of characters

//   for (c = 0; c < 26; c++)
//   {
//     if (first[c] != second[c])
//       return 0;
//   }

//   return 1;
// }

// #include <stdio.h>
// #include <string.h>

// void find_frequency(char [], int []);

// int main()
// {
//    char string[100];
//    int c, count[26] = {0};

//    printf("Input a string\n");
//    gets(string);

//    find_frequency(string, count);

//    printf("Character Count\n");

//    for (c = 0 ; c < 26 ; c++)
//       printf("%c \t  %d\n", c + 'a', count[c]);

//    return 0;
// }

// void find_frequency(char s[], int count[]) {
//    int c = 0;

//    while (s[c] != '\0') {
//       if (s[c] >= 'a' && s[c] <= 'z' )
//          count[s[c]-'a']++;
//       c++;
//    }
// }

// diamond
// #include <stdio.h>

// int main()
// {
//   int n, c, k, space = 1;

//   printf("Enter number of rows\n");
//   scanf("%d", &n);

//   space = n - 1;

//   for (k = 1; k <= n; k++)
//   {
//     for (c = 1; c <= space; c++)
//       printf(" ");

//     space--;

//     for (c = 1; c <= 2*k-1; c++)
//       printf("*");

//     printf("\n");
//   }

//   space = 1;

//   for (k = 1; k <= n - 1; k++)
//   {
//     for (c = 1; c <= space; c++)
//       printf(" ");

//     space++;

//     for (c = 1 ; c <= 2*(n-k)-1; c++)
//       printf("*");

//     printf("\n");
//   }

//   return 0;
// }

// floyd

// #include <stdio.h>
// int main()
// {
//     int rows, i, j, number= 1;

//     printf("Enter number of rows: ");
//     scanf("%d",&rows);

//     for(i=1; i <= rows; i++)
//     {
//         for(j=1; j <= i; ++j)
//         {
//             printf("%d ", number);
//             ++number;
//         }

//         printf("\n");
//     }

//     return 0;
// }

// pascal

// #include <stdio.h>
// int main()
// {
//     int rows, coef = 1, space, i, j;

//     printf("Enter number of rows: ");
//     scanf("%d",&rows);

//     for(i=0; i<rows; i++)
//     {
//         for(space=1; space <= rows-i; space++)
//             printf("  ");

//         for(j=0; j <= i; j++)
//         {
//             if (j==0 || i==0)
//                 coef = 1;
//             else
//                 coef = coef*(i-j+1)/j;

//             printf("%4d", coef);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// linked list

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct
// {
//     int data;
//     struct node * next;
// } node;

// node * head = NULL;
// node * current = NULL;

// void printList()
// {
//     node * ptr = head;
//     printf("\n[head] =>");
//     // start from the beginning
//     while(ptr != NULL)
//     {
//         printf(" %d =>", ptr->data);
//         ptr = ptr->next;
//     }

//     printf(" [null]\n");
// }

// // insert link at the first location
// void insert(int data)
// {
//     // create a link
//     node * link = (node *) malloc (sizeof(node));

//     // link->key = key
//     link->data = data;

//     // point it to the old first node
//     link->next = head;

//     //point first to new first node
//     head = link;
// }

// int main()
// {
//     insert(10);
//     insert(20);
//     insert(10);
//     insert(30);
//     insert(50);
//     insert(50);

//     printList();

//     return 0;
// }

// size linked list

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct
// {
//     int data;
//     struct node *next;
// } Node;

// Node *head = NULL;
// Node *current = NULL;

// // Create a linked list
// void insert(int data)
// {
//     // Allocate memore for new node
//     Node *link = (Node *)malloc(sizeof(Node));

//     link->data = data;
//     link->next = NULL;

//     // If head is empty, create new list
//     if (head == NULL)
//     {
//         head = link;
//         return;
//     }

//     current = head;

//     // Move to the end of the list
//     while (current->next != NULL)
//         current = current->next;

//     // Insert link at the end of the list
//     current->next = link;
// }

// void size_of_list()
// {
//     int size = 0;

//     if (head == NULL)
//     {
//         printf("List size: %d ", size);
//         return;
//     }

//     current = head;
//     size = 1;
//     while (current->next != NULL)
//     {
//         current = current->next;
//         size++;
//     }
//     printf("List size : %d \n", size);
// }

// int main()
// {
//     insert(10);
//     insert(20);
//     insert(30);
//     insert(1);
//     insert(40);
//     insert(50);

//     size_of_list();
//     return 0;
// }

// pointerStruct

// #include <stdio.h>
// #include <stdlib.h>

// struct Contact
// {
//     char Name[20];
//     struct Contact *Spouse;
// };

// int main()
// {
//     struct Contact *contact_00;
//     contact_00 = (struct Contact *)malloc(sizeof(struct Contact));

//     printf("Add a contact: \n");
//     printf("Name: \n");
//     scanf("%s", (contact_00)->Name);
//     printf("Spouse Name: \n");
//     scanf("%s", (contact_00->Spouse)->Name);
//     printf("================\n");
//     free(contact_00);
//     return 0;
// }
