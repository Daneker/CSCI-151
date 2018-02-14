#include <stdio.h>
#include <stdlib.h>

double minValue(double arr[], int from, int to){

	int min;

	if(from==to){
		min=arr[from];

	}else {
	min = (arr[to]<minValue(arr, from, to-1))?arr[to]:minValue(arr, from, to-1);
}
	return min;
}

int main() {

	double arr[8]={-6, -8, -2, 8, -3, 7, -5, 0};

	printf("minimum value = %f \n", minValue(arr, 0, 6));
	printf("minimum value = %f \n", minValue(arr, 1, 5));
	printf("minimum value = %f \n", minValue(arr, 2, 6));

	return 0;
}
