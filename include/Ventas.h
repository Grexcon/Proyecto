#ifndef VENTAS_H
#define VENTAS_H

#include <Usuario.h>

class Ventas : public Usuario
{
    public:
        Ventas();
        Ventas(int id_usuario,int id_venta, string descripcion,int monto);
        virtual ~Ventas();

        int getIdVenta();

        string getDescripcion();
        void setDescripcion(string descripcion);

        int getMonto();
        void setMonto(int monto);



    protected:

    private:
        int id_venta;
        string descripcion;
        int monto;
};

#endif // VENTAS_H
