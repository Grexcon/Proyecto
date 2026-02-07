#include "VistaPrincipal.h"

VistaPrincipal::VistaPrincipal()
{
    //ctor
}

VistaPrincipal::~VistaPrincipal()
{
    //dtor
}


void VistaPrincipal::menuPrincipal(int& opcion)
{
    cout << "=========================\n";
    cout << " Sistema Comercial UNA\n";
    cout << "=========================\n";
    cout << "1. Iniciar sesión\n";
    cout << "2. Salir\n";
    cout << "Seleccione una opción:\n";
    cin >> opcion;
}


void VistaPrincipal::imprimir(string texto)
{
    cout << texto << endl << endl;
}

Usuario VistaPrincipal::inicioSeccionUsuario()
{
    string user, pass;

    cout << "=====================================\n";
    cout << "Digite su Usuario: ";
    cin.ignore();
    getline(cin,user);
    cout << "Digite su Contraseña: ";
    cin >> pass;
    cout << "=====================================\n";

    return Usuario(user,pass);
}

