#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

/* Leer 3 números flotantes y chequear si es posible hacer un triángulo con ellos. También 
calcular el perímetro del triángulo si los valores ingresados son válidos.*/
int main()
{
	decimal x1, x2, y1, y2, z1, z2;
	decimal distanciaXY = 0.0, distanciaXZ = 0.0, distanciaYZ = 0.0;


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

	/*si((x1==y1) y_ (x2==y2) y_ (x1==z1) y_ (x2==z2))entonces
		imprimir << "Es un triangulo equilatero";
	    imprimir << salto_linea;
		imprimir << "Perimetro del triangulo = " << (distanciaXY+distanciaXZ+distanciaYZ);
		sino si((x1==y2)y_(x2==y2)y_(y1==z1)y_(y2==z2))entonces
			imprimir << "Es un triangulo isoceles";
		    imprimir << salto_linea;
		    imprimir << "Perimetro del triangulo = " << ((2*distanciaXY)+distanciaXZ);
			       sino si((x1 == z1)y_(x2 == z2))entonces
				         imprimir << "Perimetro del triangulo = " << ((2 * distanciaXY) + distanciaXZ);
				sino si((z1 == y1)y_(z2 == y2))entonces

			
	fin_si
	*/
	system("pause");
	return 0;
}