#ifndef CONTROLADORADMINISTRADOR_H
#define CONTROLADORADMINISTRADOR_H

#include <Administrador.h>

using namespace std;

class ControladorAdministrador
{
    public:
        ControladorAdministrador( Administrador admin);
        ControladorAdministrador();
        virtual ~ControladorAdministrador();

        bool registrarCliente(string usuario, string clave, string nombre, string telefono, string direccion);
        bool eliminarCliente(string idCliente);

        void setModelo(Administrador admin);
        Administrador getModelo();




    protected:

    private:
        Administrador modelo;
        string generarNuevoID(string nombreArchivo);
        string obtenerCliente(string idClienteBuscado);
        bool borrarID(string nombreArchivo, int columna, string idBorrar );
};

#endif // CONTROLADORADMINISTRADOR_H
