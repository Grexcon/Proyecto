#ifndef CONTROLADORCLIENTE_H
#define CONTROLADORCLIENTE_H

#include <Cliente.h>
#include <VistaCliente.h>
#include <Ventas.h>
#include <Abonos.h>

class ControladorPrincipal;

class ControladorCliente
{
public:
    ControladorCliente();
    virtual ~ControladorCliente();

    void ejecutar(ControladorPrincipal& cp);

    // CRUD

    void actualizar(Cliente& a);
    void listarVentasyAbonos(Cliente& cliente, Ventas(&ventas)[1000], int cantVentas, Abonos(&abonos)[1000], int cantAbonos);
    void reporteSaldo(Cliente& cliente,Ventas(&ventas)[1000], int cantVentas,Abonos(&abonos)[1000], int cantAbonos);

protected:

private:
    VistaCliente viCliente;
    VistaPrincipal vista;
};

#endif // CONTROLADORCLIENTE_H
