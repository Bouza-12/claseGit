/*
 ============================================================================
Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas
(no más de 100), de cada persona debemos obtener los siguientes datos:
	número de cliente,
	estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
	edad( solo mayores de edad, más de 17),
	temperatura corporal (validar por favor)
	y genero('f' para femenino, 'm' para masculino, 'o' para no binario).

NOTA: El precio por pasajero es de $600.
Se debe informar (solo si corresponde):
	a) La cantidad de personas con estado  civil"viudo" de más de 60 años.
	b) el número de cliente y edad de la mujer soltera más joven.
	c) cuánto sale el viaje total sin descuento.
	d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nroCliente;
	char estadoCivil; // s - c - v
	int edad;
	float temperatura;
	char genero; // m - f - o
	int unPasaje = 600;
	int contadorPasajeros = 0;

	int contarViudos60 = 0;
	int solteraJoven;
	int totalPasajes;
	float pasajeConDescuento;

	char continuar;
	int flag=0;

	do{
		if(contadorPasajeros>=100)
		{
			printf("\nIngrese el numero de cliente: ");
			scanf("%d",&nroCliente);
			contadorPasajeros++;
			do{
			printf("\nIngrese el estado civil: ");
			fflush(stdin);
			scanf("%c",&estadoCivil);
			}while(estadoCivil != 'v' && estadoCivil != 'c' && estadoCivil == 's');

			printf("\nIngrese la edad: ");
			scanf("%d",&edad);

			printf("Ingrese la temperatura: ");
			scanf("%f",&temperatura);

			do{
			printf("\nIngrese el genero: ");
			fflush(stdin);
			scanf("%c",&genero);
			}while(estadoCivil != 'm' && estadoCivil != 'f' && estadoCivil == 'o');

			if(edad > 60 && estadoCivil == 'v')
			{
				contarViudos60 ++;
			}



			printf("Desea seguir cargando (s/n): ");
			fflush(stdin);
			scanf("%c",continuar);
			if(continuar == 'n')
			{
				flag = 1;
			}
		}
		else{
			flag = 1;
		}

	}while(flag == 0);





	return EXIT_SUCCESS;
}
