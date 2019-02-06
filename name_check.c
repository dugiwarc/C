#include <stdio.h>
#include <string.h>


int main()
{
char * name = "George";

char input[10];

scanf("%s", input);

if(strncmp(name, input, 5) == 0)
{
    printf("Hello, George\n");
} 
else
{
    printf("You are not George.Go wawa\n");
}

return 0;
}