//Verdura_h
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <string>
#include "Producto.h"
#ifndef Verdura_h
#define Verdura_h

using namespace std;

class Verdura: public Producto {
    private:
    string temporada;

    public:
    Verdura();
    Verdura(string _nombre, int _precio, int _peso, string _temporada);

    void setTemporada(string _temporada);

    string getTemporada();

    string str();

    int calculaTotalPagar();
};
#endif