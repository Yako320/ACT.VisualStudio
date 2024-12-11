#pragma once
#include <list>

struct pos {
	int x;
	int y;
};

struct serpiente {
	pos cabezaSerpiente;
	std::list<pos> cuerpoSerpiente;
};

struct inputs {
	bool w;
	bool a;
	bool s;
	bool d;
};