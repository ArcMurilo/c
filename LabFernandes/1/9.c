/*
Use o operador sizeof(nome_do_tipo) para descobrir o tamanho dos
diversos tipos de dados para seu compilador e sua máquina. 
*/

int main() {

	printf("Size of int: %d bytes\n", sizeof(int));

	printf("Size of long int: %d bytes\n", sizeof(long int));

	printf("Size of unsigned int %d bytes\n", sizeof(unsigned int));

	printf("Size of char: %d bytes\n", sizeof(char));

	printf("Size of float: %d bytes\n", sizeof(float));

	printf("Size of double: %d bytes\n", sizeof(double));

	system("PAUSE");

	return 0;
}