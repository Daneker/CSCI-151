#include <stdio.h> 
int main() { 
int a, b = 2; 
scanf("%i", &a); 

while (b <= a-1) { 

if (a % b == 0) { 
printf ("%i ", b); 
} 
b++; 
} 
return 0; 
}
