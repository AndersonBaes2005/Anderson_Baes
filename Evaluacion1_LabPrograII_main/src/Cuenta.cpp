#include "Cuenta.h"

Cuenta::Cuenta()
{
    this->numeroCuenta = 0;
    this->saldo = 0;
    this->contadorAbonos = 0;
}
Cuenta::Cuenta(int nc, Cliente *cli){
    this->numeroCuenta = nc;
    this->cliente = cli;
}

 int Cuenta::getNumeroCuenta(){
            return this->numeroCuenta;
        }
    void Cuenta::setNumeroCuenta(int nc){
            this->numeroCuenta = nc;
        }
        Cliente *Cuenta::getCliente(){
            return this->cliente;
        }
        void Cuenta::setCliente(Cliente *cli){
            this->cliente = cli;
        }
        bool Cuenta::agregarAbono(Abono *ab){
            bool retorno = false;
            if(this->contadorAbonos < DIMP){
                this->lstAbonos[this->contadorAbonos] = ab;
                this->contadorAbonos++;
                this->saldo -= ab->getMontoAbono();
                retorno = true;
            }
            return retorno;
        }
        Abono **Cuenta::getLstAbonos(){
            return this->lstAbonos;
        }
        float Cuenta::getSaldo(){
            return this->saldo;
        }
        int Cuenta::getContadorAbonos(){
            return this->contadorAbonos;
        }




Cuenta::~Cuenta()
{
    //dtor
}


