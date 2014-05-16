/*
Use o operador sizeof(nome_do_tipo) para descobrir o tamanho dos
diversos tipos de dados para seu compilador e sua máquina. 
*/

int main() {

	printf("Size of int: %d\n", sizeof(int));

	printf("Size of long int: %ld\n", sizeof(long int));

	printf("Size of unsigned int %u\n", sizeof(unsigned int));

	printf("Size of char: %d\n", sizeof(char));

	printf("Size of float: %.0f\n", sizeof(float));

	printf("Size of double: %.0lf\n", sizeof(double));

	system("PAUSE");

	return 0;
}