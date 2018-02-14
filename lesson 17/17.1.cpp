#include <stdio.h>
void printArray (double arr []){
 int k,a;
 double min;
 min=arr[0];
 for (k=0;k<5;k++){
  if (arr[k]<min){
   min=arr[k];
   a=k+1;}
  }
 printf("Min. value:%.2f, index: %i\n", min,a);
 }
int main (){
 double vals[]={11.50, 23.72, 5.61, 93.10,100.02};
 printArray(vals);
 return 0;
}
