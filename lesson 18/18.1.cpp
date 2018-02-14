#include <stdio.h>


double power(double x, int n) {

	double k;

	if(n==0){
		return 1.0;
	}else if(n%2==0){
		k=power(x, n/2);
		return k*k;
	}else if(n<0){
		return 1/power(x, -n);
	}else{
		return power(x, n-1)*x;
	}
}

int main() {
	double v;
	int j;
	for(j=-6; j<6; j++){
		for(v=1.0; v<=5.0; v=v+0.5) {
			printf("%.2f^%i=%.2f \n", v, j, power(v, j));
		}
	}
	return 0;
}
