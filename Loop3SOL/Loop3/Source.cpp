#include <iostream>
#include <string>
#include <time.h>

#pragma region WHILE
/*void main()
{
	std::string decision;

	while (decision != "si" || decision != "Si") {
		std::cout << "Quieres cerrar el programa?" << std::endl;
		std::cin >> decision;
	}
} */
#pragma endregion
#pragma region WHILE 2
/*void main() {
	int numeroUsuario = -1;
	int pares;
	int impares;

	while (numeroUsuario != 0) {
		std::cout << "Dime un numero: " << std::endl;
		std::cin >> numeroUsuario;
		if((numeroUsuario%2)==0) {
			pares += numeroUsuario;
		}
		else {
			impares += numeroUsuario;
		}
	}
	std::cout << "Pares: " << pares << std::endl;
	std::cout << "Impares: " << impares << std::endl;
}*/
#pragma endregion
#pragma region WHILE 3
/* void main()
{
	srand(time(NULL));
	int fallos = 0;
	int recuentoAciertos = 0;

	while (!fallos){
		int numero1 = rand() % 9 + 1;
		int numero2 = rand() % 9 + 1;
		int resultado = numero1 * numero2;

		std::cout << "Cuanto es: " << numero1 << "*" << numero2 << std::endl;
		std::cin >> resultado;

		if (resultado == numero1 * numero2) {
			recuentoAciertos++;
		}
		else {
			fallos++;
			std::cout << "Has acertado " << recuentoAciertos << " multiplicaciones." << std::endl;
		}
	}
}*/
#pragma endregion
#pragma region FOR 1
/*void main()
{
	short numero = 0;
	std::cout << "introduce un numero: " << std::endl;
	std::cin >> numero;

	for (short restante = 0; restante -1 != numero; restante++) {
		std::cout << restante << std::endl;
	}
} */
#pragma endregion
#pragma region FOR 2
/*void main()
{
	short userInput = 0;
	float promedio = 0;

	for (short cuenta = 0; cuenta <= 10; cuenta++) {
		std::cout << "Dime un numero positivo: " << std::endl;
		std::cin >> userInput;
		while (userInput < 0) {
			std::cout << "El numero introducido es negativo, introduce un numero positivo: " << std::endl;
			std::cin >> userInput;
		}
		promedio = userInput + promedio;
	}
	std::cout << "El promedio es: " << promedio / 10;
}*/
#pragma endregion
#pragma region DO WHILE 1
/*void main() {
	short menu;
	float numero1, numero2;
	do {
		std::cout << "Que quieres hacer?" << std::endl;
		std::cout << "1. Sumar" << std::endl;
		std::cout << "2. Restar" << std::endl;
		std::cout << "3. Multiplicar" << std::endl;
		std::cout << "4. Dividir" << std::endl;
		std::cout << "5. Salir del programa" << std::endl;
		std::cin >> menu;
		switch (menu) {
		case 1:
			std::cout << "Dime un numero: " << std::endl;
			std::cin >> numero1;
			std::cout << "Dime otro numero: " << std::endl;
			std::cin >> numero2;
			std::cout << "El resultado de la suma es: " << numero1 + numero2 << std::endl;
			break;
		case 2:
			std::cout << "Dime un numero: " << std::endl;
			std::cin >> numero1;
			std::cout << "Dime otro numero: " << std::endl;
			std::cin >> numero2;
			std::cout << "El resultado de la resta es: " << numero1 - numero2 << std::endl;
			break;
		case 3:
			std::cout << "Dime un numero: " << std::endl;
			std::cin >> numero1;
			std::cout << "Dime otro numero: " << std::endl;
			std::cin >> numero2;
			std::cout << "El resultado de la multiplicacion es: " << numero1 * numero2 << std::endl;
			break;
		case 4:
			std::cout << "Dime un numero: " << std::endl;
			std::cin >> numero1;
			std::cout << "Dime otro numero: " << std::endl;
			std::cin >> numero2;
			std::cout << "El resultado de la division es : " << numero1 / numero2 << std::endl;
			break;
		case 5:
			std::cout << "Saliendo del programa..." << std::endl;
		}
	} while (menu != 5);
}*/
#pragma endregion
#pragma region PIRAMIDE
/*void main()
{
	int userInput, numeroEscribir = 1;

	std::cout << "Cuantas filas quieres que tenga tu triangulo? " << std::endl;
	std::cin >> userInput;

	for (int fila = 0; fila <= userInput; fila++) {
		for (int columna = 0; columna <= fila; columna++) {
			std::cout << " " << numeroEscribir;
			numeroEscribir++;
		}
		std::cout << " " << std::endl;
	}
}*/
#pragma endregion
#pragma region CONTINUE Y BREAK
void main()
{
	int numero1, numero2, numerosEntremedio;
	std::cout << "Introduce un numero: " << std::endl;
	std::cin >> numero1;
	std::cout << "Introduce otro numero: " << std::endl;
	std::cin >> numero2;
	numerosEntremedio = numero1 + 1;

	while (numerosEntremedio != numero2) {
		std::cout << numerosEntremedio;
		numerosEntremedio++;
		if (numero1 || numero2 % 2 == 0) {
			continue;
		}
		else if (numero1 || numero2 % 7 == 0) {
			break;
		}
	}
}
#pragma endregion