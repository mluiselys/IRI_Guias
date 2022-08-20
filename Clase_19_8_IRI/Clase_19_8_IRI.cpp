// Clase_19_8_IRI.cpp : Defines the entry point for the application.
//

#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

using namespace std;

//Imprimimos nombre, nacimiento y numero telefono de la persona
int main()
{
	texto Nombre;
	reales Nacimiento_dia;
	reales Nacimiento_mes;
	reales Nacimiento_anio;
	reales Numero_telf;

	imprimir << "ingrese su nombre: ";
	leer >> Nombre;

	imprimir << "ingrese su dia de nacimiento: ";
	leer >> Nacimiento_dia;

	imprimir << "ingrese su mes de nacimiento: ";
	leer >> Nacimiento_mes;

	imprimir << "ingrese su anio de nacimiento: ";
	leer >> Nacimiento_anio;

	imprimir << "ingrese su numero de telf: ";
	leer >> Numero_telf;


	imprimir << Nombre <<"\n"<< Nacimiento_dia <<"-"<< Nacimiento_mes << "-" << Nacimiento_anio << "\n" << Numero_telf<<"\t";

	system("pause");
	return 0;
}
