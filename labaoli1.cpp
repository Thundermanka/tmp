#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* найти разность наибольшего и наименьшего в области*/

int oblast(int[10][10], int, int , int , int);

int main() {
	int a[10][10];
	int N, M;
	do {
		printf("vvedite N and M cherez probel\n");
		scanf("%d %d", &N, &M);
	} while (N * M > 100);
	printf("vvedite elementi massiva\n");
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < M; y++) {
			scanf("%d", &a[x][y]);
		}
	}
	printf("-------------------\n");
	int f = 1;
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < M; y++) {
			int razn = oblast(a, N, M, x,y);
			printf("|%d | %2d | %2d | %3d |\n", f, x, y, razn);
			f++;
			printf("-------------------\n");
		}
	}
}

int oblast(int a[10][10], int N, int M, int i, int j) {
	int B[100], cx1 = 0 , cx2 = 0, cx3 = 0;
	int min = 9999999;
	int max = -999999;
	int razn = 0;
	int c = 0;
	if (i == 0) {
		for (int s = j; s < M; s++) {
			if (cx2 < 3) {
				B[c] = a[i][s];
				c++;
				cx2++;
			}
			else break;
		}

		for (int s = j+1; s < M; s++) {
			if (cx3 < 2) {
				B[c] = a[i + 1][s];
				c++;
				cx3++;
			}
			else break;
		}

	}
	if (i != 0 and i != N-1) {
		for (int s = j+1; s < M; s++) {
			if (cx1 < 2) {
				B[c] = a[i - 1][s];
				c++;
				cx1++;
			}
			else break;
		}
		for (int s = j; s < M; s++) {
			if (cx2 < 3) {
				B[c] = a[i][s];
				c++;
				cx2++;
			}
			else break;
		}
		for (int s = j+1; s < M; s++) {
			if (cx3 < 2) {
				B[c] = a[i + 1][s];
				c++;
				cx3++;
			}
			else break;
		}
		}
	if (i == N-1) {
		for (int s = j+1; s < M; s++) {
			if (cx1 < 2) {
				B[c] = a[i - 1][s];
				c++;
				cx1++;
			}
			else break;
		}
		for (int s = j; s < M; s++) {
			if (cx2 < 3) {
				B[c] = a[i][s];
				c++;
				cx2++;
			}
			else break;
		}
	}
	for (int d = 0; d < c; d++) {
		if(B[d] < min) min = B[d];
		if (B[d] > max) max = B[d];
	}
	razn = max - min;
	return razn;
}
