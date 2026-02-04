#ifndef VISTAPRINCIPAL_H
#define VISTAPRINCIPAL_H

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

    protected:

    private:
};

#endif // VISTAPRINCIPAL_H
