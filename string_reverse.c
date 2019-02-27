#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char * str)
{
    int l, i;
    char *begin_ptr, *end_ptr, ch;

    l = strlen(str);

    begin_ptr = str;
    end_ptr = str;

    for(i = 0; i < l - 1; i++)
        end_ptr++;
    
    for(i = 0; i < l/2; i++)
    {
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;

        begin_ptr++;
        end_ptr--;
    }

}

int main()
{
    int n;
    printf("Enter number of characters:\n");
    scanf("%d", &n);
    char *str = (char *) malloc(n*sizeof(char));
    if(!str)
    {
        exit(-1);
    }
    else
    {
        printf("memorry succesfully allocated;");
    }
    printf("enter word:\n");
    scanf("%s", str);
    
    reverseString(str);
    printf("Reverse of the string: %s\n", str);
    free(str);

    return 0;
}