#include<stdio.h>
  void stringCopy(char fromStr[], char toStr[]) {
  	int i=0;
  	while (fromStr[i] != '\0') {
  		toStr[i]=fromStr[i];
  		 i++;
	  }
	 toStr[i]='\0';
  }
  
  int main () {
  	setvbuf(stdout, NULL, _IONBF, 0);
	char fromStr[20]={'h','e','l','l','o','\0'};
	char toStr[20];

	 printf("string is %s: \n", fromStr);
	 

    stringCopy(fromStr, toStr);

    printf("%s", toStr);
	return 0;
}

