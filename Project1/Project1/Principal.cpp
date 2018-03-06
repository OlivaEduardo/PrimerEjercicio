//Prueba de funcionamiento de Macros.

#include "iostream"

//La siguiente macro calcula la suma de dos numeros dados.
#define SUMA(a, b) a + b

int num1;
int num2;


int main(void)
{
	std::cout << "Ingrese un primer numero: ";
	std::cin >> num1;
	std::cout << "Ingrese segundo numero: ";
	std::cin >> num2;
	std::cout << "El cuadrado de la suma de los numeros ingresados es: " << SUMA(num1, num2) * SUMA(num1, num2) << "\n";
	std::cout << "Ingrese un numero para salir: ";
	std::cin >> num1;
	return 0;
}