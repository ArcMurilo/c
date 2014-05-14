/*
Dado um valor inteiro lido via teclado, descubra e
informe o valor do digito menos significativo.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;

	scanf("%d", &a);

	// o digito menos significativo sempre é igual ao resto da
	// divisão do número pela base do mesmo, nesse caso 10
	printf("%d\n", (a % 10));

	system("PAUSE");
	return 0;
}
