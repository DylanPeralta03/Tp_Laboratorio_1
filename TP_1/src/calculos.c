/*
 * calculos.c
 *
 *  Created on: 16 abr. 2022
 *      Author: USURIO
 */
#include <stdio.h>

int multiplicacion(int precio, float x){
	int resultado;

	resultado = precio * x;

	return resultado;
}

float diviciones(int precio,float y){
	float resultado;

	resultado = precio / y;

	return resultado;
}

int diferencia(int precioL, int precioA){
	int resultado;

	resultado = precioL - precioA;

	return resultado;
}
