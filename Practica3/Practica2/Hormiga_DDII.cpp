#include "Hormiga_DDII.h"


Hormiga_DDII::Hormiga_DDII(int x, int y, int tam_x, int tam_y) : Hormiga(x, y, tam_x, tam_y) {
	pasos = 0;
}


Hormiga_DDII::~Hormiga_DDII() {
}


int Hormiga_DDII::regla(Rejilla & rejilla) {
	switch (rejilla.get_color(get_x(), get_y())) {
	case BLANCO: 
		if (pasos >= 2) {
			rejilla.set_color(get_x(), get_y(), NEGRO);
			pasos = 0;
		}
		else pasos++;

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

	case NEGRO: 
		if (pasos == 1) {
			rejilla.set_color(get_x(), get_y(), BLANCO);
			pasos = 0;
		}
		else pasos++;

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

	}
}

ostream & Hormiga_DDII::write(ostream & os) {
	os << KGRN << get_cabeza() << RSD " ";
	return os;
}
