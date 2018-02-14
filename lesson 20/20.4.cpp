#include <stdio.h>
   void concat(char str1[], char str2[], char resultStr []) {
   	int i=0, j=0;
   	while(str1[i]!='\0'){
		resultStr[i]=str1[i];
		i++;
	}
	while(str2[j]!='\0'){
		resultStr[i]=str2[j];
		i++;
		j++;
	}
	resultStr[i]='\0';
    return;
}
   int main () {
   	char str1 [20],str2 [20],resultStr [20];
   	printf("str1: ");
   	scanf("%s", str1);
   	
   	printf("str2: ");
   	scanf("%s", str2);
   	
   	concat(str1, str2, resultStr);
   	
   	printf("resultStr:%s",resultStr);
   	
   	return 0;
   	
   }
