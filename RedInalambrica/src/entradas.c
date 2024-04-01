/*
 * entradas.c
 *
 *  Created on: 29 mar. 2024
 *      Author: lp1-2023
 */
#include <stdio.h>
#include <stdlib.h>
#include "procesamiento.h"
#include "salida.h"
#include "red.h"

#define X_MAX 10	//CANTIDAD MAXIMA DE FILAS DE LA MATRIZ
#define Y_MAX 10	//CANTIDAD MAXIMA DE COLUMNAS DE LA MATRIX

//FUNCION PARA CERAR LA MATRIZ DE MANERA INICIAL
void ClearMatriz( int m[][])
{
	int i, j;
	for(i = 0; i < X_MAX; i++)
	{
		for(j = 0; j < Y_MAX; j++)
			m[i][j] = 0;
	}
}
//FUCION QUE LEE LA MATRIZ DE AP
int LeerMatrizAP(int mAP[][3], m[][])
{
	return 1;
}

//FUNCION QUE LEE LA MATRIZ DE COMPUTADORAS
void LeerMatrizComputadoras(int mComputadoras[][2],m[][])
{
	return 1;
}
