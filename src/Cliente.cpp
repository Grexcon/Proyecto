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
    setIdCliente(id_cliente);
    setNombre(nombre);
    setTelefono(telefono);
    setDirreccion(direccion);
}

int Cliente::getIdClientes()
{
    return id_cliente;
}

void Cliente::setIdCliente(int id_cliente)
{
    this -> id_cliente = id_cliente;
}


string Cliente::getNombre()
{
    return nombre;
}

void Cliente::setNombre(string nombre)
{
    this -> nombre = nombre;
}

string Cliente::getTelefono()
{
    return telefono;
}

void Cliente::setTelefono(string telefono)
{
    this -> telefono = telefono;
}

string Cliente::getDireccion()
{
    return direccion;
}

void Cliente::setDirreccion(string direccion)
{
    this -> direccion = direccion;
}

string Cliente::datosCliente()
{
    return "Cliente: " + to_string(getIdClientes()) + " - " + getNombre();
}

string Cliente::toFileCliente()
{
    return to_string(id_usuario) + ";" +to_string(id_cliente) + ";" + nombre + ";" + telefono + ";" + direccion;
}







