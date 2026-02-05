#ifndef CONTROLADORPRINCIPAL_H
#define CONTROLADORPRINCIPAL_H
#include <VistaPrincipal.h>
#include <Usuario.h>

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

    protected:

    private:
        VistaPrincipal vistaPrin;
        Usuario listaUsuarios[1000];
        string archivo;
        int cantidad, idConsecutivo;
};

#endif // CONTROLADORPRINCIPAL_H
