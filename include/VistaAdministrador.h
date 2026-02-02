#ifndef VISTAADMINISTRADOR_H
#define VISTAADMINISTRADOR_H

#include <VistaPrincipal.h>


class VistaAdministrador : public VistaPrincipal
{
    public:
        VistaAdministrador();
        virtual ~VistaAdministrador();

        void menuPrincipal(int& opcion) override;
        void menuReportes(int& opcion);

    protected:

    private:
};

#endif // VISTAADMINISTRADOR_H
