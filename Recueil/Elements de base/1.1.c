/**
 * @file 1.1.c
 * @brief 
 * Écrivez un programme qui affiche à l’écran les valeurs de 
 * 2^i (0 ≤ i < 10) en utilisant la fonction printf.
 */

#include <stdio.h>
// #include <math.h>
// #include <inttypes.h>

int main()
{
    // uint64_t t;
    // printf("%" PRIu64 "\n", (uint64_t)pow(2, 51));
    int i = 1;
    int n = 2;
    // for (i = 0; i < 10; i++)
    //     printf("%d\n", (int)pow(2, i));
    while (i < 10)
    {
        printf("%d\n", n);
        n *= 2;
        i++;
    }

    return 0;
}