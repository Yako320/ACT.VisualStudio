#include <iostream>
#include <string>
#include <random>
#include <time.h>
#include <Windows.h>

//void main()
//{
//	const int size = 5;
//	int ronda = 0;
//	std::string palabrasArray[size] = { "programacion", "ordenador", "teclado", "videojuego", "informatica" };
//
//	while (ronda == 0) {
//		for (int i = 1; i < 3; i++) {
//			std::string palabra = palabrasArray[i];
//			int intentosJugador = palabra.size();
//			while (intentosJugador > 0) {
//				std::cout << "Introduce una letra: " << std::endl;
//				char letra;
//				std::cin >> letra;
//				std::cout << " " << std::endl;
//				for (int j = 0; j < palabra.size(); j++) {
//					if (letra = palabra[j]) {
//
//					}
//				}
//			}
//		}
//	}
//}

void main()
{
	const int size = 5;
	int puntosJugador = 0;
	std::string palabra1 = "programacion";
	std::string palabra2 = "ordenador";
	std::string palabra3 = "teclado";
	std::string palabra4 = "videojuego";
	std::string palabra5 = "informatica";
	std::string palabraRellenar;

	std::cout << "Bienvenido al ahorcado" << std::endl;

	while (puntosJugador < 2) {
		if (puntosJugador == 0) {
			std::string palabra = palabra1;
			char letra;
			int intentos = palabra.size();
			std::cout << "Ronda 1" << std::endl;
			std::cout << "Introduce una letra: " << std::endl;
			std::cin >> letra;
			for (int i = 0; i < palabra.size(); i++) {
				for (int j = 0; j < palabra.size(); j++) {
					if (intentos > 0 && palabra != palabra1) {
						if (letra == palabra[i]) {
							std::cout << "Letra acertada. Restan " << intentos << " intentos" << std::endl;
							palabraRellenar[j] = letra;
						}
						else {
							intentos--;
							std::cout << "Letra incorrecta. Restan " << intentos << " intentos" << std::endl;
						}
					}
					else {
						std::cout << "Has acertado la palabra" << std::endl;
						puntosJugador++;
					}
				}
			}
		}
		if (puntosJugador == 1) {
			std::string palabra = palabra2;
			char letra;
			int intentos = palabra.size();
			std::cout << "Ronda 2" << std::endl;
			std::cout << "Introduce una letra: " << std::endl;
			std::cin >> letra;
			for (int i = 0; i < palabra.size(); i++) {
				for (int j = 0; j < palabra.size(); j++) {
					if (intentos > 0 && palabra != palabra2) {
						if (letra == palabra[i]) {
							std::cout << "Letra acertada. Restan " << intentos << " intentos" << std::endl;
							palabraRellenar[j] = letra;
						}
						else {
							intentos--;
							std::cout << "Has acertado la palabra" << std::endl;
							puntosJugador++;
						}
					}
				}
			}
		}
		if (puntosJugador == 2) {
			std::cout << "Has Ganado!" << std::endl;
		}
		if (puntosJugador == 1) {
			std::cout << "Has perdido!" << std::endl;
		}
	}
}