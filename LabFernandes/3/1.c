/*
Elaborar uma função para efetuar o produto de duas matrizes reais inicializados pelo teclado.
Protótipo: void produto_matrizes(double a[N][K], double b[K][M], double c[N][M], int n, int m, int k).
*/

#include <stdio.h>
#include <stdlib.h>
#define N 2
#define K 2
#define M 3 

void produto_matrizes(double[][K], double[][M], double[][M], int, int, int);

int main() {
	double a[N][K], b[K][M], c[N][M];
	int i , j;

	produto_matrizes(a, b, c, N, M, K);
/*
	for(i = 0; i < N; i++) {
		for(j = 0; j < M; j++) {
			printf("%.2f\n", c[i][j]);
		}
		printf("\n");
	}
*/
	system("PAUSE");

	return 0;
}

void produto_matrizes(double a[][K], double b[][M], double c[][M], int n, int m, int k) {
	int i, j;

	printf("Insira os valores da primeira matriz (%d linhas, %d colulas)\n", n, k);
	for(i = 0; i < n; i++)
		for(j = 0; j < k; j++) {
			printf("a[%d][%d] = ",i,j);
			scanf("%lf", &a[i][j]);
		}

	printf("Insira os valores da segunda matriz (%d linhas, %d colulas)\n", k, m);
	for(i = 0; i < k; i++)
		for(j = 0; j < m; j++) {
			printf("b[%d][%d] = ",i,j);
			scanf("%lf", &b[i][j]);
		}


	printf("\n\n");
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j];
			printf("c[%d][%d] = %.2f  ", i, j, c[i][j]);
		}
		printf("\n");
	}
}


