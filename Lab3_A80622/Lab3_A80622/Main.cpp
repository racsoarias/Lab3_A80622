#include "stdafx.h"
#include "ArbolBinario.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"

int _tmain(int argc, _TCHAR* argv[])
{
	srand((unsigned int)time(NULL));

	cout << "\n----------Arbol de Ints--------------------\n" << endl;
	ArbolBinario a;
	for (int i = 0; i < 10; ++i) {
		a.insertarElemento(new ElementoInt(rand() % 100));
	}
	cout << a << "\n----------Arbol de Doubles-----------------\n" << endl;

	ArbolBinario b;
	double d;
	for (int i = 0; i < 10; ++i) {
		d = (rand() % 500);
		b.insertarElemento(new ElementoDouble(d / 7));
	}
	cout << b << "\n----------Arbol de Personas----------------\n" << endl;

	ArbolBinario c;
	int id;
	string names[] =
	{ "Faby", "Mati", "Kari", "Caro", "Rapu", "Naty", "Guly", "Pelu", "Joha", "Bora" };
	for (int i = 0; i < 10; ++i) {
		id = (rand() % 100 + 100);
		c.insertarElemento(new ElementoPersona(id, names[rand() % 9]));
	}
	cout << c << "\n-----------------FIN-----------------------\n" << endl;

	system("pause");
	return 0;
}


