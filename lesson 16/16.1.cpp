#include <stdio.h>
#include <math.h>
void factorial (int x) {
int result = 1;
if ( x==0 || x == 1){
result = 1;
} else {
int i;
for(i = 0; i < x; i++) {
result *= i +1;
}
}
}
void expApprox(double x, int n) {
double result = 0;

int i;
for (i=0; i<n; i++) {
result += pow(x,i)/factorial(i);
printf("Result is %lf", result);
}

}
int main () {
factorial (5);
expApprox(2.5, 5);

return 0;
}
