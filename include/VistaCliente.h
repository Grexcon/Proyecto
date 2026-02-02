#ifndef VISTACLIENTE_H
#define VISTACLIENTE_H

#include <VistaPrincipal.h>


class VistaCliente : public VistaPrincipal
{
    public:
        VistaCliente();
        virtual ~VistaCliente();

        void menuPrincipal(int& opcion) override;

    protected:

    private:
};

#endif // VISTACLIENTE_H
