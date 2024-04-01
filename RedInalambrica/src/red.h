/*
 * red.h
 *
 *  Created on: 31 mar. 2024
 *      Author: lp1-2023
 */

#ifndef RED_H_
#define RED_H_

#define N_AP 2 // Cantidad de puntos de acceso
#define N_COMP 3 // Cantidad de computadoras
// Información sobre cada uno de los puntos de acceso:
// Cada fila corresponde a un punto de acceso, el primer dato
// es la coordenada X y el segundo la coordenada Y. El tercer dato
// es la cantidad de computadoras que puede atender.
int ap[N_AP][3] = {{5, 5, 2},
				{6, 9, 2}};
// Coordenadas de cada computadora, las computadoras se van introduciendo
// en orden, la primera fila es la primera computadora en ser instalada
// la segunda fila es la segunda computadora y así sucesivamente
int comp[N_COMP][2] = {{3, 5},
					{5, 2},
					{4, 2}};

#endif /* RED_H_ */
