#include "ConstValues.h"
#include <iostream>

void inicializarTablero(char tablero[tableroX][tableroY]) {
	for (int i = 0; i < tableroX; i++) {
		for (int j = 0; j < tableroY; j++) {
			if (i == 0 || i == tableroX - 1|| j == 0 || j == tableroY - 1) {
				if (i == 0 || i == tableroX -1) {
					tablero[i][j] = '-';
				}
				else {
					tablero[i][j] = '|';
				}
			}
			else {
				tablero[i][j] = ' ';
			}
		}
	}
}

void mostrarTablero(char tablero[tableroX][tableroY]) {
	for (int i = 0; i < tableroX; i++) {
		for (int j = 0; j < tableroY; j++) {
			std::cout << tablero[i][j];
		}
		std::cout << std::endl;
	}
}