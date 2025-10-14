#include "Producto.h"
#include <iostream>

Producto::Producto(int id, const std::string& nombre, double precio, int cantidad)
    : id(id), nombre(nombre), precio(precio), cantidad(cantidad) {}

int Producto::getId() const {
    return id;
}

std::string Producto::getNombre() const {
    return nombre;
}

double Producto::getPrecio() const {
    return precio;
}

int Producto::getCantidad() const {
    return cantidad;
}

void Producto::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

void Producto::setPrecio(double precio) {
    this->precio = precio;
}

void Producto::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

void Producto::mostrarInfo() const {
    std::cout << "ID: " << id << " | Nombre: " << nombre 
              << " | Precio: $" << precio << " | Cantidad: " << cantidad << std::endl;
}
