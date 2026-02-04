#ifndef CLIENTE_H
#define CLIENTE_H

#include <Usuario.h>


class Cliente : public Usuario
{
    public:
        Cliente(int id_usuario, int id_cliente, string nombre, string telefono, string direccion);
        Cliente();
        virtual ~Cliente();

    protected:

    private:
        int id_usuario;
        int id_cliente;
        string nombre;
        string telefono;
        string direccion;
};

#endif // CLIENTE_H
