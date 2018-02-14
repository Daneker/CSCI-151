#include<stdio.h>
int main (void) {
	
	int l=3;
	int w=4;
	int h=5;
	int surfaceArea=2*(l*w+w*h+l*h);
	
	printf("l=3,w=4,h=5, \n",l,w,h);
	printf("surfaceArea of the box : %i", surfaceArea);
	getch();
}
