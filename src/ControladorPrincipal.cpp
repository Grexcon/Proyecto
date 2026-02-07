#include "ControladorPrincipal.h"

ControladorPrincipal::ControladorPrincipal()
{
    archivoUsuarios = "usuarios.txt";
    archivoCliente = "clientes.txt";
    cantidad = 0;
    idConsecutivo = 1;
    idConsecutivoClientes = 1;

}

ControladorPrincipal::~ControladorPrincipal()
{
    //dtor
}


void ControladorPrincipal::ejecutar()
{
    cargarRegistrosUsuarios();
    cargarRegistrosClientes();
    int opcion;

    do
    {

        vistaPrin.menuPrincipal(opcion);


        switch(opcion)
        {

        case 1:
        {
            Usuario rnUser = usuarioActual();

            //Usuario e = vistaPrin.inicioSeccionUsuario();
            for(int i=0; i < cantidad; i++)
            {

                if(listaUsuarios[i].getUsuario() == rnUser.getUsuario() && listaUsuarios[i].getContrasena() == rnUser.getContrasena())
                {
                    if(rnUser.getRol() == "administrador" )
                    {

                    }
                    else
                    {

                    }
                    //cout << "administtrador encotrado";
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
    ifstream fs(archivoUsuarios);


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
            listaUsuarios[cantidad++] = a;

            idConsecutivo = id_usuario+1;

        }

    }
    fs.close();
}

void ControladorPrincipal::cargarRegistrosClientes()
{
    ifstream fs(archivoCliente);


    if(fs)
    {

        string linea, campo;

        while(getline(fs,linea))
        {


            stringstream ss(linea);

            getline(ss, campo, ';');
            int id_usuario = stoi(campo);

            getline(ss, campo, ';');
            int id_cliente = stoi(campo);

            getline(ss, campo, ';');
            string nombre = campo;

            getline(ss, campo, ';');
            string telefono = campo;

            getline(ss, campo, ';');
            string direccion = campo;

            Cliente a(id_usuario,id_cliente, nombre, telefono, direccion);
            listaClientes[cantidad++] = a;

            idConsecutivo = id_usuario+1;
            idConsecutivoClientes = id_cliente+1;
        }

    }
    fs.close();
}


Usuario ControladorPrincipal::usuarioActual()
{
    Usuario rnUser = vistaPrin.inicioSeccionUsuario();
    //Usuario e = vistaPrin.inicioSeccionUsuario();

    for(int i=0; i < cantidad; i++)
    {

        if(listaUsuarios[i].getUsuario() == rnUser.getUsuario())
        {

            rnUser = listaUsuarios[i] ;

            cout << rnUser.toString();

        }


    }
    return rnUser;
}


