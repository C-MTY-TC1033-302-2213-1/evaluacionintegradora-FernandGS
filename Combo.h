#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include "Producto.h"
#ifndef Combo_h
#define Combo_h

using namespace std;

class Combo: public Producto {
    private:
    int clave;

    public:
    Combo();
    Combo(string _nombre, int _precio, int _peso, int _clave);

    void setclave(int _clave);

    int getclave();

    string str();

    int calculaTotalPagar();
};
#endif