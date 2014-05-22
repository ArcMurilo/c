/*
Escreva programa que leia as notas de 10 alunos via teclado, 
armazene as notas em um vetor e forneça relatório com uma 
lista das notas ordenadas, e mostre a maior nota, a menor 
nota e a média. Use o método de ordenação Bolha (Bubble Sort)
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

float media(int[]);
void bubbleSort(int[]);


int main() {
	int listaNotas[TAM], i;

	printf("INSIRA AS NOTAS DOS 10 ALUNOS\n\n");

	for (i = 0 ; i < TAM; i++) {
		scanf("%d", &listaNotas[i]);
	}

	bubbleSort(listaNotas);

	printf("LISTA ORDENADA: \n");

	for (i = 0 ; i < TAM; i++) {
		printf("%d ", listaNotas[i]);
	}

	printf("\n\nMedia das notas = %.2f\n", media(listaNotas));

	printf("Menor nota = %d\n", listaNotas[0]);
	printf("Maior nota = %d\n", listaNotas[TAM-1]);

	return 0;
}

float media(int vetor[]) {
	int i;
	float soma = 0.0;

	for (i = 0; i < TAM; ++i) {
		soma += vetor[i];
	}

	return (soma / i);
}

void bubbleSort(int vetor[]) {
	int i, j, temp;

	for(i = 0 ; i < (TAM - 1); i++)
		for (j = i + 1; j < TAM; j++) {
			if (vetor[j] < vetor[i]) {
				temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
}