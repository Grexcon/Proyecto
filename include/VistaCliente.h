#ifndef VISTACLIENTE_H
#define VISTACLIENTE_H

#include <VistaPrincipal.h>
#include <Cliente.h>


class VistaCliente : public VistaPrincipal
{
    public:
        VistaCliente();
        virtual ~VistaCliente();

        void menuCliente(Cliente& u,int& opcion);
        void editarCliente(Cliente& u);

    protected:

    private:
        Cliente a;
};

#endif // VISTACLIENTE_H
