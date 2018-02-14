#include <stdio.h> 

typedef struct { 
int r, g, b; 
} Color; 

typedef struct { 
int x, y; 
} Coords; 

typedef struct { 
Coords upperleftcorner; 
int sidelength; 
Color outlinecolor; 
Color fillcolor; 
} Square; 

typedef struct { 
Coords upperleftcorner1; 
int sidelength1; 
int sidelength2; 
Color outlinecolor1; 
Color fillcolor1; 
} Rectangle; 

int main() { 

Square square; 
square.upperleftcorner.x = 5; 
square.upperleftcorner.y = 7; 

square.sidelength = 4; 

Color white = { 20, 20, 20 }; 
Color red = { 20, 0, 0 }; 
Color black = { 0, 0, 0 }; 

square.outlinecolor = black; 
square.fillcolor = red; 

Rectangle rectangle; 
rectangle.upperleftcorner1.x = 5; 
rectangle.upperleftcorner1.y = 7; 

rectangle.sidelength1 = 3; 
rectangle.sidelength2 = 4; 
rectangle.outlinecolor1 = white; 
rectangle.fillcolor1 = red; 
return 0; 
} 
