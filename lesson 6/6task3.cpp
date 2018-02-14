#include <stdio.h> 


int main(void) { 
int n,m; 

for(n=1,m=2;n<=16;n++,m=m*2) { 


printf("2 to the power of %i is %10i\n",n, m); 
} 
return 0; 
}
