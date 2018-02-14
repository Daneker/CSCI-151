#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int i=0;
	char ch;
	do {
	ch=getchar();

		if (ch==32||ch==10) {

            printf("%i\n",i);
            i=0;
		}
		 else {
		    i++;
		           		}


	} while(ch !='\n');
    printf ("Done.\n");
	return 0;
}
