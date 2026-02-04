#ifndef USUARIO_H
#define USUARIO_H


class Usuario
{
    public:
        Usuario();
        Usuario(int id_usuario, string usuario, string contrase�a, string rol);
        virtual ~Usuario();

        int getIdUsuario();
        string getUsuario();
        int getContrase�a();
        int getRol();


    protected:

    private:
};

#endif // USUARIO_H
