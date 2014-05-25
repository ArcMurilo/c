/*
Escreva programa que simule o lançamento de uma moeda. 
Imprima uma tabela de resultados para 1, 5, 10, 15, 20, 50, 100 e 1000 lançamentos. 
Explique. Use a função rand() (ver livro texto).

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int);
void imprimirTabela(int);

int main() {
	// cara = 1 , coroa = 0

//	imprimirTabela(1);
//	imprimirTabela(5);
	imprimirTabela(10);
//	imprimirTabela(15);
//	imprimirTabela(20);
//	imprimirTabela(50);
//	imprimirTabela(100);
//	imprimirTabela(1000);

	return 0;
}


int aleatorio(int range) {
	int x;    
    x = rand() % range;
	return x; 
}

void imprimirTabela(int linhas) {
	int i, cara_coroa;;
	printf("----------------------------\n");

	for (i = 0; i < linhas; ++i)
	{
		cara_coroa = aleatorio(2);
		if (cara_coroa)
			printf("| Lancamento %03d: Cara(%d)   |\n", i+1,cara_coroa);
		else
			printf("| Lancamento %03d: Coroa(%d)  |\n", i+1, cara_coroa);
	}

	printf("----------------------------\n\n");
}
