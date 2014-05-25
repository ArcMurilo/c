#include <stdio.h>

int mystrlen(char str[]) {
	int i;

	for (i = 0; str[i] != '\0'; ++i);

	return i;
}

int mystrcmp(char str1[], char str2[]) {
	int i = 0, lengthStr1 = mystrlen(str1) , lengthStr2 = mystrlen(str2);

	while(i < lengthStr1 && i < lengthStr2) {
		
		if(str1[i] - str2[i] != 0) {
			return (str1[i] - str2[i]);
		}
		
		i++;		
	}

	return lengthStr1 - lengthStr2;
}

void mystrcpy(char strOrigem[], char strDestino[]) {
	int i;

	for(i = 0; strOrigem[i] != '\0'; i++) {
		strDestino[i] = strOrigem[i];
	}

	strDestino[i] = '\0';
}

void print_string(char str[]) {
	int i;

	for(i = 0; str[i] != '\0'; i++) {
		printf("%c", str[i]);
	}

	printf("\n");
}

void print_reverse(char str[]) {
	int i;

	for(i = mystrlen(str); i >= 0; i--) {
		printf("%c", str[i]);
	}

	printf("\n");
}

void mystrreverse(char str[], char strDestino[]) {
	int i, posicao = mystrlen(str) - 1;


	for(i = 0; str[i] != '\0'; i++) {
		strDestino[i] = str[posicao - i];
		printf("%c\n", str[0]);
	}

	strDestino[i] = '\0';
}

int find_first(char string[], char letra) {
	int i;

	for (int i = 0; string[i] != '\0'; ++i) {
		if(string[i] == letra){
			return i;
		}
	}

	return -1;	
}

int find_last(char string[], char letra) {
	int i, posicao = -1;

	for (int i = 0; string[i] != '\0'; ++i) {
		if(string[i] == letra){
			posicao = i;
		}
	}

	return posicao;	
}

void elimina_letra(char string[], char strDestino[], char letra) {
	char string_aux[mystrlen(string)];
	int i, j = 0;

	for(i = 0; string[i] != '\0'; i++) {
		if(string[i] == letra){
			continue;
		}
		strDestino[j] = string[i];
		j++;
	}
}

void mystrcat(char str1[], char str2[]) {
	int i;

	for(i = 0; str1[i] != '\0'; i++)
		printf("%c", str1[i]);

	for(i = 0; str2[i] != '\0'; i++)
		printf("%c", str2[i]);

	printf("\n");
}


int main() {
	char str[] = "linguagem C";
	char str2[] = "JAVA";

//	printf("mystrlen = %d\n", mystrlen(str));

//	printf("mystrcmp = %d\n", mystrcmp(str, str2));

//	mystrcat(str, str2);

//	printf("\n");

//	print_string(str);

//	printf("\n");

//	mystrcpy(str, str2);

//	printf("str2 apos mystrcpy = %s\n", str2);

	print_reverse(str);

	printf("\n");

	mystrreverse(str, str2);

	printf("str2 apos mystrreverse = %s\n", str2);

//	printf("find_first(str, 'g') = %d\n", find_first(str, 'g'));

//	printf("find_last(str, 'g') = %d\n", find_last(str, 'g'));

//	elimina_letra(str, str2, 'n');

//	printf("str2 apos elimina_letra = %s\n", str2);

	return 0;
}