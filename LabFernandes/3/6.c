/*
Escreva um programa que calcule ∑(1/2)i - somatória de (1/2)i com i variando entre 0 e N (lido).     
*/

#include <stdio.h>
#include <math.h>

int main() {
	int n, i;
	double resultado = 0.0;

	scanf("%d", &n);

	for(i = 0; i <= n; i++) {
		resultado += pow(0.5,i);
	}

	printf("Resultado = %.12lf\n", resultado);

	return 0;
}