#include "Ventas.h"

Ventas::Ventas()
{
    //ctor
}

Ventas::~Ventas()
{
    //dtor
}

Ventas::Ventas(int id_usuario, int id_venta, string descripcion, int monto): Usuario(id_usuario)
{
    this -> id_venta = id_venta;
    setDescripcion(descripcion);
    setMonto(monto);
}


int Ventas::getIdVenta()
{
    return id_venta;
}

string Ventas::getDescripcion()
{
    return descripcion;
}

void Ventas::setDescripcion(string descripcion)
{
    this -> descripcion = descripcion;
}

int Ventas::getMonto()
{
    return monto;
}

void Ventas::setMonto(int monto)
{
    this -> monto = monto;
}

