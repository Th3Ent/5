

#include "Maquina.h"

int main()
{
	Maquina maq(14, 14, 30, 30, 0);
	maq.write(cout);
	while(true)
		maq.control();

    return 0;
}

