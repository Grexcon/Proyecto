#include "ControladorPrincipal.h"

ControladorPrincipal::ControladorPrincipal()
{
    archivo = "usuarios.txt";
    cantidad = 0;
    idConsecutivo = 1;
}

ControladorPrincipal::~ControladorPrincipal()
{
    //dtor
}


void ControladorPrincipal::ejecutar()
{
    cargarRegistrosArchivos();
    int opcion;

    do
    {

        vistaPrin.menuPrincipal(opcion);

        switch(opcion)
        {

        case 1:
        {

             Usuario e = vistaPrin.inicioSeccionUsuario();
            for(int i=0; i < cantidad; i++)
            {

                if(lista[i].getUsuario() == e.getUsuario() && lista[i].getContrasena() == e.getContrasena())
                {
                    if(lista[i].getRol() == "administrador" ){

                    }else{

                    }
                    cout << "administtrador encotrado";
                }


            }
        }
        break;

        case 2:
            vistaPrin.imprimir("Saliendo.......");
            break;

        default:
            vistaPrin.imprimir("Opcion incorrecta......");
            break;





        }

    }
    while(opcion != 0);


}

void ControladorPrincipal::cargarRegistrosUsuarios()
{
    ifstream fs(archivo);


    if(fs)
    {

        string linea, campo;

        while(getline(fs,linea))
        {


            stringstream ss(linea);

            getline(ss, campo, ';');
            int id_usuario = stoi(campo);

            getline(ss, campo, ';');
            string usuario = campo;

            getline(ss, campo, ';');
            string contrasena = campo;

            getline(ss, campo, ';');
            string rol = campo;

            Usuario a(id_usuario,usuario, contrasena,rol);
            lista[cantidad++] = a;

            idConsecutivo = id_usuario+1;

        }

    }
    fs.close();
}

Usuario ControladorPrincipal::usuarioActual()
{
    Usuario rnUser;
    Usuario e = vistaPrin();

    for(int i=0; i < cantidad; i++){

        if(lista.getUsuario() == e.getUsuario() && )


    }
}


