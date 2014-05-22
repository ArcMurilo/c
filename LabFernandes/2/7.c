/*
Calcule o fatorial de um dado número inteiro, N, inserido pelo usuário. 
Seu programa deve fornecer como saída uma tabela com duas colunas, n e 
o seu fatorial, com n variando de 1 até N. Verifique para a sua máquina 
qual o maior número inteiro que pode representado. Informe qual o máximo 
valor de N inteiro (NMAX) cujo fatorial pode ser calculado via int. 
Como se pode obter fatorial para valores maiores que NMAX? 
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
	int n, resultado = 1, i = 1;

	printf("Maior valor suportado para uma variavel tipo inteiro = %ld\n\n", INT_MAX);


	//no momento em que o resultado do fatorial for negativo, indica o estouro do tipo da variavel

	while (resultado * i > 0) {
		resultado *= i;
		i++; 
	}

	printf("O limite para o calculo de fatorial com variavel \ntipo int e o fatorial de %d = %d\n\n", i-1, resultado);

	resultado = 1;

	printf("Calcular fatorial de 1 a ");
	scanf("%d", &n);
	printf("\n");

	for (i = 1; i <= n; ++i) {
		resultado *= i;
		printf("%02d = %13d\n", i, resultado);
	}

	printf("\n");

	return 0;
}