#include <stdio.h>
int main (void) {
	
	double x;
	printf("enter the value of length in meters \n", x);
	scanf ("%lf",&x);
	double centimeters, myriameters, inches, miles, furlongs;
	centimeters = x*100;
	myriameters=x*3.28;
	inches=x*39.3701;
    miles=x*0.000621371;
	furlongs=x*0.005;
	
	printf("the value of length in centimeters %f \n", centimeters);
	printf("the value of length in myriameters %f \n", myriameters);
	printf("the value of length in inches %f \n", inches);
	printf("the value of length in miles %f \n", miles);
	printf("the value of length in furlongs %f \n",furlongs);
	
	return 0;
}

