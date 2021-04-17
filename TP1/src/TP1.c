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
char opcion;
float numeroA;
float numeroB;
int flag_numeroA=0;
int flag_numeroB=0;
int flag_salir=1;
char operacion;
float resultado;
float resulatadoBfactorial;

do{
	if(utn_getnumeroRango(&opcion, "\nIngrese una opcion\n\nA-Ingresar primer numero\nB-Ingresar segundo numero\nC-Operaciones\nD-Salir\n",
			"Opcion invalida\n", 2, 68, 65)){
		switch(opcion){
		case 'A':
			if(flag_numeroA==0){
				utn_getnumero(&numeroA, "\nIngrese el primer numero\n", "Error\n", 2);
				flag_numeroA=1;
			}
			else{
				printf("\nEste numero ya a sido ingresado\n");
			}
			break;
		case 'B':
			if(flag_numeroB==0){
				utn_getnumero(&numeroB, "\nIngrese el segundo numero\n", "Error\n", 2);
				flag_numeroB=1;
			}
			else{
				printf("\nEste numero ya a sido ingresado\n");
			}
			break;
		case 'C':
			if(utn_getnumeroRango(&operacion, "\nIngrese una opcion\na-SUMA\nb-RESTA\nc-MULTIPLICACION\nd-DIVISION\ne-FACTORIAL"
					, "ERROR\n", 2, 101, 97)){
					switch(operacion){
					case 'a':
						utn_suma(numeroA, numeroB, &resultado);
						printf("El resultado de A+B es: %.2f",resultado);
						break;
					case 'b':
						utn_resta(numeroA, numeroB, &resultado);
						printf("El resultado de A-B es: %.2f",resultado);
						break;
					case 'c':
						utn_multiplicacion(numeroA, numeroB, &resultado);
						printf("El resultado de A*B es: %.2f",resultado);
						break;
					case 'd':
						if(utn_division(numeroA, numeroB, &resultado)==-1){
							printf("No es posible dividir por cero");
						}
						else{
						printf("El resultado de A/B es: %.2f",resultado);
						}
						break;
					case 'e':
						utn_factorial(numeroA, &resultado);
						utn_factorial(numeroB, &resulatadoBfactorial);
						printf("El factorial de A es: %.2f y El factorial de B es: %.2f\n",resultado,resulatadoBfactorial);
						break;
					}
				}
			break;
		case 'D':
			flag_salir=0;
			break;
		}
	}

}while(flag_salir);
return 0;
}

