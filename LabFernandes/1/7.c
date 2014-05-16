/*
Sabendo que o valor ZERO (0) é interpretado com FALSO e qualquer valor 
diferente de zero é interpretado como verdadeiro, escreva um programa para 
testar se as expressões a seguir são verdadeiras ou falsas: 
a) 1>2	b)’a’<’b’	c)3==2	d)’1’==’1	e)3>=2	f)’j’!=’j’
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	if (1>2) printf("1 > 2 : true\n");
	else printf("1 > 2 : false\n");

	if ('a' > 'b') printf("'a' > 'b' : true\n");
	else printf("'a' > 'b' : false\n");

	if (3 == 2) printf("3 == 2 : true\n");
	else printf("3 == 2 : false\n");

	if ('1' == '1') printf("'1' == '1' : true\n");
	else printf("'1' == '1' : false\n");

	if (3 >= 2) printf("3 >= 2 : true\n");
	else printf("3 >= 2 : false\n");

	if ('j' != 'j') printf("'j' != 'j' : true\n");
	else printf("'j' != 'j' : false\n");

	system("PAUSE");
	return 0;
}