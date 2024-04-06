#ifndef CLIENTE_H
#define CLIENTE_H
#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;


class Cliente
{
    public:
        Cliente();
        Cliente(int, string, string);
        int getIdCliente();
        string getNombre();
        string getApellido();
        virtual ~Cliente();
    protected:
    private:
        int idCliente;
        string nombre;
        string apellido;
};

#endif // CLIENTE_H
