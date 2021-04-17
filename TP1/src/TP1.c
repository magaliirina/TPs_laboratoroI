/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"

int main(void) {
int opcion;
float numeroA;
float numeroB;
int flag_numeroA=0;
int flag_numeroB=0;
int operacion;
float resultado;

for(int i=0;i<2;i++){
	if(utn_getnumeroRango(&opcion, "Ingrese una opcion\n\n1-Ingresar primer numero\n2-Ingresar segundo numero\n",
			"Opcion invalida\n", 2, 2, 1)){
		switch(opcion){
		case 1:
			if(flag_numeroA==0){
				utn_getnumero(&numeroA, "\nIngrese el primer numero\n", "Error\n", 2);
				flag_numeroA=1;
			}
			else{
				printf("\nEste numero ya a sido ingresado\n");
			}
			break;
		case 2:
			if(flag_numeroB==0){
				utn_getnumero(&numeroB, "\nIngrese el segundo numero\n", "Error\n", 2);
				flag_numeroB=1;
			}
			else{
				printf("\nEste numero ya a sido ingresado\n");
			}
			break;
		}
	}
}
if(utn_getnumeroRango(&operacion, "Ingrese una opcion\n", "ERROR\n", 2, 5, 1)){
	switch(operacion){
	case 1:
		utn_suma(numeroA, numeroB, &resultado);
		break;
	case 2:
		utn_resta(numeroA, numeroB, &resultado);
		break;
	case 3:
		utn_multiplicacion(numeroA, numeroB, &resultado);
		break;
	case 4:
		if(utn_division(numeroA, numeroB, &resultado)==-1){
			printf("No es posible dividir por cero");
		}
		break;
	case 5:
		printf("HOLA\n");
		break;
	}
}

printf("%.2f",resultado);





return 0;
}

