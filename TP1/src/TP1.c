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
float numeroA;
float numeroB;
int opcion;

utn_getnumero(&numeroA, "Ingrese un numero\n", "Error\n", 2);
utn_getnumero(&numeroB, "Ingrese un numero\n", "Error\n", 2);
utn_getnumeroRango(&opcion, "Ingrese una opcion\n", "ERROR\n", 2, 3, 1);






return 0;
}

