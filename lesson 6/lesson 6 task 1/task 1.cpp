#include <stdio.h>
int main () {
	
	float a, b;
	for (a=-50, b=0; a<=40; a+=10)
	{
		b=a*1.8+32;
		printf ("%10f is %10f in fahrenheit \n", a, b);
	}
	return 0;
}
