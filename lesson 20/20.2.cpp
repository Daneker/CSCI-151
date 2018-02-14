#include<stdio.h>
  bool areEqual(char str1[], char str2[]) {
  	int i=0;
  	while (str1 [i]!='\0'&& str2 [i]!='\0') {
  		if (str1[i]==str2[i]) {
           i++;
  		} else {
  			return 0;	
		  } 
	}
	return str1[i]==str2[i];
}
  int main (){
  	setvbuf(stdout, NULL, _IONBF, 0);
  	char str1[20];
  	char str2[20];
  	
  	printf ("Enter str1: ");
  	scanf ("%s", str1);
  	
  	printf ("Enter str2: ");
  	scanf ("%s", str2);
  	
  	printf ("%d", areEqual (str1,str2));
  	return 0;
  	
  }
