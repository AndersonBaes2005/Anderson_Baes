#ifndef CUENTA_H
#define CUENTA_H
#include "Cliente.h"
#include "Fecha.h"
#include "Abono.h"
#define DIMP 5



class Cuenta
{
    public:
        Cuenta();
        Cuenta(int, Cliente *);
        int getNumeroCuenta();
        void setNumeroCuenta(int);
        Cliente *getCliente();
        void setCliente(Cliente *cli);
        bool agregarAbono(Abono *ab);
        Abono **getLstAbonos();
        float getSaldo();
        int getContadorAbonos();


        virtual ~Cuenta();
    protected:
    private:
        int numeroCuenta;
        Cliente *cliente;
        Abono *lstAbonos[DIMP];
        float saldo;
        int contadorAbonos;

};

#endif // CUENTA_H
