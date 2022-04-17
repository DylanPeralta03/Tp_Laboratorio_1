/*
 ============================================================================
 Name        : TP_1.c
 Author      : Dylan Peralta Div K

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include "calculos.h"
#include "mostrar.h"

int main(void)
{
	setbuf(stdout, NULL);
	int opcion;
	int precioAerolineas;
	int precioLatam;
	int kilometros;

	int tarjetaDeDebitoAerolineas;
	float tarjetaDeCreditoAerolineas;
	float bitcoinAerolineas;
	float precioUnitarioAerolineas;

	int tarjetaDeDebitoLatam;
	float tarjetaDeCreditoLatam;
	float bitcoinLatam;
	float precioUnitarioLatam;

	float valorBitcoin;
	valorBitcoin= 4606954.55;

	int diferenciaDePrecios;
	int banderaCalculos;

	do
	{
		printf("1-Ingresar Kilometros\n2-Ingresar Precio de Vuelos: \n3-Calcular todos los costos \n4-Informar Resultados \n5-Carga forzada de datos\n6-Salir\n");
		scanf("%d",&opcion);

		switch(opcion)										//opciones del menu
		{
			case 1:
			kilometros= pedirEnteroPositivo("Ingrese los kilometros: ","Error ingreso cero o un numero no positivo, reingrese los kilometros: ");
			printf("Kilometros: %d\n", kilometros);
			break;

			case 2:
			precioAerolineas= pedirEnteroPositivo("Ingrese el precio de Aerolineas:","Error, ingrese un precio mayor a cero");
			printf("El precio del vuelo en Aerolineas es de:%d \n", precioAerolineas);
			precioLatam= pedirEnteroPositivo("Ingrese el precio de Latam:","Error, ingrese un precio mayor a cero");
			printf("El precio del vuelo con Latam: %d\n",precioLatam);
			break;

			case 3:
			tarjetaDeDebitoAerolineas= multiplicacion(precioAerolineas, 0.9);
			tarjetaDeCreditoAerolineas= multiplicacion(precioAerolineas, 1.25);
			bitcoinAerolineas= diviciones(precioAerolineas, valorBitcoin);
			precioUnitarioAerolineas= diviciones(precioAerolineas,kilometros);

			tarjetaDeDebitoLatam= multiplicacion(precioLatam, 0.9);
			tarjetaDeCreditoLatam= multiplicacion(precioLatam, 1.25);
			bitcoinLatam= diviciones(precioLatam, valorBitcoin);
			precioUnitarioLatam= diviciones(precioLatam, kilometros);
			diferenciaDePrecios= diferencia(precioLatam, precioAerolineas);
			banderaCalculos=1;
			break;

			case 4:
			//aerolineas datos
			if(banderaCalculos==1)
			{
				calculosAerolines(tarjetaDeDebitoAerolineas, tarjetaDeCreditoAerolineas, bitcoinAerolineas, precioUnitarioAerolineas);
			//latam datos
				calculosLatam(tarjetaDeDebitoLatam, tarjetaDeCreditoLatam, bitcoinLatam, precioUnitarioLatam);

    			diferenciaPrecios(diferenciaDePrecios);
			}
			else
			{
				printf("\nError, calcule antes de imprimir el resultado (boton 3)");
			}

			break;

			case 5:
			kilometros= 7090;
			precioAerolineas= 162965;
			precioLatam= 159339;
			break;

			case 6:
			printf("Has salido\n");
			break;

			default:
			printf("Error, no ingreso una opcion correcta\n");
			break;


			}

	}while(opcion != 6);

	return 0;
}















