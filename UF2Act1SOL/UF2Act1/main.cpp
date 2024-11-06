#include <iostream>
#include <cmath>
#include "MathLibrary.h"

#pragma region ACT 1
/*void main() {
	short numero;

	std::cout << "Introduce un numero: " << std::endl;
	std::cin >> numero;

	std::cout << "El valor absoluto de " << numero << " es: " << abs(numero);
} */
#pragma endregion

#pragma region ACT2
/*int suma(int a, int b) {
	std::cout << "Introduce dos numeros: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	return a + b;
}

int resta(int a, int b) {
	std::cout << "Introduce dos numeros: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	return a - b;
}

int multiplicacion(int a, int b) {
	std::cout << "Introduce dos numeros: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	return a * b;
}

int division (int a, int b) {
	std::cout << "Introduce dos numeros: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	return a / b;
}

void main() {
	short input;

	std::cout << "Que quieres hacer?" << std::endl;
	std::cout << "1. Sumar" << std::endl;
	std::cout << "2. Restar" << std::endl;
	std::cout << "3. Multiplicar" << std::endl;
	std::cout << "4. Dividir" << std::endl;
	std::cout << "5. Salir" << std::endl;
	std::cin >> input;

	do {
		switch (input)
		{
		case 1:
			std::cout << suma();
			break;
		case 2:
			std::cout << resta();
			break;
		case 3:
			std::cout << multiplicacion();
			break;
		case 4:
			std::cout << division();
			break;
		case 5:
			break;
		default:
			std::cout << "Valor no valido";
		}
	} while (input != 5) {
			break;
	}
}*/
#pragma endregion

#pragma region ACT3
/*
void numerosPares(int arrayEnteros[]) {
	for (int i = 0; i < 10; i++) {
		if (arrayEnteros[i] % 2 == 0) {
			std::cout << arrayEnteros[i] << " ";
		}
	}
}

void main() {
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	numerosPares(array);
}
*/
#pragma endregion

#pragma region ACT4
void comprobador(int* num) {

	if (*num % 2 == 0) {
		*num = 1;
	}
}

void main() {
	;
	int numero;

	std::cout << "Introduce un numero: " << std::endl;
	std::cin >> numero;

	comprobador(&numero);
	std::cout << "El valor del numero despues de la modificacion es: " << numero << std::endl;
}
#pragma endregion