cmake_minimum_required(VERSION 3.10)

project(TiendaApp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(tienda_app 
    main.cpp 
    Producto.cpp 
    Tienda.cpp
)
