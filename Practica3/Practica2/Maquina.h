#pragma once
#include <iostream>
#include "Rejilla.h"
#include "Hormiga.h"
#include "Hormiga_IIDD.h"
#include "Hormiga_viceversa.h"
#include <stdlib.h>


class Maquina {
private: 
	long int cont = 0;
	int tam_rej_x;
	int tam_rej_y;
	Rejilla* mapa;
	vector<Hormiga*> horm;

public:
	Maquina(int pos_x_hormiga, int pos_y_hormiga, int m, int n, int tipo);
	~Maquina();
	ostream& write(ostream& os);
	void control();
	void nueva_hormiga(int x, int y, int tipo);
	bool write_hormiga(int i, int j);
};

