#include <stdio.h> 

int main () { 

int a; 
scanf("%i", &a); 

if (a>=95){ 
printf("A");} 
else if (a>=90){ 
printf("A-");} 
else if (a>=85){ 
printf("B+");} 
else if (a>=80){ 
printf("B");} 
else if (a>=75){ 
printf("B-");} 
else if (a>=70){ 
printf("C+");} 
else if (a>=65){ 
printf("C");} 
else if (a>=60){ 
printf("C-");} 
else if (a>=55){ 
printf("D+");} 
else if (a>=50){ 
printf("D");} 
else { 
printf("F");} 

return 0; 
}
