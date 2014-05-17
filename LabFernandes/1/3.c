/*
Escreva um programa para ler e imprimir os nomes e valores das variáveis abaixo nos formatos: decimal (%d), octal (%o),
hexadecimal (%x), decimal long (%ld), decimal short (%d), unsigned int (%u), character output (%c), valor inteiro de caracter (%u),
ponto flutuante de precisão simples (%f), ponto flutuante de precisão dupla (%lf).

Dados:
int a;             // simple integer type
long int b;        // long integer type
short int c;       // short integer type
unsigned int d;    // unsigned integer type
char e;            // character type
float f;           // floating point type
double g;          // double precision floating point

Teste com
   a = 1023; b = 2222; c = 123;  d = 1234;  e = 'X';
   f = 3.14159;  g = 3.1415926535898;
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	long int b;
	short int c;
	unsigned int d;
	char e;
	float f;
	double g;

	printf("Insira uma letra: ");
	scanf("%c", &e);

	printf("Letra digitada: %c\n", e);
	printf("Valor inteiro (tabela ASCII) da letra digitada: %u\n", e);

	printf("Insira 4 valores inteiros separados por espacos: ");
	scanf("%d %li %hd %u", &a, &b, &c, &d);

	printf("Valor de inteiro comum: %d\n", a);
	printf("Valor de inteiro longo: %li\n", b);
	printf("Valor de inteiro curto: %hd\n", c);
	printf("Valor de inteiro sem sinal %u\n", d);

	printf("Valor de %d em base octal: %o\n", a, a);
	printf("Valor de %d em base hexadecimal: %x\n", a, a);

	//printf("Insira uma letra: ");
	//scanf("%c", &e);

	//printf("Letra digitada: %c\n", e);
	//printf("Valor inteiro (tabela ASCII) da letra digitada: %u\n", e);

	printf("Insira dois numeros reais separados por espacos: \n");
	scanf("%f %lf", &f, &g);

	printf("Valor de ponto flutuante simples: %f\n", f);
	printf("Valor de ponto flutuante dupla precisao: %lf\n\n", g);

	system("PAUSE");

	return 0;
}


