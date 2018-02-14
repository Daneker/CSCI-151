#include <stdio.h> 
#include <math.h> 
int main() { 

setvbuf(stdout, NULL, _IONBF, 0); 

int n, y; 

do { 
printf("Please enter an integer:"); 
scanf("%i", &n); 
printf("The number squared is: %d\n", y = pow(n, 2)); 
} while (n > 0); 

printf("Done.\n"); 
return 0; 
}

