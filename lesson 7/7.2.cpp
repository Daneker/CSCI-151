#include <stdio.h> 

int main(void) { 

setvbuf(stdout, NULL, _IONBF, 0); 

int n, i=2, a=0; 

printf("Enter any integer: \n "); 

scanf("%i", &n); 

while(i<=n) { 
i=i*2; 
a++; 
} 
printf("%i>=2^%i", n, a); 
return 0; 
}
