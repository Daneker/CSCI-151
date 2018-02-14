#include <stdio.h> 

int main () { 
setvbuf(stdout, NULL, _IONBF, 0); 

int decNum; 
printf ("Please enter an integer: "); 
scanf ("%i", &decNum); 

do { 
int oct = decNum % 8; 
decNum = decNum / 8; 
printf("oct: %i \n\n\n", oct); 


} while (decNum > 0); 

printf("Done."); 
return 0; 
} 
