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

	for(i = 0; strOrigem[i] != '\0'; ++i) {
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
	i = mystrlen(str);

	for(; i >= 0; i--) {
		printf("%c", str[i]);
	}

	printf("\n");
}

void mystrreverse(char str[], char strDestino[]) {
	int i, j;

	for(j = 0; str[j] != '\0'; j++);

	j = j-1;
	for(i = 0; str[i] != '\0'; i++) {
		strDestino[i] = str[j];
		j--;
	}

	strDestino[i] = '\0';
}

int find_first(char string[], char letra) {
	int i;

	for (i = 0; string[i] != '\0'; ++i) {
		if(string[i] == letra){
			return i;
		}
	}

	return -1;	
}

int find_last(char string[], char letra) {
	int i, posicao = -1;

	for (i = 0; string[i] != '\0'; ++i) {
		if(string[i] == letra){
			posicao = i;
		}
	}

	return posicao;	
}

void elimina_letra(char string[], char strDestino[], char letra) {
	int i, j = 0;

	for(i = 0; string[i] != '\0'; i++) {
		if(string[i] == letra){
			continue;
		}
		strDestino[j] = string[i];
		j++;
	}
	strDestino[j] = '\0';
}

void mystrcat(char str1[], char str2[], char strDestino[]) {
	int i, j;

	for(i = 0; str1[i] != '\0'; i++)
		strDestino[i] = str1[i];

	for(j = 0; str2[j] != '\0'; j++) {
		strDestino[i] = str2[j];
		i++;
	}

	strDestino[i] = '\0';
}


int main() {
	char str[100];
	char str2[100];
	char strDestino[100];

	gets(str);
	gets(str2);

	printf("mystrlen = %d\n", mystrlen(str));

	printf("mystrcmp = %d\n", mystrcmp(str, str2));

	mystrcat(str, str2, strDestino);

	printf("print_string = ");
	print_string(strDestino);

	mystrcpy(str, str2);

	printf("str2 apos mystrcpy = %s\n", str2);

	printf("print_reverse = ");
	print_reverse(str);

	mystrreverse(str, strDestino);

	printf("str2 apos mystrreverse = %s\n", strDestino);

	printf("find_first(str, 'g') = %d\n", find_first(strDestino, 'g'));

	printf("find_last(str, 'g') = %d\n", find_last(strDestino, 'g'));

	elimina_letra(str2, strDestino, 'n');

	printf("str2 apos elimina_letra = %s\n", strDestino);

	return 0;
}