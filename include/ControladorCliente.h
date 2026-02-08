#ifndef CONTROLADORCLIENTE_H
#define CONTROLADORCLIENTE_H

#include <Cliente.h>
#include <VistaCliente.h>

class ControladorPrincipal;

class ControladorCliente
{
    public:
        ControladorCliente();
        virtual ~ControladorCliente();

        void ejecutar(ControladorPrincipal& cp);

    protected:

    private:
        VistaCliente vi;
};

#endif // CONTROLADORCLIENTE_H
