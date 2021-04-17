/*
 ============================================================================
 Name        : prueba.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int utn_factorial(float operador, float*presultado);
int main(void) {
	float operador=-4;
	float resultado;
	utn_factorial(operador, &resultado);
	printf("%f",resultado);

}
int utn_factorial(float operador, float*presultado){
	int factorial=1;
	if(operador>0){
		for(int i=operador; i>0; i--){
			factorial*=i;
		}
	}
	else if(operador<0){
		for(int i=operador; i<0; i++){
			factorial*=i;
		}
	}
	*presultado=factorial;
	return 0;
}
