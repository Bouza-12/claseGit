/*
Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no exista también informarlo.
Ejemplo:
1   5   3     el 3 es del medio
5   1   5    no hay numero del medio
3   5   1     el 3 es del medio
3   1   5    el 3 es del medio
5   3   1    el 3 es del medio

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;
	int numeroMedio;

	printf("Numero uno: ");
	scanf("%d",&numeroUno);
	printf("Numero dos: ");
	scanf("%d",&numeroDos);
	printf("Numero tres: ");
	scanf("%d",&numeroTres);

	if(numeroUno == numeroDos || numeroUno == numeroTres || numeroDos==numeroTres)
	{
		printf("%d   %d   %d   no hay numero del medio",
				numeroUno, numeroDos, numeroTres);
	}
	else
	{
		if((numeroUno > numeroDos && numeroUno < numeroTres)||(numeroUno < numeroDos && numeroUno > numeroTres))
		{
			numeroMedio=numeroUno;
			printf("%d   %d   %d   el %d es del medio",
					numeroUno, numeroDos, numeroTres, numeroMedio);
		}
		else
		{
			if((numeroDos < numeroUno && numeroDos > numeroTres)||(numeroDos < numeroUno && numeroDos > numeroTres))
			{
				numeroMedio=numeroDos;
				printf("%d   %d   %d   el %d es del medio",
				numeroUno, numeroDos, numeroTres, numeroMedio);
			}
			else
			{
			numeroMedio=numeroTres;
			printf("%d   %d   %d   el %d es del medio",
			numeroUno, numeroDos, numeroTres, numeroMedio);
			}
		}
	}

	return EXIT_SUCCESS;
}
