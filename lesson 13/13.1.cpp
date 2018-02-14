#include<stdio.h>
#include<stdlib.h>
int main (void) {
	int x[13][13];
	int i,j;
	
	for (i=1;i<13;i++) {
		for (j=1;j<13;j++) {
			x[i][j]=i*j;
		}
	}
	
	for (i=1;i<13;i++) {
		for (j=1;j<13;j++) {
			printf("%5d", x[i][j]);
		}
		printf ("\n");
}
return 0;
}
