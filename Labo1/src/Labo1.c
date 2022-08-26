/*
 ============================================================================
 Name        : holamundo.c
 Author      : Dalila Vacotti
 Ingresar dos números enteros entre -50 y 100, sumarlos y mostrar el
resultado. Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2
da como resultado 5”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	 setbuf(stdout,NULL);
	int valorA;
	int valorB;
	int resultado;


	printf("ingrese un numero");
	scanf ("%d", &valorA);
	while(valorA<-50 || valorA> 100){
		printf("error. ingrese un numero valido");
		scanf ("%d", &valorA);

	}
	printf("ingrese un SEGUNDO numero");
	scanf ("%d", &valorB);
	while(valorB<-50 || valorB> 100){
		printf("error. ingrese un numero valido");
		scanf ("%d", &valorB);

	}
	resultado =valorA+valorB;

	printf("el resultado de la cuenta es:  %d ", resultado);


	   return 0;
}
