#include <stdio.h>
int main (void) {
	
	double lab1,lab2,lab3,lab4; // out of 50, 5%
	double quiz1,quiz2; // out of 20, 10%
	double mid; // out of 20, 25%
	double final; // out of 30, 35%
	
    printf("enter the value lab1,lab2,lab3,lab4,quiz1,quiz2,mid,final \n",lab1,lab2,lab3,lab4,quiz1,quiz2,mid,final);
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &lab1,&lab2,&lab3,&lab4,&quiz1,&quiz2,&mid,&final);
    
	double avgrade, labtotal, quiztotal, gpatotal;
	labtotal = ((lab1*5/50)+(lab2*5/50)+(lab3*5/50)+(lab4*5/50));
	quiztotal = ((quiz1*10/20)+(quiz2*10/20));
	avgrade = labtotal+quiztotal+(mid*25/20)+(final*35/30);
	gpatotal = avgrade*4.00/100;
	
	printf("labtotal is %f\n",labtotal);
	printf("quiztotal is %f\n", quiztotal);
	printf("the average grade in percent is %f \n", avgrade);
	printf("the total GPA is %f \n", gpatotal);
	
	return 0;
}
 
