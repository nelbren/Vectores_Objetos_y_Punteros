#pragma once
#include <cstring>
#include <iostream>
using namespace std;
class Clase {
	int unidad_valorativa = 3;
	char* nombre = nullptr;
public:
	Clase(const char* _nombre, int _unidad_valorativa);
	~Clase();
	int UV();
	char* Nombre();
};