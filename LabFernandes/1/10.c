/*
Escreva um programa que leia o número de horas semanais trabalhadas e 
o valor da hora de trabalho e calcule o salário semanal. Inclua as horas 
extras pagando 50% a mais que o valor das horas normais (40hs).
Imprima o salário do empregado.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	float horas_trabalhadas, valor_hora; // variaveis de entrada
	float horas_extras, salario_semanal = 0; // variaveis calculadas

	printf("Horas trabalhadas: ");
	scanf("%f", &horas_trabalhadas);

	printf("\nValor hora: ");
	scanf("%f", &valor_hora);


	if (horas_trabalhadas > 40) {
		horas_extras = horas_trabalhadas - 40;
		salario_semanal = 40 * valor_hora + horas_extras * valor_hora * 1.5;
	}
	else {
		salario_semanal = horas_trabalhadas * valor_hora;
	}
	
	printf("Salario: R$ %.2f\n", salario_semanal);

	system("PAUSE");

	return 0;
}