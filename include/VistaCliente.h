#ifndef VISTACLIENTE_H
#define VISTACLIENTE_H

#include <VistaPrincipal.h>
#include <Cliente.h>
#include <Ventas.h>
#include <Abonos.h>


class VistaCliente : public VistaPrincipal
{
    public:
        VistaCliente();
        virtual ~VistaCliente();

        void menuCliente(Cliente& u,int& opcion);
        void editarCliente(Cliente& u);
        void mostrarVentasYAbonos(Ventas ventas[], int cantVentas,Abonos abonos[], int cantAbonos);
        void mostrarReporteSaldo(float totalVentas,float totalAbonos,float saldo);

    protected:

    private:
        Cliente a;
};

#endif // VISTACLIENTE_H
