#include <stdio.h>
#include <math.h>

int main () {
	setvbuf (stdout, NULL, _IONBF, 0);
	
	int a, b, c;
	float x1, x2;
	
	printf ("enter a \n");
	scanf("%i", &a);
	printf ("enter b \n");
	scanf("%i", &b);
	printf ("enter c \n");
	scanf("%i", &c);
	
	x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
	x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
	
	printf("the first root of function is %f and the second is %f", x1, x2);
	
	return 0;
	
}
