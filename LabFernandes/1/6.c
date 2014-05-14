/*
Dados a = 12, b = 3, inteiros faça um programa par demonstrar
as operações aritméticas envolvendo números inteiros
(incluindo incremento e decremento nas formas ++a, a++).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 12, b = 3;

    printf("Valores padrao das variaveis\na = 12 , b = 3\n\n");

	/* SOMA */
	printf("Soma = %d\n", a + b);

	/* SUBTRACAO */
	printf("Subtracao = %d\n", a - b);

	/* MULTIPLICACAO */
	printf("Multiplicacao = %d\n", a * b);

	/* DIVISAO */
	printf("Divisao = %d\n", a / b);

	/* RESTO DE DIVISAO */
	printf("Resto de divisao = %d\n", a % b);

	/* INCREMENTOS */
	printf("Incremento a++ = %d (Primeiro imprime o valor de a, depois incrementa)\n", a++);
	a = 12; // volta a variavel para seu valor original para manter o padrao a = 12
	printf("Incremento ++a = %d (Primeiro incrementa, depois imprime o valor de a)\n", ++a);
	a = 12; // volta a variavel para seu valor original para manter o padrao a = 12

	/* DECREMENTOS */
	printf("Decremento a-- = %d (Primeiro imprime o valor de a, depois decrementa)\n", a--);
	a = 12; // volta a variavel para seu valor original para manter o padrao a = 12
	printf("Decremento --a = %d (Primeiro decrementa, depois imprime o valor de a)\n\n", --a);
	a = 12; // volta a variavel para seu valor original para manter o padrao a = 12

	system("PAUSE");
	return 0;
}
