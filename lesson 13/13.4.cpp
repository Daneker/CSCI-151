#include <stdio.h> 
#include <stdlib.h> 
int main(void) { 
int R = 3, C = 3; 
int a[R][C]; 
int i, j, val = 1; 
/* set matrix elements */ 
for (i = 0; i < R; i++) { 
for (j = 0; j < C; j++) { 
a[i][j] = val; 
val++;}} 
printf("\n"); 

/* print matrix elements */ 
for (i = 0; i < R; i++) { 
for (j = 0; j < C; j++) { 
printf("%5d", a[i][j]);} 
printf("\n");} 
printf("\n"); 


int R2 = 3, C2 = 3; 
int b[R2][C2]; 
int val2=1; 
/* set matrix elements */ 
for (i = 0; i < R2; i++) { 
for (j = 0; j < C2; j++) { 
b[i][j] = val2; 
val2++; }} 
printf("\n"); 
/* print matrix elements */ 

for (i = 0; i < R2; i++) { 
for (j = 0; j < C2; j++) { 
printf("%5d", b[i][j]);} 
printf("\n");} 

printf("\n"); 

int R3 = 3, C3 = 3; 
int c[R3][C3]; 
int sum,k; 
/* set matrix elements */ 
for (i = 0; i < R3; i++) { 
for (j = 0; j < C3; j++) { 
sum=0; 
for (k=0;k<3;k++) 
sum=sum+a[i][k]*b[k][j]; 
c[i][j]=sum;}} 
/* print matrix elements */ 
for (i = 0; i < R3; i++) { 
for (j = 0; j < C3; j++) { 
printf("%5d", c[i][j]);} 
printf("\n");} 
return 0;}
