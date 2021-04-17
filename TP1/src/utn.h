/*
 * utn.h
 *
 *  Created on: 17 abr. 2021
 *      Author: irina
 */

#ifndef UTN_H_
#define UTN_H_

void utn_imprimirMensaje (char* mensaje);
int utn_getnumero(float* numero,char* mensaje, char* mensajeError,int reintentos);
int utn_getnumeroRango(char* numero,char* mensaje, char* mensajeError,int reintentos, int maximo, int minimo);
int utn_suma(float operador1,float operador2,float* pResultado);
int utn_resta(float operador1, float operador2, float*pResultado);
int utn_multiplicacion(float operador1, float operador2, float* pResultado);
int utn_division(float operador1,float operador2, float* pResultado);
int utn_factorial(float operador, float*presultado);

#endif /* UTN_H_ */
