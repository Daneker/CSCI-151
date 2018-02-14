#include <stdio.h>

typedef struct {
	int r, g, b;
} Color;

typedef struct {
	int x, y;
} Coords;

typedef struct {
	Color color;
	Coords point[5];
} Pentagon;

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	FILE *file;
	file = fopen("structure.txt", "r");
    Color color;
	Pentagon pentagon;


	int i;
	fscanf(file, "%i %i %i", &color.r, &color.g, &color.b);
    printf("%i %i %i\n", color.r, color.g, color.b); 
	for(i=0; i<5; i++) {

		fscanf(file, " %i %i", &pentagon.point[i].x, &pentagon.point[i].y);
        printf("%i %i\n", pentagon.point[i].x, pentagon.point[i].y); 
}
	return 0;
}
