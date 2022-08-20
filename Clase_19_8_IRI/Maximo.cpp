#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"
# define n 2

int main()
{
	
	entero Vector[3],max=n;

	para(entero i) = 0 hasta(i)3 paso(i)1 hacer
		imprimir << "Ingrese un numero: ";
	    leer >> Vector[i];
		fin_para

			para(entero i) = 0 hasta(i)3 paso(i)1 hacer
			si(Vector[i] > max)entonces
			max = Vector[i];
		    fin_si
    fin_para
				imprimir << "El maximo es: " << max << "\n";

	system("pause");
	return 0;
}