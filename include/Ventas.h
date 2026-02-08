#ifndef VENTAS_H
#define VENTAS_H

#include <Usuario.h>

class Ventas : public Usuario
{
    public:
        Ventas();
        Ventas(int id_usuario,int id_venta, string descripcion,string monto);
        virtual ~Ventas();

    protected:

    private:
        int id_venta;
        string descripcion;
        string monto;
};

#endif // VENTAS_H
