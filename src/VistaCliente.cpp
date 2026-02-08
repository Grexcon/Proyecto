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



