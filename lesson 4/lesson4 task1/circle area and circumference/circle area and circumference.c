#include <stdio.h>
int main (void) {
	int r,PI,A,C;
	
	printf("enter the value of r and PI \n", r,PI);
	scanf("%i%i",&r,&PI);
	A=PI*r*r;
	C=2*PI*r;
	printf("Area of a circle=%i \nCircumference of a circle=%i", A,C);
	return 0;
}
