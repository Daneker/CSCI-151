#include <stdio.h>

typedef struct {
	int ID;
	char gender;
	double Lab1;
	double Lab2;
	double Lab3;
	double Lab4;
	double QuizAvrg;
	double exam;
	double finalGrade;
}student;

int main (void) {

	setvbuf (stdout, NULL, _IONBF, 0);

	student csci;

	printf ("Enter your Student ID: ");
	scanf ("%i", &csci.ID);

	char ch;
	printf ("Gender (M/F): ");
	scanf (" %c", &ch);

	printf ("Your Lab1 grade: ");
	scanf ("%lf", &csci.Lab1);

	printf ("Your Lab2 grade: ");
	scanf ("%lf", &csci.Lab2);

	printf ("Your Lab3 grade: ");
	scanf ("%lf", &csci.Lab3);
	
	printf ("Your Lab4 grade: ");
	scanf ("%lf", &csci.Lab4);

	printf ("Your quiz average grade: ");
	scanf ("%lf", &csci.QuizAvrg);

	printf ("Your final exam grade: ");
	scanf ("%lf", &csci.exam);

		csci.finalGrade = csci.Lab1*0.05 + csci.Lab2*0.05 + csci.Lab3*0.05 + csci.Lab4*0.05 + csci.QuizAvrg*0.5 + csci.exam*0.3;



	printf ("Student ID: %i \nGender: %c \nFinal grade: %f",csci.ID, ch, csci.finalGrade);




	return 0;
}
