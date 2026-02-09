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
    int opcion;


    do
    {
        viCliente.menuCliente(cp.getClienteActual(), opcion);

        switch(opcion)
        {

        case 1:
            actualizar(cp.getClienteActual());
            cp.guardarRegistroClientes();
            break;

        case 2:
            listarVentasyAbonos(cp.getClienteActual(),
                                cp.getListaVentas(),
                                cp.getCantidadVentas(),
                                cp.getListaAbonos(),
                                cp.getCantidadAbonos());
            break;

        case 3:
            reporteSaldo(cp.getClienteActual(),
                 cp.getListaVentas(),
                 cp.getCantidadVentas(),
                 cp.getListaAbonos(),
                 cp.getCantidadAbonos());
            break;
        case 4:
            cp.ejecutar();
            break;

        default:
            vista.imprimir("Opcion incorrecta......");
            break;




        }


    }
    while(opcion != 4);

}


void ControladorCliente::actualizar(Cliente& a)
{
    viCliente.editarCliente(a);
}

void ControladorCliente::listarVentasyAbonos(Cliente& cliente, Ventas(&ventas)[1000], int cantVentas, Abonos(&abonos)[1000], int cantAbonos)
{
    Ventas ventasCliente[1000];
    Abonos abonosCliente[1000];
    int cantVC = 0;
    int cantAC = 0;

    for (int i = 0; i < cantVentas; i++)
    {
        if (ventas[i].getIdUsuario() == cliente.getIdUsuario())
        {
            ventasCliente[cantVC++] = ventas[i];
        }
    }

    for (int i = 0; i < cantAbonos; i++)
    {
        if (abonos[i].getIdUsuario() == cliente.getIdUsuario())
        {
            abonosCliente[cantAC++] = abonos[i];
        }
    }

    viCliente.mostrarVentasYAbonos(ventasCliente, cantVC,abonosCliente, cantAC);
}

void ControladorCliente::reporteSaldo(Cliente& cliente, Ventas(& ventas)[1000], int cantVentas, Abonos(& abonos)[1000], int cantAbonos)
{
    float totalVentas = 0;
    float totalAbonos = 0;

    for (int i = 0; i < cantVentas; i++)
    {
        if (ventas[i].getIdUsuario() == cliente.getIdUsuario())
        {
            totalVentas += ventas[i].getMonto();
        }
    }

    for (int i = 0; i < cantAbonos; i++)
    {
        if (abonos[i].getIdUsuario() == cliente.getIdUsuario())
        {
            totalAbonos += abonos[i].getMonto();
        }
    }

    float saldo = totalVentas - totalAbonos;

    viCliente.mostrarReporteSaldo(totalVentas, totalAbonos, saldo);
}


