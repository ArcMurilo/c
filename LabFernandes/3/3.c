/*
a). Elaborar em C um programa para trocar de 
                      posição a linha 1 com a 3
b)                     b). Elaborar programa para calcular a soma total de cada linha. 
*/	
	
#include <stdio.h>

void trocarLinhas(int matriz[][4], int linha1, int linha2) {
	int i, temp;

	for(i = 0; i < 4; i++){
		temp = matriz[linha1][i];
		matriz[linha1][i] = matriz[linha2][i];
		matriz[linha2][i] = temp; 
	}
}

void somaLinha(int vetor[][4]) {
	int i, j, soma = 0;

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			soma += vetor[i][j];
		}

		printf("Soma da linha %d = %d\n", i, soma);
		soma = 0;
	}
}

int main() {
	int i, j, matriz[4][4];

	printf("Insira os valores da matriz (4 linhas, 4 colulas)\n");
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++) {
			printf("matriz[%d][%d] = ",i,j);
			scanf("%d", &matriz[i][j]);
		}

	printf("\nMatriz digitada:\n");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("matriz[%d][%d] = %d  ", i, j, matriz[i][j]);
		}
		printf("\n");
	}

	trocarLinhas(matriz, 0, 2);

	printf("\nMatriz apos trocar linha 1 por linha 3:\n");

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("matriz[%d][%d] = %d  ", i, j, matriz[i][j]);
		}
		printf("\n");
	}

	somaLinha(matriz);

	return 0;
}




