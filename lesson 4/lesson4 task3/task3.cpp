#include <stdio.h>

int main () {
	
	setvbuf (stdout, NULL, _IONBF, 0);
	
	int a; // the maximum int value is 2147483647
	printf("enter the integer value\n");
	scanf("%i", &a);
	printf("the integer value is %i\n", a);
	
	return 0;
}
