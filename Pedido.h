#include <stdio.h>
#include <sstream>
#include <fstream>
#include "Verdura.h"
#include "Producto.h"
#include "Combo.h"
#ifndef Pedido_h
#define Pedido_h

using namespace std;

const int MAX_PROD = 50;

class Pedido {
    private:
    Producto *arrPtrProductos[MAX_PROD];
    int cantidad;
    public:
        Pedido();

        void leerArchivo(string nombre );
        void ticketCliente();


        void setPtrProductos(int index, Producto *producto);
        void setCantidad(int _cantidad);

        Producto* getPtrProductos(int index);
        int getCantidad();
};
#endif