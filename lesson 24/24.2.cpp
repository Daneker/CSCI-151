#include<stdio.h>

void stringCopy(char *fromStr, char *toStr) { 

   while (*fromStr != '\0') { 
   *toStr = *fromStr; 
    *toStr++; 
    *fromStr++; 
    } 
   *toStr = '\0'; 
} 

bool areEqual(char *str1, char *str2) { 
   while (*str1 == *str2 && (*str1 != '\0' && *str2 != '\0')) { 
   str1++; 
   str2++; 
   } 
    if (*str1 == '\0' && *str2 == '\0') { 
    return 1; 
      }
	   else { 
    return 0; 
} 

} 

void reverse(char *fromStr, char *toStr) { 
   int l = 0; 
   while (fromStr[l] != '\0') { 
    l++; 
   } 
    l--; 
    
int i; 
for (i = 0; i <= l; i++) { 
   *(toStr + (l - i)) = *(fromStr + i); 
   } 

 } 

void concatenate(char *str1, char *str2, char *resultStr) { 
   while (*str1 != '\0') { 
   *resultStr = *str1; 
   resultStr++; 
   str1++; 
   } 
   while (*str2 != '\0') { 
   *resultStr = *str2; 
   resultStr++; 
   str2++; 
   } 
*resultStr='\0'; 
}
int main(void) {

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

	// Test code for areEqual
	printf("Test 2.1 result: %i\n", areEqual(word1, word2));
	printf("Test 2.2 result: %i\n", areEqual(word1, word3));
	printf("Test 2.3 result: %i\n", areEqual(word2, word4));
	printf("Test 2.4 result: %i\n", areEqual(word4, word2));

	// Test code for reverse
	reverse(word1, result);
	printf("Test 3.1 result: %s\n", result);
	reverse(word2, result);
	printf("Test 3.2 result: %s\n", result);
	reverse(word3, result);
	printf("Test 3.3 result: %s\n", result);

	// Test code for concatenate
	concatenate(word1, word2, result);
	printf("Test 4.1 result: %s\n", result);
	concatenate(word3, word4, result);
	printf("Test 4.2 result: %s\n", result);
	concatenate(word1, word1, result);
	printf("Test 4.3 result: %s\n", result);

	return 0;
}
 
