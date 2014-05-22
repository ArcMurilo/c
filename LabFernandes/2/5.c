/*
Escreva a função double calcula_raiz (double num);  que recebe um número e calcula a raiz quadrada do mesmo através do algoritmo:  
novoChute=0.5*(ultimoChute+num/ultimoChute). 
Efetue esse processo até que o erro seja inferior a 0.00001. Use chute inicial igual a 1.0.
*/

#include <stdio.h>

double calcula_raiz(double);

int main() {
	double num;

	scanf("%lf", &num);

	printf("\nRaiz de %.2f = %.10f\n\n", num, calcula_raiz(num));

	return 0;
}

double calcula_raiz(double num) {
	double novoChute = num / 2.0, ultimoChute = novoChute, diferenca = 1;

	while (diferenca > 0.00001) {
		novoChute = 0.5 * (ultimoChute + num / ultimoChute);
		ultimoChute = novoChute;
		diferenca = novoChute * novoChute - num;

		if (diferenca < 0) {
			diferenca = diferenca * (-1);
		}
	}

	return novoChute;
}