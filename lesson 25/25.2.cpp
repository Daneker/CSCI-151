#include <stdio.h> 
#include <stdlib.h> 

typedef struct { 
int rain; 
double avgTemp; 
double avgWind; 
} Weather; 

double avgAvgWind(Weather *ptr) { 
double sum = 0; 
int i = 0; 
for (; i < 12; i++) { 
sum += (ptr + i)->avgWind; 
} 
return sum/12; 
} 

int totalRainfall(Weather *ptr) { 
int sum = 0; 
int i = 0; 
for (; i < 12; i++) { 
sum += (ptr + i)->rain; 
} 
return sum; 

} 
double lowestTemp(Weather *ptr) { 
double min=ptr->avgTemp; 
int i = 0; 
for (; i < 11; i++) { 
if (((ptr + i)->avgTemp) < min) { 
min = (ptr + i)->avgTemp; 
} 
} 
return min; 
} 

void weatherPrint(Weather *ptr) { 
int i; 
printf("Month|Rain(cm)|Avg.Temp(C)|Avg.Wind(m/s)\n"); 
for (i = 1; i <= 12; i++) { 
printf("%4i | %5i | %9g | %10g \n", i, ptr->rain, ptr->avgTemp, 
ptr->avgWind); 
ptr++; 
} 
} 
int main(void) { 

Weather *ptr = malloc(12 * sizeof(Weather)); 

if (ptr == NULL) { 
return 1; 
} 
FILE *infile; 
infile = fopen("weather.txt", "r"); 
if (infile == NULL) { 
printf("Cannot open file"); 
return 1; 
} 
int i = 0; 
while (!feof(infile)) { 
fscanf(infile, "%i %lf %lf", &(ptr + i)->rain, &(ptr + i)->avgTemp, 
&(ptr + i)->avgWind); 
i++; 
} 
weatherPrint(ptr); 
double min=lowestTemp(ptr); 
printf("Total rainfall: %i Lowest average temp:%g Average of avg.wind %g", totalRainfall(ptr), 
lowestTemp(ptr), avgAvgWind(ptr)); 

fclose(infile); 
}

