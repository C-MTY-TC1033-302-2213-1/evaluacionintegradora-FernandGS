#include "Combo.h"


Combo::Combo():Producto() {
    clave = 0;
}
    Combo::Combo(string _nombre, int _precio, int _peso, int _clave):Producto( _nombre, _precio, _peso){
        clave = _clave;
    }

    void Combo::setclave(int _clave){
        clave = _clave;
    }

    int Combo::getclave(){
        return clave;
    }

    string Combo::str(){
        return nombre + '-' + '$' + to_string(precio) + '-' + to_string(peso) + '-' + '$' + to_string(calculaTotalPagar()) + '-' + '$' + to_string(clave);
    }

    int Combo::calculaTotalPagar(){
        int total;
        float valorc; 
        total = 0;
        valorc = (precio*peso)%100;
        if (clave == 1){
            for (int index = 0; index == valorc; index++)
            total = valorc - 25; 
        }

        if (clave == 2){
            for (int index = 0; index == valorc; index++)
            total = valorc - 30; 
        }
        return total;
    }

