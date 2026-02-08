#include "Ventas.h"

Ventas::Ventas()
{
    //ctor
}

Ventas::~Ventas()
{
    //dtor
}

Ventas::Ventas(int id_usuario, int id_venta, string descripcion, string monto): Usuario(id_usuario)
{
    this -> id_venta = id_venta;
    this -> descripcion = descripcion;
    this -> monto = monto;
}
