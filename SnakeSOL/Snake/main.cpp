#define FRAME_RATE 150

#include <iostream>
#include <thread>
#include <chrono>
#include "ConstValues.h"
#include "keyboard.h"
#include "ConstValues.h"
#include "tablero.h"
#include "utils.h"
#include "motor.h"


int posX = tableroX / 2;
int posY = tableroY / 2;


void main() {

    char tablero[tableroX][tableroY] = {};

    bool bGameOver = false;

    inicializarTablero(tablero);

    char cabezaSerpiente = 'X';

    //While game is not over execute game loop
    while (!bGameOver) {
        system("cls");
        
        tablero[posX][posY] = cabezaSerpiente;
        mostrarTablero(tablero);

        std::cout << posX << std::endl << posY;
        //Sleep main thread to control game speed execution
        std::this_thread::sleep_for(std::chrono::milliseconds(FRAME_RATE));
    }
}