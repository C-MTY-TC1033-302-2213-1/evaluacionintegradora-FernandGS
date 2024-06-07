#include "Verdura.h"

Verdura::Verdura():Producto() {
    temporada = "Invierno";
}

    Verdura::Verdura(string _nombre, int _precio, int _peso, string _temporada){
        temporada = _temporada;
    }

    void Verdura::setTemporada(string _temporada){
        temporada = _temporada;
    }

    string Verdura::getTemporada(){
        return temporada; 
    }

    string Verdura::str(){
        return nombre + '-' + '$' + to_string(precio) + '-' + '$' +to_string(peso) + '-' + '$' + to_string(calculaTotalPagar()) + '-' + '$' + temporada;
    }

    int Verdura::calculaTotalPagar(){
        int total;
        total = 0;
        if ( temporada == "Junio"){
            total = precio*peso*2;
        }

        else if (temporada == "Regalado"){
            total = precio*peso*3;
        }
        else {
            total = precio*peso*10;
        }
        return total;
    }