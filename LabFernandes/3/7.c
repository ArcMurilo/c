/*
Escreva um programa que leia dois números inteiros, em qualquer ordem, 
e faça a somatória de todos números múltiplos de 3 entre os dois (incluindo os extremos). 
*/

#include <stdio.h>
#define mult 3

int main() {
	int num1, num2, i;
	int soma = 0;

	printf("Calcular soma multiplos de tres na faixa informada.\n");
	printf("Insira os valor inicial e valor final da faixa: ");

	scanf("%d %d", &num1, &num2);

	// ordena os numeros, aproveita a variavel soma (ja criada, economizando espaco)
	if (num1 > num2) {
		i = num2;
	}
	else {
		i = num1;
	}

	if(num1 % 3 == 1) {
		i = num1 + 2;
	}

	if(num1 % 3 == 2) {
		i = num1 + 1;
	}

	for(; i <= num2; i += 3) {
		soma += i;
	}

	printf("Soma dos multiplos de tres entre %d e %d = %d\n", num1, num2, soma);

	return 0;
}