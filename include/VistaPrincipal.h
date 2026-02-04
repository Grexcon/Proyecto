#ifndef VISTAPRINCIPAL_H
#define VISTAPRINCIPAL_H

#include <Usuario.h>
#include <iostream>
#include <string>

using namespace std;


class VistaPrincipal
{
    public:
        VistaPrincipal();
        virtual ~VistaPrincipal();

        virtual void menuPrincipal(int& opcion);
        void imprimir (string texto);
        Usuario inicioSeccionUsuario();


    protected:

    private:
};

#endif // VISTAPRINCIPAL_H
