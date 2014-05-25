/*
10-Escreva uma função que compare duas strings e retorne: zero se as strings forem idênticas; 
valor positivo se a primeira string for maior que a segunda; e valor negativo se a primeira
string for menor que a segunda. Protótipo: int compara_strings(char s1[], char s2[]);
*/

#include <stdio.h>

int compareString(char[], char[]);

int strLength(char str[]) {
	int i;

	for (i = 0; str[i] != '\0'; ++i);

	return i;
}


int main() {
	char str1[100], str2[100];

	int comparar;

	printf("Insira a primeira string: ");
	gets(str1);

	printf("Insira a segunda string: ");
	gets(str2);

	comparar = compareString(str1, str2);

	if(comparar > 0) {
		printf("A primeira string e maior que a segunda\n");
	}
	else if (comparar < 0) {
		printf("A segunda string e maior que a primeira\n");	
	}
	else {
		printf("As duas strings sao identicas\n");
	}

	return 0;
}

int compareString(char str1[], char str2[]) {
	int i = 0, lengthStr1 = strLength(str1) , lengthStr2 = strLength(str2);

	while(i < lengthStr1 && i < lengthStr2) {
		
		if(str1[i] - str2[i] != 0) {
			return (str1[i] - str2[i]);
		}
		
		i++;		
	}

	return lengthStr1 - lengthStr2;
}
