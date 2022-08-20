#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

/*Aceptar 4 enteros por teclado: p, q, r y s. Restricciones: r y s son positivos y p es par. Si q es más 
grande que r y s es más grande que p y la suma de r y s es más grande que la suma de p y q 
imprimir: “Valores correctos”, de otra manera imprimir “Valores incorrectos”.*/
int main()
{
	entero p = 0, q = 0, r = 0, s = 0;

	imprimir << "Ingrese un numero para 'p': ";
	leer >> p;
	imprimir << "Ingrese un numero para 'q': ";
	leer >> q;
	imprimir << "Ingrese un numero para 'r': ";
	leer >> r;
	imprimir << "Ingrese un numero para 's': ";
	leer >> s;

	imprimir << salto_linea;

	si((r > 0)y_(s > 0)y_(p % 2 == 0))entonces
		si((q > r)y_(s > p)y_(r + s > p + q))entonces
		    imprimir << "Valores correctos";
	    sino
		    imprimir << "Valores incorrectos";
		 fin_si
	 sino
	   imprimir << "No se cumplen las condiciones";
		 fin_si
			 imprimir << salto_linea;

	system("pause");
	return 0;
}