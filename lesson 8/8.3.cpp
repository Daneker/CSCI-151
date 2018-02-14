#include <stdio.h> 

int main () { 
setvbuf(stdout, NULL, _IONBF, 0); 

int decNum; 
printf ("Please enter an integer: "); 
scanf ("%i", &decNum); 


do { 
int hexa = decNum % 16; 
decNum = decNum / 16; 
printf("hexa: %i \n\n\n", hexa); 



} while (decNum > 0); 

printf("Done."); 
return 0; 
}

