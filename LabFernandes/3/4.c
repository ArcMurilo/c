/*
Implemente em C o algoritmo de Busca Binária. 
ealize testes que demonstrem o funcionamento do algoritmo. 
Crie um vetor de inteiros (1 a 100.000), ordenados e verifique o número de 
comparações realizadas para encontrar um elemento na posição 1/3 do início e 1/3 do final. 
Compare com uma busca sequencial e comente o aspecto eficiência.
*/

#include <stdio.h>

int count = 0;

long int binary(long int v[], long int n, long int x)  {
    long int low=0, high=n-1, mid;

	while (low <= high) {
		count++;
		mid=(high+low)/2;
	 	if (x < v[mid]) high=mid-1;
 		else if(x > v[mid])  low=mid+1;
	    else  return(mid);
    }  

    return(-1);
}

int main() {
	long int i, vetor[100000];

	for (i = 0; i < 100000; i++) {
		vetor[i] = i;
	}

	binary(vetor, 100000, (100000-1)/3);

	printf("Numero de execucoes para encontrar %d: %d\n", ((100000-1)/3), count);

	count = 0;

	binary(vetor, 100000, 2 * (100000-1)/3);

	printf("Numero de execucoes para encontrar %d: %d\n", (2 * (100000-1)/3), count);	

	return 0;
}