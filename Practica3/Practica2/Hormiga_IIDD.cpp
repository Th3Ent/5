#include "Hormiga_IIDD.h"


Hormiga_IIDD::Hormiga_IIDD(int x, int y, int tam_x, int tam_y): Hormiga(x, y, tam_x, tam_y){}

Hormiga_IIDD::~Hormiga_IIDD() {
}

int Hormiga_IIDD::regla(Rejilla& rejilla) {
	switch (rejilla.get_color(get_x(), get_y())) {
	case BLANCO: rejilla.set_color(get_x(), get_y(), NEGRO);
		switch (get_cabeza()) {
		case '<': if (get_x() + 1 == rejilla.get_x()) {
			return DESBORDAMIENTO_SUR;
		}
				  else
					  return SUR;
		case '>': if (get_x() - 1 == -1) {
			return DESBORDAMIENTO_NORTE;
		}
				  else
					  return NORTE;
		case 'v': if (get_y() + 1 == rejilla.get_y()) {
			return DESBORDAMIENTO_ESTE;
		}
				  else
					  return ESTE;
		case '^': if (get_y() - 1 == -1) {
			return DESBORDAMIENTO_OESTE;
		}
				  else
					  return OESTE;
		}

	case NEGRO: rejilla.set_color(get_x(), get_y(), AMARILLO);

		switch (get_cabeza()) {
		case '<': if (get_x() + 1 == rejilla.get_x()) {
			return DESBORDAMIENTO_SUR;
		}
				  else
					  return SUR;
		case '>': if (get_x() - 1 == -1) {
			return DESBORDAMIENTO_NORTE;
		}
				  else
					  return NORTE;
		case 'v': if (get_y() + 1 == rejilla.get_y()) {
			return DESBORDAMIENTO_ESTE;
		}
				  else
					  return ESTE;
		case '^': if (get_y() - 1 == -1) {
			return DESBORDAMIENTO_OESTE;
		}
				  else
					  return OESTE;
		}
	case AMARILLO: rejilla.set_color(get_x(), get_y(), VERDE);

		switch (get_cabeza()) {
		case '<': if (get_x() - 1 == -1) {
			return DESBORDAMIENTO_NORTE;
		}
				  else
					  return NORTE;
		case '>': if (get_x() + 1 == rejilla.get_x()) {
			return DESBORDAMIENTO_SUR;
		}
				  else
					  return SUR;
		case 'v': if (get_y() - 1 == -1) {
			return DESBORDAMIENTO_OESTE;
		}
				  else
					  return OESTE;
		case '^': if (get_y() + 1 == rejilla.get_y()) {
			return DESBORDAMIENTO_ESTE;
		}
				  else
					  return ESTE;
		}
	case VERDE:rejilla.set_color(get_x(), get_y(), BLANCO);

		switch (get_cabeza()) {
		case '<': if (get_x() - 1 == -1) {
			return DESBORDAMIENTO_NORTE;
		}
				  else
					  return NORTE;
		case '>': if (get_x() + 1 == rejilla.get_x()) {
			return DESBORDAMIENTO_SUR;
		}
				  else
					  return SUR;
		case 'v': if (get_y() - 1 == -1) {
			return DESBORDAMIENTO_OESTE;
		}
				  else
					  return OESTE;
		case '^': if (get_y() + 1 == rejilla.get_y()) {
			return DESBORDAMIENTO_ESTE;
		}
				  else
					  return ESTE;
		}
	}
}

ostream & Hormiga_IIDD::write(ostream & os) {
	
	os << KSRED << get_cabeza() << RSD " ";

	return os;
}
