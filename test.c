#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 30

int str_counter(const char *p)
{
	int c = 0;
	while(*p)
	{	
		++p;
		c++;
	}
	printf("%d characters", c);

	return c;
}

int main(void)
{
	char *p = (char*) calloc(SIZE, sizeof(char));

	if(!p)
	{
		exit(0);
	}
	else 
	{
		printf("Memory was allocated succesfully\n");
	}

	printf("Enter a string: \n");
	gets(p);

	str_counter(p);
	free(p);
	
	return 0;
}