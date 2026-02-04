#include "VistaCliente.h"

VistaCliente::VistaCliente()
{
    //ctor
}

VistaCliente::~VistaCliente()
{
    //dtor
}

void VistaCliente::menuPrincipal(int& opcion)
{
    cout << "==========================";
    cout << "Menu Cliente ";
    cout << "==========================";
    cout << "1. Editar mi perfil";
    cout << "2. Ver todas mis ventas y abonos";
    cout << "3. Ver reporte de saldo";
    cout << "4. Cerrar sesion";
    cout << "Seleccione una opcion:";
    cin >> opcion;
}



