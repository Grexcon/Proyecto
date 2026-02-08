#include "Abonos.h"

Abonos::Abonos()
{
    //ctor
}

Abonos::~Abonos()
{
    //dtor
}


Abonos::Abonos(int id_usuario, int id_abono, string monto): Usuario(id_usuario)
{
    this -> id_abono = id_abono;
    this -> monto = monto;
}
