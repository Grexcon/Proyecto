#include "Usuario.h"

Usuario::Usuario()
{
    //ctor
}

Usuario::~Usuario()
{
    //dtor
}

Usuario::Usuario(int id_usuario, string usuario, string contrasena, string rol)
{
    this -> id_usuario = id_usuario;
    this -> usuario = usuario;
    this -> contrasena = contrasena;
    this -> rol = rol;
}
Usuario::Usuario(int id_usuario)
{
    this ->id_usuario = id_usuario;
}

Usuario::Usuario(string usuario, string contrasena)
{
    this -> usuario = usuario;
    this -> contrasena = contrasena;
}


string Usuario::getUsuario()
{
    return usuario;
}

int Usuario::getIdUsuario()
{
    return id_usuario;
}

string Usuario::getContrasena()
{
    return contrasena;
}

string Usuario::getRol()
{
    return rol;
}

string Usuario::toString()
{
    return "ID: " + to_string(id_usuario) + " Usuario: " + usuario + " Contraseña: " + contrasena + " Rol: " + rol;
}

