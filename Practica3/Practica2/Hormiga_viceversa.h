#pragma once
#include "Hormiga.h"
#define KCYN "\x1B[36m"
class Hormiga_viceversa : public Hormiga {
public:
	Hormiga_viceversa(int x, int y, int tam_x, int tam_y);
	~Hormiga_viceversa();
	int regla(Rejilla& rejilla);
	ostream & write(ostream & os);
};