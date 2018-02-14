#include <stdio.h>
#include <stdlib.h>

int main() {

 FILE *file;
 file = fopen("datafile.txt", "r");
 if (file == NULL) {
 printf("Problem opening file.");
 return 1;
 }

 printf("File opened successfully.");

 char num1[20];
 char num2[20];
  do{
	 fscanf(file, "%s %s", num1, num2);
 }while(!feof(file));
 fclose(file);
 
    int i=atoi(num1);
    int j=atoi(num2);
    int sum=i+j;

	 printf("\nFirst number: %i\nSecond number:%i\nThe sum is %i", i, j, sum);


    return 0;
}


