#define FRAME_RATE 150

#include <iostream>
#include <thread>
#include <chrono>
#include "ConstValues.h"
#include "keyboard.h"
#include "ConstValues.h"
#include "tablero.h"
#include "utils.h"

void main() {

    char tablero[tableroX][tableroY] = {};

    bool bGameOver = false;

    inicializarTablero(tablero);

    //While game is not over execute game loop
    while (!bGameOver) {
        system("cls");
        mostrarTablero(tablero);
        //Sleep main thread to control game speed execution
        std::this_thread::sleep_for(std::chrono::milliseconds(FRAME_RATE));
    }
}