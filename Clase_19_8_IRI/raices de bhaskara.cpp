#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

/*. Imprimir las raíces de la fórmula de Bhaskara dados 3 números flotantes. Imprima en pantalla 
un mensaje si no es posible encontrar las raíces.*/
int main()
{

	decimal a, b, c, R1=0.0,R2=0.0; //formula (b^2 - 4(a)(c))
	decimal Barshak;


	imprimir << "FORMULA= (b^2) - 4(a)(c)";
	imprimir << salto_linea;
	imprimir << "Ingrese numero para 'a': ";
	leer >> a;
	imprimir << "Ingrese numero para 'b': ";
	leer >> b;
	imprimir << "Ingrese numero para 'c': ";
	leer >> c;

	Barshak = ((b * b) -(4 *a *c));
	

	si(Barshak < 0)entonces
		imprimir << "Raices imaginarias, intente de nuevo!";
	    imprimir << salto_linea;
	sino
			R1 = ((-b) + sqrt(Barshak)) / (2 * a);
		    R2 = ((-b) - sqrt(Barshak)) / (2 * a);
			imprimir << "R1 = " << R1;
			imprimir <<salto_linea;
			imprimir << "R2 = " << R2;
	fin_si

		imprimir << salto_linea;

	system("pause");
	return 0;
}