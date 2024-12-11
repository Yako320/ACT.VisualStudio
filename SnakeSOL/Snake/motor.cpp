#include "ConstValues.h"
#include "keyboard.h"
#include "utils.h"
#include <time.h>
#include <iostream>

void inicializarTablero(char tablero[tableroX][tableroY]) {
	for (int i = 0; i < tableroX; i++) {
		for (int j = 0; j < tableroY; j++) {
			if (i == 0 || i == tableroX - 1 || j == 0 || j == tableroY - 1) {
				if (i == 0 || i == tableroX - 1) {
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

void updateInputs(inputs input) {
	if (IsWPressed()) {
		input.a = false;
		input.s = false;
		input.d = false;
		input.w = true;
	}
	else if (IsAPressed()) {
		input.w = false;
		input.s = false;
		input.d = false;
		input.a = true;
	}
	else if (IsSPressed()) {
		input.w = false;
		input.a = false;
		input.d = false;
		input.s = true;
	}
	else if (IsDPressed()) {
		input.w = false;
		input.a = false;
		input.s = false;
		input.d = true;
	}
}