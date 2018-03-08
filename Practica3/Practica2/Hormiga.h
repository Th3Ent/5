#pragma once
#include <iostream>
#include "Rejilla.h"
using namespace std;

#define RSD "\x1B[0m"
#define KSRED "\x1B[91m"

class Hormiga {
protected:
	int tam_rej_x;
	int tam_rej_y;
	int pos_x;
	int pos_y;
	char cabeza;
public:
	Hormiga();
	Hormiga(int x, int y, int tam_x, int tam_y);
	~Hormiga();
	void movimiento(Rejilla& rejilla);
	virtual int regla(Rejilla& rejilla);
	int get_x();
	int get_y();
	virtual ostream& write(ostream& os);
	char get_cabeza();
};

