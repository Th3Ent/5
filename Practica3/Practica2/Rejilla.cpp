#include "Rejilla.h"

Rejilla::Rejilla(int m, int n) {
	dimension_x = m;
	dimension_y = n;
	rejilla.resize(dimension_x);
	for (int i = 0; i < dimension_x; i++) {
		rejilla[i].resize(dimension_y);
		for (int j = 0; j < dimension_y; j++)
			rejilla[i][j] = BLANCO;
	}
}


Rejilla::~Rejilla() {
	for (int i = 0; i < dimension_x; i++) {
		rejilla[i].clear();
	}
	rejilla.clear();
}


char Rejilla::get_color(int i, int j) {
	return rejilla[i][j];
}

void Rejilla::set_color(int i, int j, char color) {
	rejilla[i][j] = color;
}

ostream & Rejilla::write(ostream & os, int i, int j) {
	os << rejilla[i][j] << " ";
	return os;
}

int Rejilla::get_x() {
	return dimension_x;
}

int Rejilla::get_y() {
	return dimension_y;
}

vector<vector<char>> Rejilla::get_rejilla() {
	return rejilla;
}


