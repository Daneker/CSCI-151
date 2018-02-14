#include <stdio.h>
#include <stdlib.h>
int main (void) {
	FILE *values;
	FILE *story;
	FILE *output;
	
	values = fopen("values.txt", "r");
    story = fopen("story.txt", "r");
    output = fopen("output.txt", "w");
    
    if (values==NULL || story==NULL || output==NULL) {
    	printf ("Can't open files for reading.");
    	return 1;
	}
	printf ("Story can be read.\n");
	
	char word[64], c=getc(story);
	
	while (c!=EOF) {
		if (c!='$') {
			fprintf (output,"%c", c);
			printf ("%c", c);
		}
	    else if (c=='$') {
	    	fscanf (values,"%s", word);
	    	fprintf (output,"%s", word);
	    	printf ("%s", word);
		}
		c=getc(story);
	}
	
	fclose(values);
	fclose(story);
	fclose(output);
	
	return 0;
}
