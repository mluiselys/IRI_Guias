#include "Clase_19_8_IRI.h"
#include "PseudoCodeWrapper.hpp"
#define PI 3.1416
/// Calcula el perimetro y el area de un circula, con radio pedido por pantalla
/// </summary>
/// <returns></returns>
int main()
{
	decimal Radio;

	imprimir << "Ingrese el radio de la circunferencia: ";
	leer >> Radio;

	imprimir << "Perimetro de la circunferencia: " << (2 * PI * Radio) << "\n";
	imprimir << "Area de la circunferencia: " << (2 * PI * (Radio * Radio)) << "\n";

	system("pause");
	return 0;
}