#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	printf("The size of an int is %d\n", sizeof(int));
	printf("Minimum size of a float is %E\n", FLT_MIN);
	printf("Maximum size of a float is %E\n", FLT_MAX);
	printf("Precision value %d\n", FLT_DIG );

	printf("Press Any Key to Continue\n");  
	getchar();  
	return 0;
}