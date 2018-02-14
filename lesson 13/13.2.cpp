#include <stdio.h>
#include <math.h>

int main ()
{
	int R = 3, C = 4;
	int a[R][C], b[C][R];

	int i, j, val = 10;

	for (i = 0; i < R; i++) {
	 for (j = 0; j < C; j++) {
	 a[i][j] = val;
	 val++;
	 }
	}
	for (i = 0; i < C; i++) {
		 for (j = 0; j < R; j++) {
		 b[i][j] = a[j][i]+25;
		 }
		}

	for (i = 0; i < C; i++) {
	 for (j = 0; j < R; j++) {
	 printf("%5d", b[i][j]);
	 }
	 printf("\n");
	}
	return 0;
}
