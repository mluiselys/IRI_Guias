#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

/* Convertir un entero dado en segundos a horas, minutos y segundos*/
int main()
{
	
	entero segundos_dados = 25300, minutos, segundo, horas;

	horas = segundos_dados / 3600;
	minutos = (segundos_dados % 3600) / 60;
	segundo = (segundos_dados % 3600) % 60;


	imprimir << "Horas: " << horas;
	imprimir << salto_linea;
	imprimir << "Minutos: " << minutos;
	imprimir << salto_linea;
	imprimir << "segundos: " << segundo;
	imprimir << salto_linea;

	system("pause");
	return 0;
}