/*
 ============================================================================
 Name        : ejercicio3-1.c
 Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.

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
