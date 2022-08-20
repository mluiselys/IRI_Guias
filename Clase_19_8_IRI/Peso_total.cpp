#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"

//Ingresar el peso de dos tipos de ítems y la cantidad de cada uno y calcular el peso total.
int main()
{
	decimal Maleta = 20.4, Bolso = 8.7;
	entero Cant_maletas = 2, cant_Bolso = 2;

	imprimir << "Peso total de las maletas es: " << decimal((Cant_maletas * Maleta))<< "\n";
	imprimir << "Peso total de los bolsos es: " << decimal((cant_Bolso * Bolso))<<"\n";
	system("pause");
	return 0;
}