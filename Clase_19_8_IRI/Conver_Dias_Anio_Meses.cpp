#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

/*Convertir una cantidad específica de días (ingresado por teclado) en años, semanas y días */
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