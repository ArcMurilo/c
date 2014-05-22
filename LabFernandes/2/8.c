/*
Escreva uma função receba um inteiro positivo e retorne 0 (zero) se o número for primo ou 1 (um) se ele não for primo.
*/

#include <stdio.h>
#include <stdlib.h>

int isNumeroPrimo(int);

int main() {
	unsigned int n, boolean;

	printf("VERIFICA SE O NUMERO DIGITADO E PRIMO\n\n");

	scanf("%d", &n);

	boolean = isNumeroPrimo(n);

	if (boolean)
		printf("Nao e Numero Primo\n");
	else 
		printf("Numero Primo\n");

	return 0;
}

int isNumeroPrimo(int n) {
	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return 1;
		}
	}
	return 0;
}