#include "VistaCliente.h"

VistaCliente::VistaCliente()
{
    //ctor
}

VistaCliente::~VistaCliente()
{
    //dtor
}

void VistaCliente::menuCliente(Cliente& u, int& opcion)
{
    cout << "==========================\n";
    cout << "Menu Cliente \n";
    cout << "==========================\n";
    cout << u.datosCliente() << endl;
    cout << "1. Editar mi perfil\n";
    cout << "2. Ver todas mis ventas y abonos\n";
    cout << "3. Ver reporte de saldo\n";
    cout << "4. Cerrar sesion\n";
    cout << "Seleccione una opcion:";
    cin >> opcion;
}

void VistaCliente::editarCliente(Cliente& u)
{
    cout << "==== Editar perfil ====\n";
    string nuevoNombre, nuevoTelefono, nuevaDireccion;

    cout << "Ingrese nuevo nombre (actual: " << u.getNombre() << "): ";
    cin.ignore();
    getline(cin, nuevoNombre);
    if(nuevoNombre != "")
    {
        u.setNombre(nuevoNombre);
    }

    cout << "Ingrese nuevo telefono (actual: " << u.getTelefono() << "): ";
    getline(cin, nuevoTelefono);
    if(nuevoTelefono != "")
    {
        u.setTelefono(nuevoTelefono);
    }

    cout << "Ingrese nueva direccion (actual: " << u.getDireccion() << "): ";
    getline(cin, nuevaDireccion);
    if(nuevaDireccion != "")
    {
        u.setDirreccion(nuevaDireccion);
    }

    cout << "Perfil actualizado correctamente.\n";
}




