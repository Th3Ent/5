#include "Maquina.h"
#include <windows.h>

Maquina::Maquina(int pos_x_hormiga, int pos_y_hormiga, int m, int n, int tipo) {
	tam_rej_x = m;
	tam_rej_y = n;
	mapa = new Rejilla(m, n);
	nueva_hormiga(pos_x_hormiga, pos_y_hormiga, tipo);
}

Maquina::~Maquina() {
	
}

ostream& Maquina::write(ostream& os) {
	
	system("@cls");
	for (int i = 0; i < mapa->get_y(); i++)
		cout << "# ";
	cout << "# " << endl;
	for (int i = 0; i < mapa->get_x(); i++) {
		cout << "# ";
		for (int j = 0; j < mapa->get_y(); j++) {
			if (write_hormiga(i, j)) {
				bool escrita = false;
				for (int k = 0; k < horm.size() && !escrita ; k++)
				if (i == horm[k]->get_x() && j == horm[k]->get_y()) {
						horm[k]->write(os);
						escrita = true;
					}
			}
			else
				mapa->write(os, i, j);
			
		
		}
		os <<" #"<< endl;
		
	}

	for(int i = 0; i < mapa->get_y(); i++)
		cout << "# ";
	cout << "# "<<endl;
	Sleep(750);
	return os;
}

void Maquina::control() {
	for (int k = 0; k < horm.size(); k++)
		horm[k]->movimiento( *mapa);
	
	
		write(cout);
		
	
	
	
	
}

void Maquina::nueva_hormiga(int x, int y, int tipo) {
	switch (tipo) {
	case 0: horm.push_back(new Hormiga_IIDD(x, y, tam_rej_x, tam_rej_y));
		break;
	case 1: horm.push_back(new Hormiga_viceversa(x, y, tam_rej_x, tam_rej_y));
		break;
	case 2: 
		break;
	}
}

 bool Maquina::write_hormiga(int i , int j) {
	 for (int k = 0; k < horm.size(); k++) 
		 if (i == horm[k]->get_x() && j == horm[k]->get_y())
			 return true;
	 return false;
}


