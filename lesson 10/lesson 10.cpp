#include <stdio.h>
int main (void) {

	setvbuf (stdout, NULL, _IONBF, 0);

	char text[90];
    char ch='a';
	int i, count=0;

	printf ("Enter some text:\n");
	scanf ("%s", text);

	for (i=0; text[i]!=0; i++) {

		if (text[i] == ch ){
			++count;

		}

	}
	 printf ("There are %i letters 'a' in the text.",count);

	return 0;
}
