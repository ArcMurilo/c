/*
Escreva program que leia três lados (comprimentos) e, em seguida, verifique se é possível formar um triângulo com os mesmos.
Caso seja possível, seu programa deve classificar o triângulo quanto ao tamanho dos lados, como isóceles, eqüilátero ou 
qualquer (três lados de tamanhos diferentes). Seu programa deve quanto à natureza (ângulos) como sendo agudo, retângulo ou obtuso.
*/

#include <stdio.h>
#include <stdlib.h>

int tipoLadoTriangulo(float, float, float); // 1 - equilatero; 2 - Isosceles; 0 - Escaleno
int tipoAnguloLados(float, float, float);

int main() {
	int tipoLado, tipoAngulo;

	float ladoA, ladoB, ladoC;

	printf("CLASSIFICACAO DOS TRIANGULOS\n");
	printf("Informe os lados do triangulo: ");
	scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

	if (ladoA < (ladoB + ladoC) && ladoB < (ladoA + ladoC) && ladoC < (ladoA + ladoB)) {
		tipoLado = tipoLadoTriangulo(ladoA, ladoB, ladoC);
		switch (tipoLado) {
			case 0 : printf("\nTriangulo Escaleno");
					 tipoAngulo = tipoAnguloLados(ladoA, ladoB, ladoC);
					 switch (tipoAngulo) {
					 	case 1 : printf(" Agudo\n");
					 		 	 break;
					 	case 2 : printf(" Reto\n");
					 			 break;
					 	case 3 : printf(" Obtuso\n");
					 			 break;
					 } 			
					 system("PAUSE");
					 return 0;
			case 1 : printf("\nTriangulo Equilatero Agudo\n");
					 system("PAUSE");
					 return 0;
			case 2 : printf("\nTriangulo Isosceles"); 
					 tipoAngulo = tipoAnguloLados(ladoA, ladoB, ladoC);
					 switch (tipoAngulo) {
					 	case 1 : printf(" Agudo\n");
					 		 	 break;
					 	case 2 : printf(" Reto\n");
					 			 break;
					 	case 3 : printf(" Obtuso\n");
					 			 break;
					 } 			
					 system("\nPAUSE");
					 return 0;
		}
		 
	}
	else 
		printf("Nao e possivel construir um triangulo com os lados fornecidos.\n");
}

int tipoLadoTriangulo(float ladoA, float ladoB, float ladoC) {
	/*
	Recebe os tres lados do triangulo e retorna:
	0, se os tres lados forem diferentes (escaleno);
	1, se os tres lados forem iguais (equilatero);
	2, se houverem dois laods iguais e um diferente (isosceles).
	*/

	if (ladoA == ladoB && ladoA == ladoC)
		return 1;

	if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC)
		return 2;
	
	return 0;
}

int tipoAnguloLados(float ladoA, float ladoB, float ladoC) {
	/*
	Recebe os lados adjacentes e, atraves do teorema de Pitagoras, 
	retorna o tipo de angulo entre os lados adjacentes.
	Se a soma dos quadrados dos lados adjacentes for maior que o quadrado do lado oposto, retorna 1 (angulo agudo)
	Se a soma dos quadrados dos lados adjacentes for igual ao quadrado do lado oposto, retorna 2 (angulo reto)
	Se a soma dos quadrados dos lados adjacentes for menor que o quadrado do lado oposto, retorna 3 (angulo obtuso)
	*/

	float ladoMaior, lado1, lado2, somaLadosAdjacentes;

	ladoMaior = (ladoA > ladoB) ? ladoA : ladoB;
	lado1 = (ladoA <= ladoB) ? ladoA : ladoB;

	ladoMaior = (ladoMaior > ladoC) ? ladoMaior : ladoC;
	lado2 = (ladoMaior <= ladoC) ? ladoMaior : ladoC;

	ladoMaior = ladoMaior * ladoMaior;
	somaLadosAdjacentes = ladoA * ladoA + ladoB * ladoB;

	if (somaLadosAdjacentes > ladoMaior)
		return 1;
	if (somaLadosAdjacentes == ladoMaior)
		return 2;
	return 3;
}
