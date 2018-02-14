#include <stdio.h>

int main (void) {
	FILE *copy, *here;
	copy= fopen ("copy.txt", "r");
	here=fopen("here.txt", "w");
	int c;
	
	if (copy== NULL || here==NULL) {
		printf ("can't open file for reading.\n");
		return 1;
	}
	
	while ((c = getc (copy)) != EOF)
	putc (c, here);
	
	fclose (copy);
	fclose (here);
	printf ("File has been copied.\n");
	
	return 0;
}
