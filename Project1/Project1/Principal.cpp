//Prueba de funcionamiento de Macros.

#include <stdio.h>

//La siguiente macro calcula la suma de dos numeros dados. Con corrección.
#define SUMA(a, b) (a + b)

int num1;
int num2;


int main(void)
{
	printf("Ingrese un primer numero: ");
	scanf_s("%d", &num1);
	printf("Ingrese segundo numero: ");
	scanf_s("%d", &num2);

	//Ahora se calcula correctamente (num1 + num2) * (num1 + num2)
	printf("El cuadrado de la suma de los numeros ingresados es: %d \n", SUMA(num1, num2) * SUMA(num1, num2));
	printf("Ingrese un numero para salir: ");
	scanf_s("%d", &num2);
	return 0;
}