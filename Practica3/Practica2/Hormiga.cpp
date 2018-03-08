#include "Hormiga.h"



Hormiga::Hormiga() {
}

Hormiga::Hormiga(int x, int y, int tam_x, int tam_y) {
	tam_rej_x = tam_x;
	tam_rej_y = tam_y;
	pos_x = x;
	pos_y = y;
	cabeza = '^';
}

Hormiga::~Hormiga() {
}

void Hormiga::movimiento(Rejilla& rejilla) {
	switch (regla(rejilla)) {
	case NORTE: pos_x--;

		cabeza = '^';
		break;
	case SUR: pos_x++;
	
		cabeza = 'v';
		break;
	case ESTE: pos_y++;
	
		cabeza = '>';
		break;
	case OESTE: pos_y--;
	
		cabeza = '<';
		break;
	case DESBORDAMIENTO_NORTE: pos_x = tam_rej_x -1 ;
		cabeza = '^';
		break;
	case DESBORDAMIENTO_SUR: pos_x = 0;
		cabeza = 'v';
		break;
	case DESBORDAMIENTO_ESTE: pos_y = 0;
		cabeza = '>';
		break;
	case DESBORDAMIENTO_OESTE: 
		pos_y = tam_rej_y - 1;
		cabeza = '<';
		break; 
	default:
		system("@cls||clear");
		cout << "SE LLEGO AL BORDE" << endl;
		exit(1);
		break;
		}
	
	
	}


int Hormiga::regla(Rejilla& rejilla) {
	return 1;
}


int Hormiga::get_x() {
	return pos_x;
}

int Hormiga::get_y() {
	return pos_y;
}

ostream & Hormiga::write(ostream & os) {
	
	os <<KSRED<< cabeza <<RSD " ";
	return os;
}

char Hormiga::get_cabeza() {
	return cabeza;
}
