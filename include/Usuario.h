#ifndef USUARIO_H
#define USUARIO_H


class Usuario
{
    public:
        Usuario();
        Usuario(int id_usuario, string usuario, string contraseña, string rol);
        virtual ~Usuario();

        int getIdUsuario();
        string getUsuario();
        int getContraseña();
        int getRol();


    protected:

    private:
};

#endif // USUARIO_H
