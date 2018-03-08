#pragma once
#include "Hormiga.h"
#define KGRN "\x1B[32m"
class Hormiga_DDII :
	public Hormiga {
private:
	int pasos;
public:
	Hormiga_DDII(int x, int y, int tam_x, int tam_y);
	~Hormiga_DDII();
	int regla(Rejilla & rejilla);
	ostream & write(ostream & os);
};

