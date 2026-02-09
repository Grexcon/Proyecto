#include "ControladorAdministrador.h"
#include <fstream>
#include <sstream>
#include <cstdio>


ControladorAdministrador::ControladorAdministrador(Administrador admin)
{
    this -> modelo = admin;

}

ControladorAdministrador::ControladorAdministrador()
{
    //ctor
}

ControladorAdministrador::~ControladorAdministrador()
{
    //dtor
}


void ControladorAdministrador::setModelo(Administrador admin)
{
    this -> modelo=admin;
}

Administrador ControladorAdministrador::getModelo()
{
    return modelo;
}

string ControladorAdministrador::generarNuevoID(string nombreArchivo)
{
    ifstream archivo(nombreArchivo.c_str());
    string linea;
    int contador = 0;

    if (archivo.is_open())
    {
        while (getline(archivo, linea))
        {
             if (linea.length() > 0) contador++; // Solo cuenta líneas con texto
        }
        archivo.close();
    }

    stringstream ss;
    ss << (contador + 1);
    return ss.str();
}


string ControladorAdministrador::obtenerCliente(string idClienteBuscado)
{
    ifstream archivo("clientes.txt");
    string linea;
    string idUsuarioEncontrado = "";

    if (archivo.is_open())
    {
        while (getline(archivo, linea))
        {
            if(linea.empty()) continue;

            stringstream ss(linea);
            string segmento, idU, idC;


            getline(ss, idU, ';');
            getline(ss, idC, ';');
            if (idC == idClienteBuscado)
            {
                idUsuarioEncontrado = idU;
                break;
            }
        }
        archivo.close();
    }
    return idUsuarioEncontrado;


}

bool ControladorAdministrador::borrarID(string nombreArchivo, int columna, string idBorrar)
{
ifstream lectura(nombreArchivo.c_str());
    if (!lectura.is_open()) return false;

    ofstream escritura("temp_data.txt");
    string linea;
    bool encontrado = false;

    while (getline(lectura, linea)) {
        if (linea.empty()) continue;
        string lineaOriginal = linea; // Guardamos copia exacta

        stringstream ss(linea);
        string segmento, idLeido;

        for(int i = 0; i <=columna; i++) {
            getline(ss, segmento, ';');
            if (i == columna) idLeido = segmento;
        }

        if (idLeido != idBorrar) {
            escritura << lineaOriginal << endl;
        } else {
            encontrado = true;
        }
    }

    lectura.close();
    escritura.close();

    if (encontrado) {
        remove(nombreArchivo.c_str());
        rename("temp_data.txt", nombreArchivo.c_str());
        return true;
    } else {
        remove("temp_data.txt");
        return false;
    }
}
bool ControladorAdministrador::registrarCliente(string usuario, string clave, string nombre, string telefono, string direccion)
{
   string idUsuario = generarNuevoID("usuarios.txt");
    string idCliente = generarNuevoID("clientes.txt");

    ofstream fUser("usuarios.txt", ios::app);
    ofstream fClient("clientes.txt", ios::app);

    if (!fUser.is_open() || !fClient.is_open()) return false;

    fUser << idUsuario << ";" << usuario << ";" << clave << ";cliente" << endl;
    fClient << idUsuario << ";" << idCliente << ";" << nombre << ";" << telefono << ";" << direccion << endl;
    fUser.close();
    fClient.close();
    return true;
}

bool ControladorAdministrador::eliminarCliente(string idCliente)
{
 string idUsuario = obtenerCliente(idCliente);
 if (idUsuario == "") return false;
 bool borradoCliente = borrarID("clientes.txt", 1, idCliente);
 bool borradoUsuario = borrarID("usuarios.txt", 0, idUsuario);
 return borradoCliente && borradoUsuario;



}

