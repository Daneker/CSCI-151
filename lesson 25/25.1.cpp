#include <stdio.h>
#include <stdlib.h>

char* stringCopy(char *fromStr)
{
	char *to = (char *) malloc(sizeof(char));
	int cr = 0;
	while(*fromStr!='\0')
	{
		*(to+cr) = *fromStr;
		fromStr++;
		cr++;
	}
	*(to+cr)='\0';
	return to;
}
int main(void) {

	char word1[] = "Hello";
	char *res = stringCopy(word1);
	while(*res!='\0')
	{
		printf("%c", *res);
		res++;
	}
	return 0;
}

