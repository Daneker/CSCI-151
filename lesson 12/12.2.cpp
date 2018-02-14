#include<stdio.h>
#include<stdlib.h>
int main (void){
	int arr[20];
	int i;
	
	for(i=0;i<20;i++) {
		arr[i]=rand()%51+50;
	}
		for(i=0;i<20;i++) {
			printf("%i\n", arr[i]);
		}
		
		return 0;
}
