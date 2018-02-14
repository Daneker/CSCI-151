#include <stdio.h> 
#include <math.h> 


int main(void) { 
setvbuf(stdout, NULL, _IONBF, 0); 
double x; 
printf("Give the value of x:"); 
scanf("%lf",&x); 
printf("sin(%f) is equal to %f",x,x-pow(x,3)/6+pow(x,5)/120); 

return 0; 
}
