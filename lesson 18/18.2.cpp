#include <stdio.h>
#include <stdlib.h>

int addSubarray(int y[], int from, int to){

	if(from==to){
		return y[to];
	}else{
		return addSubarray(y,from+1, to) + y[from];
	}
}

int main() {

	int arr[8]={4, 3, -2, 7, 2, 5, -1, 0};

		printf("sum = %i \n", addSubarray(arr, 1, 7));
		printf("sum = %i \n", addSubarray(arr, 1, 4));
		printf("sum = %i \n", addSubarray(arr, 2, 6));

	return 0;
}
