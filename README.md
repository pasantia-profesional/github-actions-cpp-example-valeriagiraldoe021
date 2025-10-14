# ejm_github_actions_cpp
Proyecto de ejemplo en C++ para probar github actions

## Descripción
Sistema de gestión de tienda orientado a objetos en C++ con sintaxis básica del lenguaje.

## Estructura del Proyecto
- **main.cpp**: Aplicación principal con menú interactivo
- **Producto.h/cpp**: Clase Producto con atributos (id, nombre, precio, cantidad)
- **Tienda.h/cpp**: Clase Tienda que gestiona productos mediante un mapa (map<int, Producto*>)

## Funcionalidades
La tienda incluye operaciones CRUD completas:
- **Crear**: Agregar nuevos productos
- **Leer**: Buscar productos por ID o listar todos
- **Actualizar**: Modificar información de productos existentes
- **Eliminar**: Borrar productos del inventario

El sistema inicializa automáticamente con 5 productos de ejemplo.

## Compilación y Ejecución

### Requisitos
- CMake 3.10 o superior
- Compilador C++ compatible con C++11

### Compilar
```bash
mkdir build
cd build
cmake ..
make
```

### Ejecutar
```bash
./tienda_app
```
## Práctica
* Agregue tres nuevos productos a la tienda
* Haga push - verifique que las acciones se ejecuten
* Cambie la lógica del `continue` del main para usar otra instrucción de control de flujo
* Haga nuevamente commit y push y verifique que la acción se desencadene para ver que el código funcione correctamente
