#include <stdio.h> 
#include <stdlib.h> 
int main(void) { 
int R = 5, C = 5; 
int a[R][C]; 
int i, j; 

    for (i = 1; i < R; i++) { 
       for (j = 1; j < C; j++) { 
        a[i][j] = i*j;}} 

    for (i = 1; i < R; i++) { 
        for (j = 1; j < C; j++) { 
printf("%5d", a[i][j]);} 
printf("\n");} 
int max; 
max=a[1][1]; 
    for (i=2;i<5;i++) { 
       for (j=2;j<5;j++) { 
    if (max<a[i][j]) { 
max=a[i][j]; }}} 
printf("\nThe max value is %i\n", max); 
return 0; 
}
