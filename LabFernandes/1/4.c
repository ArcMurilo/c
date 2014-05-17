/*
Escreva um programa para imprimir g = 3.1415926535898 nos formatos %e, %E, %f, %g, %D, 
com duas, cinco, dez e nenhuma casa decimal. 
Imprima g em um campo de 20 caracteres, com 7 decimais justificado à esquerda.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	double g = 3.1415926535898;

	printf("Notacao Cientifica: %e ou %E\n", g, g);
	printf("Ponto Flutuante: %f\n", g);
	printf("Ponto Flutuante de dupla precisao: %lf\n", g);
	printf("Ponto Flutuante ou Notacao Cientifica: %g\n(Nesse caso a propria linguagem decide qual a melhor forma de apresentar o valor da variavel)\n", g);
	printf("Inteiro: %d\n", g);

	printf("Impressao com 2 casas decimais: %.2f\n", g);
	printf("Impressao com 5 casas decimais: %.5f\n", g);
	printf("Impressao com 10 casas decimais: %.10lf\n", g);
	printf("Impressao com 0 casas decimais: %.0f\n", g);

	printf("Impresso formatada: %020.13f\n\n", g);

	system("PAUSE");

	return 0;
}
