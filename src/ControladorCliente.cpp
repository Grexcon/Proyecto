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
    cout << "===== Ventas del cliente =====\n";
    for (int i = 0; i < cantVentas; i++)
    {
        if (ventas[i].getIdUsuario() == cliente.getIdUsuario())
        {
            cout << "ID Venta: " << ventas[i].getIdVenta()
                 << " | Descripcion: " << ventas[i].getDescripcion()
                 << " | Monto: " << ventas[i].getMonto() << endl;
        }
    }
    cout << "===== Abonos del cliente =====\n";
    for (int i = 0; i < cantAbonos; i++)
    {
        if (abonos[i].getIdUsuario() == cliente.getIdUsuario())
        {
            cout << "ID Abono: " << abonos[i].getIdAbono()
                 << " | Monto: " << abonos[i].getMonto() << endl;
        }
    }
}

