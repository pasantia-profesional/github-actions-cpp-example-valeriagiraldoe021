#ifndef TIENDA_H
#define TIENDA_H

#include "Producto.h"
#include <map>
#include <string>

class Tienda {
private:
    std::map<int, Producto*> productos;

public:
    Tienda();
    ~Tienda();
    
    void inicializarProductos();
    
    void crearProducto(int id, const std::string& nombre, double precio, int cantidad);
    Producto* leerProducto(int id);
    void actualizarProducto(int id, const std::string& nombre, double precio, int cantidad);
    void eliminarProducto(int id);
    
    void mostrarTodosProductos() const;
};

#endif
