#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

//. Leer 5 números y contar cuántos de ellos son positivos y cuántos negativos

int main()
{
	entero cont_neg = 0, cont_pos = 0;
	entero vectro[6] = { -3,4,-1,6,-2,-9 };

	para(entero i) = 0 hasta(i) 5 paso(i)1 hacer
		si(vectro[i] > 0)entonces
		   cont_pos++;
	sino
		cont_neg++;
	fin_si
		fin_para

		imprimir << "Cantidad de numero negativos: " << cont_neg;
	    imprimir << salto_linea;
	    imprimir << "Cantidad de numeros positvos: " << cont_pos;
		imprimir << salto_linea;

	system("pause");
	return 0;
}