#include <stdio.h>

void stringCopy(char *fromStr, char *toStr) {
	int i=0, size;
	for (;i<size;i++) {
		fromStr=toStr;
	}
	while (fromStr[i]!= '\0') {
		fromStr[i] = toStr[i];
		i++;
	}
}
int main(void) {
     int size;
	char word1[] = "Hello";
	char word2[] = "Hi there";
	char word3[] = {'H', 'e', 'l', 'l', 'o', '\0', 'X'};
	char word4[] = "Hi";

	char result[50];

	// Test code for stringCopy
	stringCopy(word1, result);
	printf("Test 1.1 result: %s\n", result);
	stringCopy(word2, result);
	printf("Test 1.2 result: %s\n", result);
	stringCopy(word3, result);
	printf("Test 1.3 result: %s\n", result);
return 0;
}
