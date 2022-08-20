#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

enum Meses{Enero,Febrero,Marzo,Abril,Mayo,Junio,Julio,Agosto,Septiembre,Octobre,Noviembre,Diciembre};

//

int main()
{
	entero numero;

	imprimir << "Ingrese un numero del 1 al 12: ";
	leer >> numero;

	segun(numero)hacer
		caso(1)
		      imprimir << Meses::Enero;
	          alto  
		caso(2)
			  imprimir << Meses::Febrero;
			  alto
		caso(3)
			  imprimir << Meses::Marzo;
			  alto
		caso(4)
			  imprimir << Meses::Abril;
			  alto
		caso(5)
			  imprimir << Meses::Mayo;
			  alto
		caso(6)
			  imprimir << Meses::Junio;
			  alto
		caso(7)
			  imprimir << Meses::Julio;
			  alto
		caso(8)
			  imprimir << Meses::Agosto;
			  alto
		caso(9)
			  imprimir << Meses::Septiembre;
			  alto
		caso(10)
			  imprimir << Meses::Octobre;
			  alto
		caso(11)
			  imprimir << Meses::Noviembre;
			  alto
		caso(12)
			  imprimir << Meses::Diciembre;
			  de_otro_modo
				  imprimir << "Numero invalido";
			  fin_segun


	imprimir << salto_linea;
	system("pause");
	return 0;
}