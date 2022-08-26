/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Dalila Vacotti
 Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
caso de que no exista también informarlo.
Ejemplo:
1 5 3 el 3 es del medio
5 1 5 no hay número del medio
3 5 1 el 3 es del medio
3 1 5 el 3 es del medio
5 3 1 el 3 es del medio
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
	 int numeroTres;

	 printf("ingrese un numero");
	 scanf ("%d", &numeroUno);
	 printf("ingrese otro numero");
		 scanf ("%d", &numeroDos);
		 printf("ingrese el ultimo numero numero");
			 scanf ("%d", &numeroTres);

if (numeroUno > numeroDos && numeroUno < numeroTres || numeroUno < numeroDos && numeroUno > numeroTres ){

	printf("el numero del medio es el primero ingresado");
}
else if (numeroDos > numeroUno && numeroDos< numeroTres || numeroDos < numeroUno && numeroDos > numeroTres){

	printf("el numero del medio es el SEGUNDO ingresado");
}
else if (numeroTres > numeroUno && numeroTres < numeroDos || numeroTres < numeroUno && numeroTres > numeroDos    ){

	printf("el numero del medio es el ULTIMO ingresado");
}

return 0;
}















