#include <stdio.h>

int main (void) {
	int h, r,l,PI, surfacearea,circularbasearea, volume;
	
	printf("enter the value of height, radius, length and PI\n");
	scanf ("%i%i%i%i", &h,&r,&l,&PI);

	surfacearea=3.14*r*l+3.14*r*r;
	circularbasearea=3.14*r*r;
	volume=0.33*3.14*r*h*h;
	
	printf("The surfacearea of cone is %i \n", surfacearea);
	printf("The circularbasearea of cone is %i \n", circularbasearea);
	printf("The volume of cone is %i \n", volume);

	return 0;
}

