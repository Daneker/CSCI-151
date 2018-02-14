#include <stdio.h>

int main (void) {
	
	int l,w,h,v;
	
	printf ("enter the length,width,height of the box", l,w,h);
	scanf ("%i%i%i",&l,&w,&h);
	v=l*w*h;
	printf ("volume of a box=%i",v);
	getch ();
}
