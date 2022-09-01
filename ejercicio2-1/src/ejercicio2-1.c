/*
 ============================================================================
Ejercicio 2-1: Ingresar 5 n�meros enteros calcular y mostrar el promedio de los n�meros.
Probar la aplicaci�n con distintos valores.
Ejemplo 1:  3 - 5 - 7 - 9 - 1
Ejemplo 2:  2 - 1 - 8 - 1 - 2

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numeroIngresado;
	int acumulador;
	float promedio;
	int i;
	acumulador=0;

	for(i=0;i<5;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numeroIngresado);
		acumulador += numeroIngresado;
	}

	promedio = (float)acumulador/i;

	printf("El promedio es %2.f",promedio);

	return EXIT_SUCCESS;
}
