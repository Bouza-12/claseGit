/*
 ============================================================================
 Name        : ejercicio2-4.c
 Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	char charIngresado;
	int contarP=0;
	int i;

	for(i=0;i<5;i++)
	{
		printf("Ingrese un caracter: ");
		fflush(stdin);
		scanf("%c",&charIngresado);
		if(charIngresado == 'p')
		{
			contarP++;
		}
	}

	if(contarP == 0)
	{
		printf("\nNo se ingreso el caracter 'p'.\n");
	}
	else
	{
		printf("\nSe ha(n) ingresado %d caracter(es) 'p'.\n",contarP);
	}



	return EXIT_SUCCESS;
}
