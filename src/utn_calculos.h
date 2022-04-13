/*
 * utn_calculos.h
 *
 *  Created on: 13 abr 2022
 *      Author: cande
 */

#ifndef UTN_CALCULOS_H_
#define UTN_CALCULOS_H_


int DatosIngreso();
float IngresoPrecioLatam();
float IngresoPrecioAerolinea();
float TiposDePagos();
float PagarDebito(float precioIngresado);
float PagarCredito(float precioIngresado);
float PagarBtc(float precioIngresado);
float CalculoUnitario(float precioIngresado, int kilometrosIngresados);
float CalcularDiferencia(float precio1,  float precio2);
void CargaDeDatos();



#endif /* UTN_CALCULOS_H_ */
