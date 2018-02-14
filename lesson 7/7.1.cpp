#include<stdio.h>
 
int main (void) 
{
    int i=1,f1=-1,f2=1, nextTerm; 
    
     
    while (i<=20) {
    	
        nextTerm=f1+f2;
        f1=f2;
        f2=nextTerm;
        i++;
        printf("  \n %d", nextTerm);
    }
    
    return 0;
}
