/*
Escreva programa leia números, de ponto flutuante, cada elemento representando o tempo, em segundos,
de uma volta em torno da pista de um autódromo. Seu programa deve para a leitura quando um valor de 
tempo negativo ou zero for lido. Seu programa deve então deve calcular :
a) o tempo da melhor volta b) o tempo da pior volta e c) o tempo médio das voltas.
*/

#include <stdio.h>

float melhorVolta(float, float);
float piorVolta(float, float);

int main() {
	int i = 0;
	float maiorTempo = 0.0, menorTempo = 0.0, tempoMedio = 0.0, tempoAtual = 0.0;

	scanf("%f", &tempoAtual);

	maiorTempo = tempoAtual;

	while (tempoAtual > 0) {


		menorTempo = melhorVolta(menorTempo, tempoAtual);
		maiorTempo = piorVolta(maiorTempo, tempoAtual);
		tempoMedio += tempoAtual;
		i++;
		scanf("%f", &tempoAtual);
	}


	// caso o usuario digite um valor igual ou menor que zero na primeira execucao, para nao dar erro de divisao por zero.
	if (i == 0)
		tempoMedio = 0;
	else
		tempoMedio = tempoMedio / i;

	printf("Melhor Volta = %.4f\n", menorTempo);
	printf("Pior Volta = %.4f\n", maiorTempo);
	printf("Tempo Medio = %.4f\n", tempoMedio);

	return 0;
}

float melhorVolta(float tempo1, float tempo2) {
	if (tempo1 > tempo2) {
		return tempo1;
	}
	return tempo2;
}

float piorVolta(float tempo1, float tempo2) {
	if (tempo1 < tempo2) {
		return tempo1;
	}
	return tempo2;
}