//#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"
#define N 6
#define M 5


int main()
{
	para(entero j) = 0 hasta(j) N paso(j) 1 hacer    //filas
		para(entero i) = 0 hasta(i) M paso(i) 1 hacer //columnas
		 si( /*(j == -i + 8)o_*/ (i==0)o_ /*(i==8)o_ */(j==0)/*o_ (j==8)o_ (j==i)*/o_(j==2))entonces // j==-i+8 te da la diagonal del (00 al 88)
		    imprimir << "#";                                                        
	     sino
		    imprimir << " ";
	     
		 fin_si
			 si(j == 2 y_ i == 4)entonces
			 imprimir << " ";
		 fin_si
	   fin_para
		  imprimir << salto_linea;
	fin_para

	

    system("pause");
	return 0;
}