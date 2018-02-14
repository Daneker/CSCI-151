#include<stdio.h>
int main (void) {
	
	int l,w,h,surfaceArea;
	
	printf("enter the length,width,height of the box\n",l,w,h);
	scanf ("%i%i%i",&l,&w,&h);
	surfaceArea=2*(l*w+w*h+l*h);
	printf ("surfaceArea of the box=%i",surfaceArea);
	return 0;
}

