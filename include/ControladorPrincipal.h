#ifndef CONTROLADORPRINCIPAL_H
#define CONTROLADORPRINCIPAL_H
#include <VistaPrincipal.h>
#include <Usuario.h>
#include <Cliente.h>

#include <fstream>
#include <sstream>



class ControladorPrincipal
{
    public:
        ControladorPrincipal();
        virtual ~ControladorPrincipal();

        void ejecutar();

        Usuario usuarioActual();


        //Metodos para los archivos

        void cargarRegistrosUsuarios();
        void cargarRegistrosClientes();

    protected:

    private:
        VistaPrincipal vistaPrin;
        Usuario listaUsuarios[1000];
        Cliente listaClientes[1000];
        string archivoUsuarios;
        string archivoCliente;
        int cantidad, idConsecutivo, idConsecutivoClientes;
};

#endif // CONTROLADORPRINCIPAL_H
