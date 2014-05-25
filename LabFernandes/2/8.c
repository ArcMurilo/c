#include <stdio.h>
#include <stdlib.h>

int isNumeroPrimo(int);

int main() {
	unsigned int n, boolean;

	printf("VERIFICA SE O NUMERO DIGITADO E PRIMO\n\n");

	scanf("%d", &n);

	boolean = isNumeroPrimo(n);

	if (boolean)
		printf("Numero Primo\n");
	else 
		printf("Nao e Numero Primo\n");

	return 0;
}

int isNumeroPrimo(int n) {
	int i;
	if (n == 2) 
		return 1;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}