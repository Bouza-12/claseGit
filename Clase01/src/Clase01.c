/*
 ============================================================================
 Name        : Clase01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int resultado;
	char operador = '2';

/*
	printf("Numero uno: ");
	scanf("%d",&numeroUno);
	printf("Numero dos: ");
	scanf("%d",&numeroDos);

	resultado = numeroUno + numeroDos;

	printf("El resultado de sumar esto: %d mas esto: %d es: %d",
			numeroUno, numeroDos, resultado);
*/


	printf("Numero uno: ");
	scanf("%d",&numeroUno);
	printf("Ingrese el operador: ");
	fflush(stdin); // Standard Input
	scanf("%c",&operador);
	printf("Numero dos: ");
	scanf("%d",&numeroDos);

	switch(operador)
	{
		case '+':
			resultado = numeroUno + numeroDos;
			break;
		case '-':
			resultado = numeroUno - numeroDos;
			break;
		default:
			break;
	}

	printf("El resultado es: %d",resultado);

	return EXIT_SUCCESS;
}
