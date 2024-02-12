#include "Clase.h"
Clase::Clase(const char* _nombre, int _unidad_valorativa) {
	int longitud = strlen(_nombre) + 1;
	nombre = new char[longitud];
	strcpy_s(nombre, longitud, _nombre);
	unidad_valorativa = _unidad_valorativa;
	cout << "+ CONSTRUCTOR de " << nombre << endl;
}
Clase::~Clase() {
	cout << "- DESTRUCTOR de " << nombre << endl;
	if (nombre)
		delete[] nombre;
}
int Clase::UV() {
	return unidad_valorativa;
}
char* Clase::Nombre() {
	return nombre;
}