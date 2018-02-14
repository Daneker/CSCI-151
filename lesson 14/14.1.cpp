#include <stdio.h>

typedef struct {
	int hours;
	int minutes;
	int advMins;
}time;

int main(void) {

	time now = {8, 57, 8 };


	printf ("The time is %i hours, %i minutes.\n", now.hours, now.minutes);

	if (now.minutes+now.advMins<60){
		now.minutes=now.minutes+now.advMins;

	} else if (now.minutes+now.advMins >= 60){

		now.hours= now.hours+1;
		now.minutes= (now.minutes+now.advMins)-60;
	}

	printf ("Error. Time is %i hours, %i minutes.\n", now.hours, now.minutes);



	return 0;
}
