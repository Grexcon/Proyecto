#ifndef CONTROLADORPRINCIPAL_H
#define CONTROLADORPRINCIPAL_H
#include <VistaPrincipal.h>
#include <Usuario.h>
#include <Cliente.h>
#include <Ventas.h>
#include <Abonos.h>
#include <Administrador.h>
#include <ControladorAdministrador.h>

#include <fstream>
#include <sstream>



class ControladorPrincipal
{
    public:
        ControladorPrincipal();
        virtual ~ControladorPrincipal();

        void ejecutar();

        Usuario usuarioActual();
        void menuAdministrador(Usuario adminUser);


        //Metodos para los archivos

        void cargarRegistrosUsuarios();
        void cargarRegistrosClientes();
        void cargarRegistrosVentas();
        void cargarRegistrosAbonos();

    protected:

    private:
        VistaPrincipal vistaPrin;
        Usuario listaUsuarios[1000];
        Cliente listaClientes[1000];
        Ventas  listaVentas[1000];
        Abonos  listaAbonos[1000];

        string archivoUsuarios, archivoCliente, archivoVentas, archivoAbonos;
        int cantidad, idConsecutivo, idConsecutivoClientes, idConsecutivoVentas, idConsecutivoAbonos;
};

#endif // CONTROLADORPRINCIPAL_H
