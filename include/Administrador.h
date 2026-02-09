#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include "Usuario.h"
#include <string>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <string>

using namespace std;

class Administrador : public Usuario
{
    public:
        Administrador(int id, string usuario, string contrasena);
        Administrador();
        virtual ~Administrador();



    protected:

    private:



};

#endif // ADMINISTRADOR_H
