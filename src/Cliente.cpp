#include "Cliente.h"

Cliente::Cliente()
{
    //ctor
}

Cliente::~Cliente()
{
    //dtor
}

Cliente::Cliente(int id_usuario, int id_cliente, string nombre, string telefono, string direccion): Usuario(id_usuario)
{
    this -> id_cliente = id_cliente;
    this -> nombre = nombre;
    this -> telefono = telefono;
    this -> direccion = direccion;
}

