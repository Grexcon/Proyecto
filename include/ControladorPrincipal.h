#ifndef CONTROLADORPRINCIPAL_H
#define CONTROLADORPRINCIPAL_H
#include <VistaPrincipal.h>
#include <Usuario.h>
#include <Cliente.h>
#include <Ventas.h>
#include <Abonos.h>
#include <ControladorCliente.h>

#include <fstream>
#include <sstream>



class ControladorPrincipal
{
    public:
        ControladorPrincipal();
        virtual ~ControladorPrincipal();

        void ejecutar();

        Usuario& usuarioActual();
        Usuario& getUsuarioLogeado();
        void buscarClienteActual();
        Cliente& getClienteActual();
        void menuAdministrador(Usuario adminUser);

        int getCantidadVentas();
        int getCantidadAbonos();

        Ventas (&getListaVentas())[1000];
        Abonos (&getListaAbonos())[1000];



        //Metodos para los archivos

        void cargarRegistrosUsuarios();
        void cargarRegistrosClientes();
        void cargarRegistrosVentas();
        void cargarRegistrosAbonos();

        void guardarRegistroClientes();

    protected:

    private:
        VistaPrincipal vistaPrin;
        ControladorCliente conCliente;
        Usuario usuarioLogeado;
        Usuario listaUsuarios[1000];
        Cliente listaClientes[1000];
        Ventas  listaVentas[1000];
        Abonos  listaAbonos[1000];

        string archivoUsuarios;
        string archivoCliente;
        string archivoVentas;
        string archivoAbonos;
        int cantidad, idConsecutivo, idConsecutivoClientes, idConsecutivoVentas, idConsecutivoAbonos, cantidadVentas, cantidadAbonos, cantidadUsuarios, cantidadClientes, indiceClienteActual;
};

#endif // CONTROLADORPRINCIPAL_H
