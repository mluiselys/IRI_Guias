#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

/*Convertir una cantidad espec�fica de d�as (ingresado por teclado) en a�os, semanas y d�as */
int main()
{
	entero dias_ingresados = 1329, days,years,weeks;
	
	years = dias_ingresados / 365;
	weeks = (dias_ingresados % 365) / 7;
	days = (dias_ingresados % 365) % 7;


	imprimir << "Years: " << years;
	imprimir << salto_linea;
	imprimir << "weeks: " << weeks;
	imprimir << salto_linea;
	imprimir << "days: " << days;
	imprimir << salto_linea;

	system("pause");
	return 0;
}