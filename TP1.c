/*
 ============================================================================
 Name        : TP1.c
 Author      : Candela Bernardez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_calculos.h"


int principal (void)
	{
		setbuf(stdout,NULL);
		int opcion;
		float precioVuelosLatam;
		float precioVuelosAerolineas;
		float kilometros;
		float precioDebitoAerolinea;
        float precioCreditoAerolinea;
        float precioBtcAerolinea;
        float precioUnitarioAerolinea;
        float precioDebitoLatam;
        float precioCreditoLatam;
        float precioBtcLatam;
        float precioUnitarioLatam;
        float calcularDiferencia;



	do
	{

        system("cls");
        printf(" \tMenu de Opciones \n\n");
        printf("1- Ingresar kilometros\n");
        printf("2-Ingresar precio de vuelo\n");
        printf("3- Costos de vuelo\n");
        printf("4-Resultados\n");
        printf("5-Carga de datos\n");
        printf("6-Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
			case 1:
                kilometros=DatosIngreso();
			break;
			case 2:
                precioVuelosAerolineas= IngresoPrecioAerolineas();
                precioVuelosLatam= IngresoPrecioLatam();
			break;
			case 3:
                    TiposDePagos();
			break;
			case 4:
			    printf("\n\nKMs Ingresados: %.2f km",kilometros);
                printf("\n\nPrecio Latam: $%.2f\n",precioVuelosLatam);
                printf("a)Precio con tarjeta de debito: %.2f \n",precioDebitoLatam);
                printf("b) Precio con tarjeta de crédito: %.2f \n",precioCreditoLatam);
                printf("c) Precio pagando con bitcoin : %.6f \n",precioBtcLatam);
                printf("d) Precio unitario: %.2f \n",precioUnitarioLatam);

                printf("\n\nKMs Ingresados: %.2f km",kilometros);
                printf("\n\nPrecio Latam: $%.2f\n",precioVuelosAerolineas);
                printf("a)Precio con tarjeta de debito: %.2f \n",precioDebitoAerolinea);
                printf("b) Precio con tarjeta de crédito: %.2f \n",precioCreditoAerolinea);
                printf("c) Precio pagando con bitcoin : %.6f \n",precioBtcAerolinea);
                printf("d) Precio unitario: %.2f \n",precioUnitarioAerolinea);
                prinft ("La diferencia de precio es : %.2f \n",calcularDiferencia);
			break;
			case 5:
                    CargaDeDatos();
			break;
			system("cls");

			}

	} while(opcion!=6);


	return EXIT_SUCCESS;
}


