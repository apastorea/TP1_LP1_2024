/*
 ============================================================================
 Name        : RedInalambrica.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//#include <graphics.h>
#include "entradas.h"
#include "procesamiento.h"
#include "salida.h"
#include "red.h"



int main(void)
{

	int mAux[X_MAX][Y_MAX]; //matriz auxiliar donde se va a trabajar

	//CERAR MATRIZ AUXILIAR
	ClearMatriz( mAux );


	//INGRESAR DATOS DE MATRIZ
		//LECTURA DE MATRIZ DE AP
	if( !(LeerMatrizAP( ap, mAux )) )
		printf("\nNo se pudo leer la matriz de AP");

		//LECTURA DE MATRIZ DE COMPUTADORAS
	if( !(LeerMatrizComputadoras( comp, mAux )) )
			printf("\nNo se pudo leer la matriz de computadoras");

	//PROCESAR DATOS DE MATRIZ

	//IMPRIMIR SALIDA DE DATOS

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
