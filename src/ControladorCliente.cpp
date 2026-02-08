#include "ControladorCliente.h"
#include <ControladorPrincipal.h>

ControladorCliente::ControladorCliente()
{
    //ctor
}

ControladorCliente::~ControladorCliente()
{
    //dtor
}

void ControladorCliente::ejecutar(ControladorPrincipal& cp)
{
    int opcion ;


    do
    {
        vi.menuCliente(cp.getClienteActual(), opcion);

        switch(opcion)
        {

        case 1:
            break;

        case 2:
            break;

        case 3:
            break;
        case 4:
            break;

        default:
            break;




        }


    }
    while(opcion != 4);










}
