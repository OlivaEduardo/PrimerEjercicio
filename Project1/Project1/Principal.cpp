//Prueba de funcionamiento de Macros.

#include "iostream"

//La siguiente macro calcula la suma de dos numeros dados.
#define SUMA(a, b) ((a) + (b))

int main(void)
{
	std::cout << "Ingrese un primer numero: ";
	int primerNumero = 0;
	std::cin >> primerNumero;

	std::cout << "Ingrese segundo numero: ";
	int segundoNumero = 0;
	std::cin >> segundoNumero;

	const int suma = SUMA(primerNumero, segundoNumero);

	std::cout << "El cuadrado de la suma de los numeros ingresados es: " << suma * suma << "\n";
	std::cout << "Ingrese un numero para salir: ";
	std::cin >> primerNumero;

	return 0;
}