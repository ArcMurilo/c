/*
Escreva uma função que retorne o tamanho de uma string de caracteres.
*/

#include <stdio.h>

int strLength(char[]);

int main() {
	char str[100];

	gets(str);

	printf("Tamanho da string digitada = %d\n", strLength(str));

	return 0;
}

int strLength(char str[]) {
	int i;

	for (i = 0; str[i] != '\0'; ++i);

	return i;
}