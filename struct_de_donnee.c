// Initialisation
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// void initialise_tab(int n)
// {
//     float tabbie[n];
    
//     for(int i = 0; i < n; i++)
//     {
//         tabbie[i] = 0.0;
//         printf("%.2f\t", tabbie[i]);
//     }

//     printf("\n");
//     return;
// }

// int main(void)
// {

//     initialise_tab(10);
//     return 0;
// }

// Lecture

// void lecture()
// {
//     float tabbie[2];

//     for(int i = 0; i < 2; i++)
//     {
//         printf("Enter value number %d\n", i);
//         scanf("%f", &tabbie[i]);
//     }

//     for(int i = 0; i < 2; i++)
//         printf("%f\t", tabbie[i]);

//     printf("\n");
// }

// int main(void)
// {
//     lecture();

//     return 0;
// }

// Copie

// void copie(char char_array[], int size)
// {
//     char tabbie[size];
    
//     for(int i = 0; i < size; i++)
//         tabbie[i] = char_array[i];

//     for(int i = 0; i < size; i++)
//         printf("%c\t", tabbie[i]);

//     printf("\n");
// }

// int main(void)
// {
//     char charrie[3] = {'a', 'b', 'c'};

//     copie(charrie, 3);

//     return 0;
// }

// Maximum

// int maximum(int * array, int size)
// {
//     int maxValue = array[0], indexValue;

//     for(int i = 0; i < size; i++)
//     {
//         if(array[i] > maxValue)
//         {
//             maxValue = array[i];
//             indexValue = i;
//         }
//     }

//     return indexValue;
// }

// int indiceDuMaximum(int * array, int size)
// {
//     int maxValue = array[0];

//     for(int i = 0; i < size; i++)
//     {
//         if(array[i] > maxValue)
//             maxValue = array[i];
//     }
//     return maxValue;
// }


// int main()
// {
//     int array[5] = {1,20,3,564,5}, size = 5, a, b;
//     int * pointerToArray;
//     pointerToArray = array;

//     a = indiceDuMaximum(pointerToArray, size);
//     b = maximum(pointerToArray, size);

//     printf("%d\n", a);
//     printf("%d\n", b);

//     return 0;
// }

// Permutations circulaires

// void permutation_circulaire(int * array, int n, int size)
// {
//     int new_array[size];
//     int index;

//     for(int i = 0; i < size; i++)
//     {
//         if((i + n) >= size)
//         {
//             index = (i + n) % n;
//         }
//         else
//         {
//             index = i + n;
//         }
        
//         new_array[index] = array[i];
//     }

//     for(int i = 0; i < size; i++)
//         printf("%d\t", new_array[i]);

//     printf("\n");
// }

// int main()
// {
//     int array[5] = {1,2,3,4,5};
//     int *p;
//     p = array;
//     int n = 1, size = 5;
//     permutation_circulaire(p, n, size);

//     return 0;
// }

// Minuscules et Majuscules

// void minusculesEnMajuscules(char a[])
// {
//     int c = 0;

//     while(a[c] != '\0')
//     {
//         if(a[c] > 97 && a[c] < 122)
//             a[c] -= 32;
//         c++;
//     }

//     printf("%s\n", a);
// }

// int main()
// {
//     char a[100];
//     printf("Enter string: \n");
//     scanf("%s", a);

//     minusculesEnMajuscules(a);

//     return 0;
// }

// Mots
// int estPresent(char a, char b[])
// {
//     int c = 0;
//     while(b[c] != '\0')
//     {
//         if(a == b[c])
//             return 1;
//         c++;
//     }

//     return 0;
// }

// int lettersOfAInB(char a[], char b[])
// {
//     int count = 0;
 
//     for(int i = 0; a[i] !='\0'; i++)
//     {
//         count = 0;
//         for(int j = 0; b[j] !='\0'; j++)
//         {
//             if(a[i] == b[j])
//             {
//                 count = 1;
//                 break;
//             }
//         }
//         if(count == 0)
//             return 0;
//     }
//     return 1;
// }

// int main() 
// {
//     char a[5] = "oat";
//     char b[5] = "oabq";
//     int is;

//     is = lettersOfAInB(a, b);

//     if(is)
//         printf("Yes");

//     printf("\n");
//     return 0;
// }

// void removeVowels(char a[])
// {

//     char b[100];
//     int index = 0;
//     for(int i = 0; a[i] != '\0'; i++)
//     {
//         if(!(a[i] == 'a' || a[i] == 'e' || a[i] == 'o' || a[i] == 'i' || a[i] == 'u'))
//         {
//             b[index] = a[i];
//             index++;
//         }   
//     }
//     b[index] = '\0';
//     printf("%s\n", b);
// }

// int main()
// {
//     char a[100] = "Hello";
//     removeVowels(a);

//     return 0;

// }

// Mirror

#include <string.h>

void inverseString(char str[])
{
    char new_str[50];
    int len, index = 0;

    len = strlen(str);
    int max = len;

    for(int i = 0; i < max; i++)
    {
        new_str[i] = str[len-1];
        index++;
        len--;
    }

    new_str[index] = '\0';
    printf("%s\n", new_str);
}

// int isPalindrome(char str[])
// {
//     char new_str[100];
//     int upperBound, size, index = 0;

//     upperBound = strlen(str);
//     size = upperBound;

//     for(int i = 0; i < size; i++)
//     {
//         new_str[i] = str[upperBound - 1];
//         upperBound--;
//         index++;
//     }

//     new_str[index] = '\0';

//     for(int i = 0; i < size; i++)
//         if(!(new_str[i] == str[i]))
//             return 0;
    
//     return 1;
// }

// int main() 
// {
//     int is;
//     char input[100];
//     scanf("%s", input);
//     is = isPalindrome(input);
    
//     if(is)
//         printf("Yes\n");
    
//     return 0;
// }


// float * supprimeElement(float * tab, int index, int size)
// {
//     float * p = (float *) malloc (sizeof(float));
//     int len = size - 1, count = 0;

//     for(int i = 0; i < len; i++)
//     {
//         if(i == index)
//         {
//             p[i] = tab[i + 1];
//             count++;
//         }
//         else 
//             p[i] = tab[i + count];
//     }

//     return p;
// }


// int main ()
// {
//     float * p, *d;
//     float tab[5] = {1.2,4.5,2.3,0.4,9.9};
//     int x = sizeof(tab)/4;
//     printf("x%d\n", x);
//     d = tab;
//     p = supprimeElement(d, 2, x);

//     for(int i = 0; i < x - 1; i++)
//         printf("%.2f\n", p[i]);

//     free(p);
//     return 0;
// }

// int main()
// {
//     int rows, coef = 1;
    
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     for(int i = 0; i < rows; i++)
//     {
//         for(int whitespace = 1; whitespace <= rows - i; whitespace++)
//             printf("  ");

//         for(int j = 0; j <= i; j++)
//         {
//             if (j == 0 || i == 0)
//                 coef = 1;
//             else
//                 coef = coef * (i - j + 1)/j;

//             printf("%4d", coef);
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main()
{
    char string[100];
    int c = 0, count[26] = {0}, x;

    printf("Enter a string\n");
    scanf("%s", string);

    while (string[c] != '\0')
    {
        if(string[c] >= 'a' && string[c] <= 'z')
        {
            x = string[c] - 'a';
            count[x]++;
        }

        c++;
    }
    for(c = 0; c < 26; c++)
    {
        if(count[c] > 0)
            printf("%c : '%d'\n", c + 'a', count[c]);
    }

    return 0;
}