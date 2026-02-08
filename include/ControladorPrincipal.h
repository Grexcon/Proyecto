#ifndef CONTROLADORPRINCIPAL_H
#define CONTROLADORPRINCIPAL_H
#include <VistaPrincipal.h>
#include <Usuario.h>
#include <Cliente.h>
#include <Ventas.h>
#include <Abonos.h>

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
        void cargarRegistrosVentas();
        void cargarRegistrosAbonos();

    protected:

    private:
        VistaPrincipal vistaPrin;
        Usuario listaUsuarios[1000];
        Cliente listaClientes[1000];
        Ventas  listaVentas[1000];
        Abonos  listaAbonos[1000];

        string archivoUsuarios;
        string archivoCliente;
        string archivoVentas;
        string archivoAbonos;
        int cantidad, idConsecutivo, idConsecutivoClientes, idConsecutivoVentas, idConsecutivoAbonos;
};

#endif // CONTROLADORPRINCIPAL_H
