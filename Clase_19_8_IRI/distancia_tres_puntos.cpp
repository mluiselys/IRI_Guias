#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

int main()
{
	entero x1, x2, y1, y2,z1,z2;
	decimal distanciaXY = 0.0,distanciaXZ=0.0, distanciaYZ=0.0;


	imprimir << "Ingrese coordenara x1: ";
	leer >> x1;
	imprimir << "Ingrese coordenara x2: ";
	leer >> x2;
	imprimir << "Ingrese coordenara y1: ";
	leer >> y1;
	imprimir << "Ingrese coordenara y2: ";
	leer >> y2;
	imprimir << "Ingrese coordenara z1: ";
	leer >> z1;
	imprimir << "Ingrese coordenara z2: ";
	leer >> z2;

	distanciaXY = sqrt((pow(y2 - y1, 2) + (pow(x2 - x1, 2))));
	distanciaXZ = sqrt((pow(z2 - z1, 2) + (pow(x2 - x1, 2))));
	distanciaYZ = sqrt((pow(z2 - z1, 2) + (pow(y2 - y1, 2))));

	imprimir << "Distancia entre (" << x1 << " , " << x2 << ") y (" << y1 << ", " << y2 << ") es: " << distanciaXY;
	imprimir << salto_linea;
	imprimir << "Distancia entre (" << x1 << " , " << x2 << ") y (" << z1 << ", " << z2 << ") es: " << distanciaXZ;
	imprimir << salto_linea;
	imprimir << "Distancia entre (" << y1 << " , " << y2 << ") y (" << z1 << ", " << z2 << ") es: " << distanciaYZ;
	imprimir << salto_linea;

	system("pause");
	return 0;
}