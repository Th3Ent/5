#pragma once
#include "Hormiga.h"
class Hormiga_IIDD: public Hormiga {
public:
	Hormiga_IIDD(int x, int y, int tam_x, int tam_y);
	~Hormiga_IIDD();
	int regla(Rejilla& rejilla);
	ostream & write(ostream & os);
};

