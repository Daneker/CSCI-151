#include <stdio.h> 


int main(void) { 
int k,j,i,l; 

for (k=1; k<=5; k++) { 
for (j=5;j>=k;j--) { 
printf("+"); 
} 

for (i=1;i<k;i++) { 
printf("*"); 
} 
printf("\n"); 
} 
for (l=1;l<=5;l++) { 
printf("*"); 
} 
return 0; 
}
