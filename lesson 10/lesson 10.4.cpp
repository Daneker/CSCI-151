#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int i=0;
	char ch;
	int m=0;
	do {
	ch=getchar();

		if (ch==32||ch==10) {

            printf("%i\n",i);
            if (m<i) {
			m=i;
            i=0;
		        }
		}
		 else {
		    i++;
		   	}


	} while(ch !='\n');
	printf("The max length is %i\n",m);
	printf("Done.");
	return 0;
}
