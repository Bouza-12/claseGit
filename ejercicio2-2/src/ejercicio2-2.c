/*
 ============================================================================
Ingresar 10 números enteros, distintos de cero. Mostrar:
a. Cantidad de pares e impares.
b. El menor número ingresado.
c. De los pares el mayor número ingresado.
d. Suma de los positivos.
e. Producto de los negativos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numeroIngresado;
	int i;
	int contadorPar;
	int contadorImpar;
	int menor;
	int mayorPar;
	int acumuladorPositivos;
	int productoNegativos;

	acumuladorPositivos=0;
	contadorImpar=0;
	contadorPar=0;
	productoNegativos=1;
	mayorPar=0;
	menor=0;

	for(i=0;i<10;i++)
	{
		do{
			printf("Ingrese un numero: ");
			scanf("%d",&numeroIngresado);
		}while(numeroIngresado==0);

		if(numeroIngresado>0)
		{
			acumuladorPositivos += numeroIngresado; // D suma de positivos
		}
		else
		{
			productoNegativos *= numeroIngresado; // E producto de negativos
		}

		if(numeroIngresado%2==0)
		{
			contadorPar++; // A cantidad de pares
			if(mayorPar==0)
			{
				mayorPar=numeroIngresado;
			}
			else
			{
				if(mayorPar< numeroIngresado)
				{
					mayorPar = numeroIngresado; //C el mayor de los pares
				}
			}
		}
		else
		{
			contadorImpar++; // A cantidad de Impares
		}

		if(menor==0)
		{
			menor=numeroIngresado;
		}
		else
		{
			if(menor > numeroIngresado)
			{
				menor = numeroIngresado; // B el menor ingresado
			}
		}

	}

	printf("\nA) La cantidad de pares es: %d  y la de impares es: %d",
			contadorPar,contadorImpar);
	printf("\nB) El menor numero ingresado es: %d",menor);
	printf("\nC) El mayor de los pares ingresados es: %d",mayorPar);
	printf("\nD) La suma de los positivos es: %d",acumuladorPositivos);
	printf("\nE) El producto de los negativos es: %d",productoNegativos);
	return EXIT_SUCCESS;
}
