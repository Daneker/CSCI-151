#include<stdio.h>
int main (void) {
	int factorial[10], i;
	for (i=0; i<10; i++) {



		if (i==0) {
			factorial[i]=1;
		}
		else {
			factorial[i]=factorial[i-1]*i;
		}

		printf ("factorial[%i]=%i\n", i, factorial[i]);

	}



	return 0;
}

