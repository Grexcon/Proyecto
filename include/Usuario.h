#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>

using namespace std;


class Usuario
{
    public:
        Usuario(int id_usuario, string usuario, string contrasena, string rol);
        Usuario(int id_usuario );
        Usuario();
        virtual ~Usuario();

        int getIdUsuario();
        string getUsuario();
        string getContrasena();
        string getRol();

    protected:

    private:
        int id_usuario;
        string usuario;
        string contrasena;
        string rol;
};

#endif // USUARIO_H
