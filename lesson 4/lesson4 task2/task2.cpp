#include <stdio.h>

int main () {
	
	setvbuf (stdout, NULL, _IONBF, 0);
	
	int a,b,c,d;
	
	printf ("convert from octal to decimal\n");
	printf ("enter the octal value\n");
	scanf ("%o", &a);
	printf ("the decimal value is %d\n", a);
	
	printf ("convert from decimal to octal\n");
	printf ("enter the decimal value\n");
	scanf ("%d", &b);
	printf ("the octal value is %o\n", b);
	
	printf ("convert from hexadecimal to decimal\n");
	printf ("enter the hexadecimal value\n");
	scanf ("%x", &c);
	printf ("the decimal value is %d\n", c);
	
	printf ("convert from decimal to hexadecimal\n");
	printf ("enter the decimal value\n");
	scanf ("%d", &c);
	printf ("the hexadecimal value is %x\n", d);
	
	
	return 0;
}
