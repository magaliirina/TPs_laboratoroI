/*
 * utn.c
 *
 *  Created on: 17 abr. 2021
 *      Author: irina
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

//------------------------------------------------------------------------------------------------------------------------------------------
void utn_imprimirMensaje (char* mensaje){
	printf("%s",mensaje);
}
//------------------------------------------------------------------------------------------------------------
/**
 * \brief Da un mensaje al usuario y obtiene un numero de tipo float, cuenta con reintetosy mensaje de ERROR
 * \param *numero: puntero a numero float
 * \param *mensaje: puntero a mensaje
 * \param *mensajeErrror: puntero a mensaje de error
 * \param reintentos: cantidad de reintentos
 * \return 0: Si logro el objetivo -1: Si hubo un problema
 */

int utn_getnumero(float* numero,char* mensaje, char* mensajeError,int reintentos){
	int retorno=-1;
	float bufferNumero;

	do{
		if(numero!=NULL&&mensaje!=NULL){
			printf("%s", mensaje);
			__fpurge(stdin);
			if(!scanf("%f",&bufferNumero)){
				printf("%s",mensajeError);
			}
			else{
				*numero=bufferNumero;
				retorno=0;
				break;
			}
		}
	reintentos--;
	}while(reintentos>0);
	return retorno;
}
//----------------------------------------------------------------------------------------------------------------
/**
 * \brief Da un mensaje al usuario y obtiene un numero de tipo float y lo compara con un rango, cuenta con reintetos y mensaje de ERROR
 * \param *numero: puntero a letra
 * \param *mensaje: puntero a mensaje
 * \param *mensajeErrror: puntero a mensaje de error
 * \param reintentos: cantidad de reintentos
 * \param maximo: limite superior
 * \param minimo: limite inferior
 * \return 0: Si logro el objetivo -1: Si hubo un problema
 */

int utn_getnumeroRango(char* numero,char* mensaje, char* mensajeError,int reintentos, int maximo, int minimo){
	int retorno=-1;
	char bufferNumero;

	if(numero!=NULL&&mensaje!=NULL&&mensajeError!=NULL&&reintentos>=0&&maximo>=minimo){
		do{
			printf("%s", mensaje);
			__fpurge(stdin);
			if(!scanf("%c",&bufferNumero)||!(bufferNumero<=maximo&&bufferNumero>=minimo)){
				printf("%s",mensajeError);
			}
			else if(bufferNumero<=maximo&&bufferNumero>=minimo){
				*numero=bufferNumero;
				retorno=1;
				break;
			}
		reintentos--;
		}while(reintentos>0);
	}
	return retorno;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------
/**
 * \brief suma dos numeros (A+B)
 * \param operador1: numero A
 * \param operador2: numero B
 * \param *pResultado: puntero a resultado final
 * \return 0
 */

int utn_suma(float operador1,float operador2,float* pResultado){
	*pResultado=operador1+operador2;
	return 0;
}
//------------------------------------------------------------------------------------------------------------------------------------------
/**
 * \brief resta dos numeros (A-B)
 * \param operador1: numero A
 * \param operador2: numero B
 * \param *pResultado: puntero a resultado final
 * \return 0
 */

int utn_resta(float operador1, float operador2, float*pResultado){
	*pResultado=operador1-operador2;
	return 0;
}
//------------------------------------------------------------------------------------------------------------------------------------------
/**
 * \brief multiplica dos numeros (A*B)
 * \param operador1: numero A
 * \param operador2: numero B
 * \param *pResultado: puntero a resultado final
 * \return 0
 */
int utn_multiplicacion(float operador1, float operador2, float* pResultado){
	*pResultado=operador1*operador2;
	return 0;
}
//------------------------------------------------------------------------------------------------------------------------------------------
/**
 * \brief divide dos numeros (A/B)
 * \param operador1: numero A
 * \param operador2: numero B
 * \param *pResultado: puntero a resultado final
 * \return 0
 */
int utn_division(float operador1,float operador2, float* pResultado){
	int retorno=-1;
	if(operador2!=0){
		*pResultado=operador1/operador2;
		retorno=1;
	}
	return retorno;
}
//------------------------------------------------------------------------------------------------------------------------------------------
/**
 * \brief obtiene el factorial de un numero (A*A-1*A-n)
 * \param operador: numero A
 * \param *pResultado: puntero a resultado final
 * \return 0
 */
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

