#include <iostream>
#include <string>
#include <time.h>
#pragma region ARRAY 1
/*void main()
{
	int Array[7];

	std::cout << Array;
} */
#pragma endregion
#pragma region ARRAY 2
/*void main()
{
	int Array[200] = {0};

	std::cout << Array;
}*/
#pragma endregion
#pragma region ARRAY 3
/*void main()
{
	int Array[3] = { 3, 5, Array[0]+Array[1]};

	std::cout << "La suma de " << Array[0] << " mas " << Array[1] << " es: " << Array[2];
}*/
#pragma endregion
#pragma region ARRAY 4
/*void main()
{
	const int cantidad = 100;
	int array[cantidad] = {};

	for (int i = 0; i < cantidad; i++) {
		array[i] = { i };
		std::cout << array[i] << std::endl;
	}
}*/
#pragma endregion
#pragma region ARRAY 5
/*void main()
{
	const int LongArray = 200;
	int array[LongArray] = {};

	for (int i = 0; i < LongArray; i++) {
		array[i] = i * i;
	}
	for (int j = 199; j >= 0; j--) {
		std::cout << array[j] << std::endl;
	}
}*/
#pragma endregion
#pragma region ARRAY 6
/*void main()
{
	const int arrayLength = 10;
	int array1[arrayLength] = {0,1,2,3,4,5,6,7,8,9};
	int array2[arrayLength] = {};

	for (int i = 0; i < arrayLength; i++) {
		array2[i] = array1[arrayLength - 1 - i];
		std::cout << array2[i] << std::endl;
	}
}*/
#pragma endregion
#pragma region MATRIZ 1 dw.
/*void main()
{
	srand(time(NULL));
	const int arrayLength = 50;
	int table[arrayLength][arrayLength];

	for (int i = 0; i <= arrayLength - 1; i++) {
		for (int j = 0; j <= arrayLength - 1; j++) {
			table[i][j] = std::rand() % 49 + 1;
		}
		for (int i = 0; i <= arrayLength - 1; i++) {
			for (int j = 0; j <= arrayLength - 1; j++) {
				std::cout << table[i][j] << "";
			}
		}
	}
} */
#pragma endregion
#pragma region MATRIZ 2 dw.
/*void main()
{
	int num = -1;
	const int lines = 10;
	const int columns = 20;

	int table[lines][columns] = {};
	int tableReves[lines][columns] = {};

	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < columns; j++) {
			table[i][j] = num++;
		}
	}
		for (int i = lines - 1; i > lines; i--) {
			for (int j = columns - 1; j > columns; j--) {
				std::cout << table[i][j] << " ";
			}
		}
	std::cout << "\n";
} */
#pragma endregion
#pragma region MATRIZ 3
/*void main()
{
	srand(time(NULL));
	const int lines = 10;
	const int columns = 10;
	int num = 0;

	int table[lines][columns] = {};
	int cpTable[lines][columns] = {};

	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < columns; j++) {
			num = rand() % 10 + 1;
			table[i][j] = num;
			cpTable[i][j] = table[i][j];
			std::cout << table[i][j] << " ";
		}
	std::cout << "\n";
	}
	std::cout << " " << std::endl;
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < columns; j++) {
			std::cout << cpTable[i][j] << " ";
		}
		std::cout << "\n";
	}
}*/
#pragma endregion
#pragma region CHAR 1
/*void main()
{
	char caracter1;
	char caracter2;

	std::cout << "Introduce un caracter: " << std::endl;
	std::cin >> caracter1;
	std::cout << "Introduce otro caracter: " << std::endl;
	std::cin >> caracter2;
	std::cout << "\n";

	if (caracter1 == caracter2) {
		std::cout << "Son el mateix caracter? " << std::endl;
		std::cout << "\n";
		std::cout << "Si.";
	}
	else {
		std::cout << "Son el mateix caracter? " << std::endl;
		std::cout << "\n";
		std::cout << "No.";
	}
} */
#pragma endregion
#pragma region CHAR 2
/*void main()
{
	float number1;
	float number2;

	std::cout << "Introduce dos numeros: " << std::endl;
	std::cin >> number1;
	std::cout << "\n";
	std::cin >> number2;
	std::cout << "\n";
	
	float result = number1 + number2;
	std::cout << "Resultado real: " << result << std::endl;
	std::cout << "Resultado redondeado: " << (int)(result + 0.5) << std::endl;
}*/
#pragma endregion
#pragma region CHAR 3
/*void main()
{
	char caracter = 0;

	std::cout << "Introduce un caracter en formato ASCII: " << std::endl;
	std::cin >> caracter;

	if (caracter >= 48 && caracter <= 57) {
		std::cout << "Has introducido un numero";
	}
	else {
		std::cout << "Has introducido una letra";
	}
}*/
#pragma endregion
#pragma region STRING 1;
/*void main()
{
	std::string palabra;

	std::cout << "Introduce una palabra: " << std::endl;
	std::cin >> palabra;

	for (int i = 0; i < palabra.length(); i++) {
		if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'o' || palabra[i] == 'u') {
			palabra[i] = 'i';
		}
		else if (palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'O' || palabra[i] == 'U'){
			palabra[i] = 'I';
		}
	}
	std::cout << palabra << std::endl;
}*/
#pragma endregion
#pragma region STRING 2
/*void main()
{
	std::string frase;
	std::string fraseSinEspacios = "";

	std::cout << "Introdueix una frase: " << std::endl;
	std::getline(std::cin, frase);

	for (int i = 0; i > frase.length(); i++) {
		if (frase[i] != ' ') {
			fraseSinEspacios += frase[i];
		}
	}
	std::cout << fraseSinEspacios;
}*/
#pragma endregion
#pragma region STRING 3
void main()
{
	std::string phrase;
	int firstOption;
	std::cout << "Quieres encriptar o desencriptar un mensaje? 1 || 2 " << std::endl;
	std::cin >> firstOption;
	std::cin.ignore();

	if (firstOption == 1) {
		std::cout << "Introduce la frase a encriptar: " << std::endl;
		std::getline(std::cin, phrase);
		for (int i = 0; i < phrase.length(); i++) {
			phrase[i]++;
		}
		std::cout << phrase;
	}
	else if (firstOption == 2) {
		std::cout << "Introduce la frase a desencriptar: " << std::endl;
		std::getline(std::cin, phrase);
		for (int i = 0; i < phrase.length(); i++) {
			phrase[i]--;
		}
		std::cout << phrase;
	}
}
#pragma endregion