/*
 ============================================================================
 Name        : ejercicio3-1.c
 Crear una funci�n que muestre por pantalla el n�mero flotante  que recibe como par�metro.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void MostrarFlotante(float numero);

int main(void) {
	setbuf(stdout,NULL);

	MostrarFlotante(25.33);

	return EXIT_SUCCESS;
}

void MostrarFlotante(float numero)
{
	printf("El numero flotante es: %f", numero);
}
