/*
 * utn.c
 *
 *  Created on: 17 abr. 2021
 *      Author: irina
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>


void utn_imprimirMensaje (char* mensaje){
	printf("%s",mensaje);
}
//------------------------------------------------------------------------------------------------------------
int utn_getnumero(float* numero,char* mensaje, char* mensajeError,int reintentos,int limite){
	int retorno=-1;
	float bufferNumero;

	do{
		for(int i=0;i<limite;i++){
			if(numero!=NULL&&mensaje!=NULL){
				printf("%s", mensaje);
				__fpurge(stdin);
				if(!scanf("%f",&bufferNumero)){
					printf("%s",mensajeError);
					break;
				}
				else{
					*numero=bufferNumero;
					retorno=0;
				}
			}
		}
	reintentos--;
	}while(reintentos>0);
	return retorno;
}
//----------------------------------------------------------------------------------------------------------------
/*int utn_getNumero(int* pNumeroInt,char* mensaje,char* mensajeError , int minimo, int maximo,int reintentos){
	int retorno=-1;
	int auxiliar;

	do{
	printf("%s", mensaje);
	if(!scanf("%d", &auxiliar)){

	}
	if(){
		if(*pNumeroInt>=minimo && *pNumeroInt<=maximo){
			retorno=0;
			break;
		}
		else{
			printf("%s", mensajeError);
		}
	}
	else{
		printf("%s", mensajeError);
	}
	reintentos--;
	}while(reintentos>0);

	return retorno;
}*/
