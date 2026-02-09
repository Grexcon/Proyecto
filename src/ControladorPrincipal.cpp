#include "ControladorPrincipal.h"

ControladorPrincipal::ControladorPrincipal()
{
    archivoUsuarios = "usuarios.txt";
    archivoCliente = "clientes.txt";
    archivoVentas = "ventas.txt";
    archivoAbonos = "abonos.txt";
    cantidadUsuarios = 0;
    cantidadClientes = 0;
    cantidadVentas = 0;
    cantidadAbonos = 0;
    idConsecutivo = 1;
    idConsecutivoClientes = 1;
    idConsecutivoVentas = 1;
    idConsecutivoAbonos = 1;
    indiceClienteActual = -1;


}

ControladorPrincipal::~ControladorPrincipal()
{
    //dtor
}


void ControladorPrincipal::ejecutar()
{
    cargarRegistrosUsuarios();
    cargarRegistrosClientes();
    cargarRegistrosVentas();
    cargarRegistrosAbonos();
    int opcion;

    do
    {

        vistaPrin.menuPrincipal(opcion);


        switch(opcion)
        {

        case 1:
        {
            Usuario& rnUser = usuarioActual();

            if(rnUser.getRol() == "administrador" )
            {

            }
            else
            {
                buscarClienteActual();
                conCliente.ejecutar(*this);
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
            listaUsuarios[cantidadUsuarios++] = a;

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
            listaClientes[cantidadClientes++] = a;

            idConsecutivo = id_usuario+1;
            idConsecutivoClientes = id_cliente+1;
        }

    }
    fs.close();
}

void ControladorPrincipal::cargarRegistrosVentas()
{
    ifstream fs(archivoVentas);


    if(fs)
    {

        string linea, campo;

        while(getline(fs,linea))
        {


            stringstream ss(linea);

            getline(ss, campo, ';');
            int id_usuario = stoi(campo);

            getline(ss, campo, ';');
            int id_ventas = stoi(campo);

            getline(ss, campo, ';');
            string descripcion = campo;

            getline(ss, campo, ';');
            int monto = stoi(campo);

            Ventas a(id_usuario,id_ventas, descripcion, monto);
            listaVentas[cantidadVentas++] = a;

            idConsecutivo = id_usuario+1;
            idConsecutivoVentas = id_ventas+1;
        }

    }
    fs.close();
}

void ControladorPrincipal::cargarRegistrosAbonos()
{
    ifstream fs(archivoAbonos);


    if(fs)
    {

        string linea, campo;

        while(getline(fs,linea))
        {


            stringstream ss(linea);

            getline(ss, campo, ';');
            int id_usuario = stoi(campo);

            getline(ss, campo, ';');
            int id_abono = stoi(campo);

            getline(ss, campo, ';');
            int monto = stoi(campo) ;

            Abonos a(id_usuario,id_abono, monto);
            listaAbonos[cantidadAbonos++] = a;

            idConsecutivo = id_usuario+1;
            idConsecutivoAbonos = id_abono+1;
        }

    }
    fs.close();
}



Usuario& ControladorPrincipal::usuarioActual()
{
    Usuario temporal = vistaPrin.inicioSeccionUsuario();

    for(int i=0; i < cantidadUsuarios; i++)
    {

        if(listaUsuarios[i].getUsuario() == temporal.getUsuario()&& listaUsuarios[i].getContrasena() == temporal.getContrasena())
        {

            usuarioLogeado = listaUsuarios[i] ;

            cout << usuarioLogeado.toString() << endl;

        }


    }
    return usuarioLogeado;
}

Usuario& ControladorPrincipal::getUsuarioLogeado()
{
    return usuarioLogeado;
}

void ControladorPrincipal::buscarClienteActual()
{
    indiceClienteActual = -1;

    for(int i = 0; i < cantidadClientes; i++)
    {
        if(listaClientes[i].getIdUsuario() == usuarioLogeado.getIdUsuario())
        {
            indiceClienteActual = i;
            break;
        }
    }
}

Cliente& ControladorPrincipal::getClienteActual()
{
    return listaClientes[indiceClienteActual];
}

void ControladorPrincipal::guardarRegistroClientes()
{
    ofstream fs(archivoCliente);
    if(fs)
    {
        for(int i=0; i< cantidadClientes; i++)
        {
            fs << listaClientes[i].toFileCliente() << endl;
        }
    }
    fs.close();
}

int ControladorPrincipal::getCantidadVentas()
{
    return cantidadVentas;
}

int ControladorPrincipal::getCantidadAbonos()
{
    return cantidadAbonos;
}

Ventas (&ControladorPrincipal::getListaVentas())[1000]
{
    return listaVentas;
}

Abonos (&ControladorPrincipal::getListaAbonos())[1000]
{
    return listaAbonos;
}

void ControladorPrincipal::menuAdministrador(Usuario adminUser)
{

}




