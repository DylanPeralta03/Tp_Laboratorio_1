/*
 * mostrar.c
 *
 *  Created on: 16 abr. 2022
 *      Author: USURIO
 */

#include <stdio.h>

void calculosAerolines(int tarjetaDeDebitoAerolineas, float tarjetaDeCreditoAerolineas, float bitcoinAerolineas, float precioUnitarioAerolineas){

	printf("tarjeta de debito aerolineas %d\n",tarjetaDeDebitoAerolineas);
	printf("tarjeta de credito aerolineas %2.f\n",tarjetaDeCreditoAerolineas);
	printf("el precio en bitcoin aerolineas %f\n",bitcoinAerolineas);
	printf("el precio unitario de aerolineas es %2.f\n\n",precioUnitarioAerolineas);
}

void calculosLatam(int tarjetaDeDebitoLatam, float tarjetaDeCreditoLatam, float bitcoinLatam, float precioUnitarioLatam){

	printf("tarjeta de debito Latam %d\n",tarjetaDeDebitoLatam);
	printf("tarjeta de credito Latam %2.f\n",tarjetaDeCreditoLatam);
	printf("el precio en bitcoin Latam %f\n",bitcoinLatam);
	printf("el precio unitario de Latam es %2.f\n",precioUnitarioLatam);
}

void diferenciaPrecios(int diferencia){

	if(diferencia<0)
	{
		diferencia*=-1;
		printf("la diferencia de precios es de %d \n \n\n", diferencia);
	}
	else
	{
		printf("la diferencia de precios es de %d \n \n\n", diferencia);
	}
}
