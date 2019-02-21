#include <stdio.h>
#include <string.h>

int main() 
{
	FILE *f;
	char c[] = "this is your yoga instructor";
	char buffer[100];

	f = fopen("C://Users/Tusk/Desktop/file.txt", "w+");

	fwrite(c, strlen(c) + 1, 1, f);

	fseek(fp, 0, SEEK_SET);

	fread(buffer, strlen(c) + 1, 1, f);
	printf("%s\n", buffer);
	fclose(f);

	return(0);
}