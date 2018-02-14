#include<stdio.h>
#include<stdlib.h>
int main (void){
	int arr[20];
	int i,max,min,next;
	
	for(i=0;i<20;i++) {
		arr[i]=rand()%51+50;
	}
		for(i=0;i<20;i++) {
			printf("%i\n", arr[i]);
		}
	max=arr[0];
	for(i=1;i<20;i++) {
		if (max<arr[i]) {
			max=arr[i];
		}
	}
    printf("max value is %i\n", max);
    
    min=arr[0];
	for(i=1;i<20;i++) {
		if (min>arr[i]) {
			min=arr[i];
		}
	}
    printf("min value is %i\n", min);
    
    next=arr[0];
    for(i=0;i<19;i++) {
    	next+=arr[i+1];
	}
		printf("average value is %i", next/20);
		return 0;
}
