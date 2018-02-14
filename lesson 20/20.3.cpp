#include<stdio.h>
  void reverse(char fromStr[], char toStr[]) {
  	int i=0, j=0;
  	while (fromStr[i]!='\0'){
  		i++;
	  }
	  int length=i;
	  i=0;
	  j=length-1;
	  while (fromStr[i] != '\0') {

		toStr[j] = fromStr[i];
		i++;
		j--;
	}
	toStr[i]='\0';
}
  int main () {
  	setvbuf(stdout, NULL, _IONBF, 0);

  	char fromStr[20];
  	char toStr [20];
  	printf ("enter a word: ");
  	scanf("%s", fromStr);
  	
  	reverse (fromStr, toStr);
  	printf ("reverse string: %s", toStr);
  	
  	return 0;
  	
  }
