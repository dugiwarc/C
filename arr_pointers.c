#include <stdio.h>

int main()
{
char c = 'A';
char * pc = &c;

char vowels[] = {'A', 'E', 'I', 'O', 'U'};
char * pvowels = &vowels;
int i;

for(i = 0; i < 5; i++)
    printf("vowels[%d]: %u, pvowels + %d: %u, vowels + %d: %u\n", i, cdvowels[i], i, pvowels + i, vowels + i);

for(i = 0; i < 5; i++)
    printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    return 0;
}