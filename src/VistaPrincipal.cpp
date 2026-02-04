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
    cout << "=========================";
    cout << " Sistema Comercial UNA";
    cout << "=========================";
    cout << "Seleccione una opción:";
    cin >> opcion;
}


void VistaPrincipal::imprimir(string texto)
{
    cout << texto << endl << endl;
}

