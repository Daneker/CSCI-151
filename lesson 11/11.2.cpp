#include <stdio.h>
#include <stdlib.h>

int main (void) {
	FILE *values;
	FILE *story;
	
	values = fopen("values.txt", "r");
    story = fopen("story.txt", "r");
    
    if (values==NULL || story==NULL) {
    	printf ("Can't open files for reading.");
    	return 1;
	}
	printf ("Story can be read.\n");
	
	char word[64], ch=getc(story);
	
	do {
		if (ch!='$') {
			printf ("%c", ch);
		}
	    else if (ch=='$') {
	    	fscanf (values,"%s", word);
	    	printf ("%s", word);
		}
		ch=getc(story);
	} while (ch!=EOF);
	
	fclose(values);
	fclose(story);
	
	return 0;
}
