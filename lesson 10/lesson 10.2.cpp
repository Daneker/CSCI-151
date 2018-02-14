#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char i;
	do {
		i=getchar();
		if (i>=97) {
			i=i-32;
			printf("%c",i);

		} else if (i<97) {
			printf("%c",i);
		}
	}while(i!='\n');



	return 0;
}
