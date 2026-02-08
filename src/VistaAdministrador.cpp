#include "VistaAdministrador.h"

VistaAdministrador::VistaAdministrador()
{
    //ctor
}

VistaAdministrador::~VistaAdministrador()
{
    //dtor
}

void VistaAdministrador::menuPrincipal(int& opcion)
{
    cout << "==========================";
    cout << "Menu Adminitrador";
    cout << "==========================";
    cout << "1. Registra cliente";
    cout << "2. Eliminar cliente";
    cout << "3. Registrar venta";
    cout << "4. Eliminar venta";
    cout << "5. Registrar abono";
    cout << "6. Eliminar abono";
    cout << "7. Ver reportes";
    cout << "8. Cerrar sesicón";
    cout << "Seleccione una opcion:";
    cin >> opcion;
}

void VistaAdministrador::menuReportes(int& opcion)
{
    cout << "==========================";
    cout << "Reportes Adminitrador";
    cout << "==========================";
    cout << "1. Listado general de clientes";
    cout << "2. Ventas y abonos de un cliente";
    cout << "3. Finanzas generales";
    cout << "4. Regresar";
    cout << "Seleccione una opcion:";
    cin >> opcion;
}

