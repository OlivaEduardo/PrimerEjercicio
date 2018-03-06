//Prueba de funcionamiento de Macros.

#include <stdio.h>
#include "iostream"

//La siguiente macro calcula la suma de dos numeros dados. Con corrección.
#define SUMA(a, b) (a + b)

int num1;
int num2;


int main(void)
{
	printf("Ingrese un primer numero: ");
	std::cin >> num1;
	printf("Ingrese segundo numero: ");
	std::cin >> num2;
	printf("El cuadrado de la suma de los numeros ingresados es: %d \n", SUMA(num1, num2) * SUMA(num1, num2));
	printf("Ingrese un numero para salir: ");
	std::cin >> num1;
	return 0;
}