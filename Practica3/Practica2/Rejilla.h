#pragma once
#include <vector>
#include <iostream>
using namespace std;

const char BLANCO = ' ';
const char NEGRO = 'X';
const char AMARILLO = 'Y';
const char VERDE = 'G';



const int NORTE = 1;
const int ESTE = 2;
const int SUR = 3;
const int OESTE = 4;
const int DESBORDAMIENTO_NORTE = -1;
const int DESBORDAMIENTO_ESTE = -2;
const int DESBORDAMIENTO_SUR = -3;
const int DESBORDAMIENTO_OESTE = -4;


class Rejilla {
private:
	int dimension_x;
	int dimension_y;
	vector<vector<char> > rejilla;
public:
	Rejilla(int m, int n);
	~Rejilla();
	
	char get_color(int i, int j);
	void set_color(int i, int j, char color);
	ostream& write(ostream& os, int i, int j);
	int get_x();
	int get_y();
	vector<vector<char> > get_rejilla();
};

