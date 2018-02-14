#include <stdio.h>
#include <stdlib.h>

void printBinary(int n){

	int x=n%2;
	if(n==1 || n==0){
	printf("%d", n);

	}else{
	printBinary(n/2);
    printf("%d", x);

}
}
int main(void) {

setvbuf(stdout, NULL, _IONBF, 0);

int n;
printf("Please, enter an integer: ");
scanf("%i", &n);

printBinary(n);

return 0;
}
