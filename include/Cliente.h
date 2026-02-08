#ifndef CLIENTE_H
#define CLIENTE_H

#include <Usuario.h>


class Cliente : public Usuario
{
    public:
        Cliente(int id_usuario, int id_cliente, string nombre, string telefono, string direccion);
        Cliente();
        virtual ~Cliente();

        int getIdClientes();
        void setIdCliente(int id_cliente);

        string getNombre();
        void   setNombre(string nombre);

        string getTelefono();
        void   setTelefono(string telefono);

        string getDireccion();
        void   setDirreccion(string direccion);

        string datosCliente();

    protected:

    private:
        int id_cliente;
        string nombre;
        string telefono;
        string direccion;
};

#endif // CLIENTE_H
