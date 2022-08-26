/*
 ============================================================================
 Name        : holamundo.c
 Author      : Dalila Vacotti
 Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
Ejemplo: Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el
segundo: 9”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	 setbuf(stdout,NULL);
	int numeroUno;
	int numeroDos;
	int numeroTres;


	printf("ingrese un numero");
	scanf ("%d", &numeroUno);

	printf("ingrese un SEGUNDO numero");
	scanf ("%d", &numeroDos);

	printf("ingrese un TERCER numero");
		scanf ("%d", &numeroTres);

if (numeroUno > numeroDos && numeroUno > numeroTres)
{
	printf("el numero mas alto es el %d",numeroUno);
}
else if (numeroDos > numeroUno && numeroDos > numeroUno)
	{
		printf("el numero mas alto es el %d",numeroDos);
	}
	else {
		printf("el numero mas alto es el %d",numeroTres);

	}


}
