#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

//Crear la estructura fracción. Leer por pantalla los valores de numerador y denominador. 
//Devolver el resultado de la división(en decimales).

int main()
{
	decimal Numerador1, Denominador1, Numerador2, Denominador2;
	decimal suma = 0.0, resta=0.0,multiplicacion=0.0,division=0.0;

	imprimir << "Ingrese el valor del numeraodr: ";
	leer >> Numerador1;
	imprimir << "Ingrese el valor del denominador: ";
	leer >> Denominador1;
	imprimir << "Ingrese el valor del numerador: ";
	leer >> Numerador2;
	imprimir << "Ingrese el valor del denominador: ";
	leer >> Denominador2;

	suma = (Numerador1 / Denominador1)+ (Numerador2 / Denominador2);
	resta = (Numerador1 / Denominador1) - (Numerador2 / Denominador2);
	multiplicacion = (Numerador1 / Denominador1) * (Numerador2 / Denominador2);
	division = (Numerador1 / Denominador1) / (Numerador2 / Denominador2);

	imprimir << " Suma  de " <<Numerador1 <<"/"  <<Denominador1  <<" y " << Numerador2 <<"/"  <<Denominador2  << " es: " <<suma;
	imprimir << salto_linea;
	imprimir << " Resta de "<< Numerador1 << "/" << Denominador1 << " y " << Numerador2 << "/" << Denominador2 << " es: " << resta;
	imprimir << salto_linea;
	imprimir << " Multiplicacion  de " << Numerador1 << "/" << Denominador1 << " y " << Numerador2 << "/" << Denominador2 << " es: " << multiplicacion;
	imprimir << salto_linea;
	imprimir << " Division  de " << Numerador1 << "/" << Denominador1 << " y " << Numerador2 << "/" << Denominador2 << " es: " << division;

	imprimir << salto_linea;
	system("pause");
	return 0;
}