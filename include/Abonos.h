#ifndef ABONOS_H
#define ABONOS_H

#include <Usuario.h>


class Abonos : public Usuario
{
    public:
        Abonos();
        Abonos(int id_usuario,int id_abono, int monto);
        virtual ~Abonos();

        int getIdAbono();

        int getMonto();
        void setMonto(int monto);

    protected:

    private:
        int id_abono;
        int monto;
};

#endif // ABONOS_H
