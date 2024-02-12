// 2024-02-12 - nelbren@nelbren.com
#define VERSION4
#include "Clase.h"
#include <vector>
#include <memory>
#ifdef VERSION1
void version() {
    cout << "VERSION 1: Objetos creados solos" << endl << endl;
    Clase clase1("PROGRAMACION III", 3);
    Clase clase2("LABORATORIO PROGRAMACION III", 3);
    cout << "Nombre: " << clase1.Nombre() << endl;
    cout << "    UV: " << clase1.UV() << endl;
    cout << "Nombre: " << clase2.Nombre() << endl;
    cout << "    UV: " << clase2.UV() << endl;
}
#endif
#ifdef VERSION2
void version() {
    cout << "VERSION 2: Objetos creados solos y pasados como punteros al vector" << endl << endl;
    Clase clase1("PROGRAMACION III", 3);
    Clase clase2("LABORATORIO PROGRAMACION III", 3);
    vector <Clase*> clases;
    clases.push_back(&clase1);
    clases.push_back(&clase2);
    for (Clase* clase : clases) {
        cout << "Nombre: " << clase->Nombre() << endl;
        cout << "    UV: " << clase->UV() << endl;
    }
}
#endif
#ifdef VERSION3
void version() {
    cout << "VERSION 3: Objetos creados directamente al pasarlos como punteros al vector" << endl << endl;
    vector <Clase*> clases;
    clases.push_back(new Clase("PROGRAMACION III", 3));
    clases.push_back(new Clase("LABORATORIO PROGRAMACION III", 3));

    for (Clase *clase : clases) {
        cout << "Nombre: " << clase->Nombre() << endl;
        cout << "    UV: " << clase->UV() << endl;
    }
    cout << endl << "***NOTAR QUE HACE FALTA LAS LLAMADAS AL DESTRUCTOR***" << endl;
}
#endif
#ifdef VERSION4
void version() {
    cout << "VERSION 4: Objetos creados directamente al pasarlos como punteros unicos al vector" << endl << endl;
    vector <unique_ptr<Clase>> clases;
    clases.push_back(make_unique<Clase>("PROGRAMACION III", 3));
    clases.push_back(make_unique<Clase>("LABORATORIO PROGRAMACION III", 3));

    for (auto&& clase : clases) {
        cout << "Nombre: " << clase->Nombre() << endl;
        cout << "    UV: " << clase->UV() << endl;
    }
}
#endif
int main() {
    version();
    cout << endl <<"FIN." << endl;
}