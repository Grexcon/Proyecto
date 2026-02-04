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


        //Metodos para los archivos

        void cargarRegistrosArchivos();

    protected:

    private:
        VistaPrincipal vistaPrin;
        Usuario lista[1000];
        string archivo;
        int cantidad, idConsecutivo;
};

#endif // CONTROLADORPRINCIPAL_H
