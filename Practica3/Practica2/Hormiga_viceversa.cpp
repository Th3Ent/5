
#include "Hormiga_viceversa.h"

Hormiga_viceversa::Hormiga_viceversa(int x, int y, int tam_x, int tam_y) : Hormiga(x, y, tam_x, tam_y) {
}

Hormiga_viceversa::~Hormiga_viceversa() {
}

int Hormiga_viceversa::regla(Rejilla & rejilla) {
	switch (rejilla.get_color(get_x(), get_y())) {
	case BLANCO: rejilla.set_color(get_x(), get_y(), NEGRO);
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

	case NEGRO: rejilla.set_color(get_x(), get_y(), BLANCO);

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

ostream & Hormiga_viceversa::write(ostream & os) {
	os << KCYN << get_cabeza() << RSD " ";
	return os;
}
