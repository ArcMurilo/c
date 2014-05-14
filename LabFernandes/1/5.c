/*
Assuma que todas as variáveis das expressões a seguir são do tipo inteiro.
Encontre o valor de cada expressão e escreva um programa que as imprima
para verificar os resultados.

i) x=(2+1)*6		ii) y=5/(2*3)	iii) i=j=(3+2)/4
iv) a=3+2*(b=7/2) 	 v) c=5+10%2/2 	vi) d=-(3%5)*3/2
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y, i, j, a, b, c, d;


	/* CALCULA E ATRIBUI RESULTADOS AS VARIAVEIS */
	x = (2 + 1) * 6;
	y = 5 / (2 * 3);
	i = j = (3 + 2) / 4;
	a = 3 + 2 * (b = 7 / 2);
	c = (5 + 10 % 2 / 2);
	d = -(3 % 5) * 3 / 2;

	/* IMPRIME OS VALORES DAS VARIAVEIS */
	printf("para x = (2+1)*6, x = %d\n\n", x);
	printf("para y = 5/(2*3), y =  %d\n\n", y);
	printf("para i = j = (3+2)/4, i = %d e j = %d\n\n", i, j);
	printf("para a = 3+2*(b=7/2), a = %d e b = %d\n\n", a, b);
	printf("para c = 5+10%%2/2, c = %d\n\n", c);
	printf("para d = -(3%%5)*3/2, d = %d \n\n", d);


	system("PAUSE");
	return 0;
}
