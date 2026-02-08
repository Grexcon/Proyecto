#ifndef ABONOS_H
#define ABONOS_H

#include <Usuario.h>


class Abonos : public Usuario
{
    public:
        Abonos();
        Abonos(int id_usuario,int id_abono, string monto);
        virtual ~Abonos();

    protected:

    private:
        int id_abono;
        string monto;
};

#endif // ABONOS_H
