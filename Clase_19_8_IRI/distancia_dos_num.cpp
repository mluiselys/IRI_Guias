#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

int main()
{
	entero x1, x2, y1, y2;
	decimal distancia = 0;

	
	imprimir << "Ingrese coordenara x1: ";
	leer >> x1;
	imprimir << "Ingrese coordenara x2: " ;
	leer >> x2;
	imprimir << "Ingrese coordenara y1: ";
	leer >> y1;
	imprimir << "Ingrese coordenara y2: ";
	leer >> y2;

	distancia = sqrt((pow(x2 - x1, 2) + (pow(y2 - y1, 2))));

	imprimir << "Distancia entre (" << x1 << " , " << x2 << ") y (" << y1 << ", " << y2 << ") es: " << distancia;
	imprimir << salto_linea;

	system("pause");
	return 0;
}