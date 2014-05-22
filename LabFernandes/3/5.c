/*
Escreva função recursiva que forneça a soma dos números inteiros positivos entre 1 e N (lido via teclado).
*/

#include <stdio.h>
#include <stdlib.h>

int somaRecursiva(int);

int main() {
	int n;

	scanf("%d", &n);

	printf("Soma = %d\n\n", somaRecursiva(n));

	return 0;
}

int somaRecursiva(int n) {
	if (n == 1)
		return 1;
	else 
		return (n + somaRecursiva(n-1));
}