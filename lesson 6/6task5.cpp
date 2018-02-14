#include <stdio.h> 

int main (){ 
setvbuf(stdout, NULL, _IONBF, 0); 
int n,i; 
double x, m=1; 
printf("put the value of x:"); 
scanf ("%lf", &x); 
printf("put the value of n:"); 
scanf ("%i", &n); 

for (i=1;i<=n; i++) { 
m=m*x; 

} 
printf("%lf to the power %i is %f:", x,n,m); 
return 0; 
}
