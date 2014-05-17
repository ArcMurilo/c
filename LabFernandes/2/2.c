/*  
Escreva programa para resolver uma equação de segundo grau, dados os valores dos coeficientes a, b, c ( equação: y = a*x*x + b*x + c)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float a, b, c; // variaveis de entrada
	float delta, x1, x2;

	printf("EQUACAO DO SEGUNDO GRAU\n");
	printf("Insira os valores de a, b e c: ");

	scanf("%f %f %f", &a, &b, &c);

	printf("\na = %.1f b = %.1f c = %.1f\n\n", a, b, c);

	delta = b*b - 4 * a * c;

	if (delta >= 0) {
		delta = sqrt(delta);

		x1 = (-b + delta) / (2 * a);
		x2 = (-b - delta) / (2 * a);

		printf("x1 = %.4f / x2 = %.4f\n\n", x1, x2);
	}

	else {
		delta = delta * (-1);
		delta = sqrt(delta);

		x1 = -b / (2 * a);

		printf("x1 = %.4f + %.4f*i / x2 = %.4f - %.4f*i\n\n", x1, delta, x1, delta);
	}

	return 0;

}