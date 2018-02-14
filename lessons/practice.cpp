#include<stdio.h>

void printArray(int size, double arr[]) {
	int i;
	for (i=1; i<size; i++) {
		printf ("%f \n", arr[i]);
	}
}
double myFun (double x) {
	double y=x*x;
	y++;
	return y;
}

int main () {
	double a[5];
	a[0]=2.5;
	int i;
	for (i=1;i<5;i++) {
		a[i]=myFun(a[i-1]);
	}
	printArray(5,a);
	
	return 0;
}
