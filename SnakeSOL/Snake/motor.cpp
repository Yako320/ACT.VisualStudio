#include "tablero.h"
#include "ConstValues.h"
#include "keyboard.h"
#include "utils.h"
#include <time.h>
#include "tablero.h"

void fruitSpawn() {
	srand(time(0));

	int frutaX = rand() % tableroX - 1;
	int frutaY = rand() % tableroY - 1;

	if (tablero[frutaX][frutaY] == X || tablero[frutaX][frutaY] == x) {

	}
}