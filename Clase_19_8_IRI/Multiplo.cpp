#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

//Verifica si un numero es multiplo del otro

int main()
{
	entero num1, num2;

	imprimir << " ingrese un numero: ";
	leer >> num1;
	imprimir << " ingrese un numero: ";
	leer >> num2;

	si(num1 % num2 == 0)entonces
		imprimir << num1 << " es multiplo de " << num2;
	sino
		imprimir << num1 << " no es multiplo de " << num2;
	fin_si

		imprimir << salto_linea;

	system("pause");
	return 0;
}