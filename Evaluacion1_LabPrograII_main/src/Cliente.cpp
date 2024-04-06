#include "Cliente.h"
#include <string.h>
#include <iostream>
#include <stdio.h>

Cliente::Cliente(int id, string n, string a){
    this->idCliente = id;
    this->nombre = n;
    this->apellido = a;
}
int Cliente::getIdCliente(){
            return this->idCliente;
        }
        string Cliente::getNombre(){
            return this->nombre;
        }
        string Cliente::getApellido(){
            return this->apellido;
        }
Cliente::~Cliente()
{

}


