#include <stdio.h>
#include <stdlib.h>

int main()
{
	char num[10];
	FILE *f;
	f = fopen("C://Users/Tusk/Desktop/program.txt","w");

	if(f == NULL)
	{
		printf("\nError!\n");
		exit(1);
	}

	printf("\nEnter the word: \n");
	scanf("%s", num);

	fprintf(f, "%s\n", num);
	fclose(f);

	return 0;
}