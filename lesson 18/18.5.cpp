#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long choose(int n, int k){

	if(n==k){
	return 1;

	}else{
	return choose(n-1, k)*n/(n-k);
	}
}

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

	int n, k;
	printf("Please enter the value of n: ");
	scanf("%i", &n);

	printf("Please enter the value of k: ");
	scanf("%i", &k);

	printf("%li", choose(n, k));

	return 0;
}
