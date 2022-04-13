/*
 * utn_calculos.c
 *
 *  Created on: 13 abr 2022
 *      Author: cande
 */

#include <stdio.h>
#include <stdlib.h>

int DatosIngreso()
{
    int kilometros;

    printf ("Ingrese los kilometros\n");
    scanf("%d", &kilometros);
}

float IngresoPrecioLatam()
{
    float precioLatam;
    printf("Ingrese precio de vuelo de Latam\n");
    scanf("%f",&precioLatam);
}
float IngresoPrecioAerolinea()
{
    float precioAerolinea;
    printf("Ingrese precio de vuelo de Aerolineas\n");
    scanf("%f",&precioAerolinea);
}


float TiposDePagos()
{
    precioDebitoAerolinea=PagarDebito(precioAerolinea);
    precioCreditoAerolinea=PagarCredito(precioAerolinea);
    precioBtcAerolinea=PagarBtc(precioAerolinea);
    precioUnitarioAerolinea=CalculoUnitario(precioAerolinea,kilometros);

    precioDebitoLatam=PagarDebito(precioLatam);
    precioCreditoLatam=PagarCredito(precioLatam);
    precioBtcLatam=PagarBtc(precioLatam);
    precioUnitarioLatam=PalculoUnitario(precioLatam,kilometros);

    CalcularDiferencia(precioLatam,precioAerolinea);
}

float PagarDebito(float precioIngresado)
{
    float precioDebito;
    float descuento;

    descuento=precioIngresado*0.10;
    precioDebito=precioIngresado-descuento;

    return precioDebito;

}
float PagarCredito(float precioIngresado)
{
    float precioCredito;
    float aumento;

    auemento=precioIngresado*25/100;
    precioCredito= precioIngresado+ aumento;

    return precioCredito;
}
float PagarBtc(float precioIngresado)
{
	float precioBtc;
	float unBtc;

	unBtc = 4606954.55;
	precioBtc = precioIngresado / unBtc;

	return precioBtc;
}
float CalculoUnitario(float precioIngresado, int kilometrosIngresados)
{
    float precioUnitario;

    precioUnitario=  precioIngresado/kilometrosIngresados;

    return precioUnitario;
}
float CalcularDiferencia(float precio1,  float precio2)
{
    float diferencia;

    diferencia=precio1-precio2;

    return diferencia;

}

void CargaDeDatos()
{
    float kilometros;
    float precioLatam;
    float precioAerolinea;
    float diferencia;
    kilometros=7090
    precioAerolinea=162965
    precioLatam=159339

                printf("\n\nKMs Ingresados: %.2f km",kilometros);
                printf("\n\nPrecio Latam: $%.2f\n",precioLatam);
                printf("a)Precio con tarjeta de debito: %.2f \n",PagarDebito(precioLatam));
                printf("b) Precio con tarjeta de crédito: %.2f \n",PagarCredito(precioLatam));
                printf("c) Precio pagando con bitcoin : %.6f \n",PagarBtc(precioLatam));
                printf("d) Precio unitario: %.2f \n",CalculoUnitario(precioLatam,kilometros));

                printf("\n\nKMs Ingresados: %.2f km",kilometros);
                printf("\n\nPrecio Aerolineas: $%.2f\n",precioAerolinea);
                printf("a)Precio con tarjeta de debito: %.2f \n",PagarDebito(precioAerolinea));
                printf("b) Precio con tarjeta de crédito: %.2f \n",PagarCredito(precioAerolinea));
                printf("c) Precio pagando con bitcoin : %.6f \n",PagarBtc(precioAerolinea));
                printf("d) Precio unitario: %.2f \n",CalculoUnitario(precioAerolinea,kilometros));
                prinft ("La diferencia de precio es : %.2f \n",calcularDiferencia);

}


