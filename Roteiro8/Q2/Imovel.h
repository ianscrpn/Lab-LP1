#ifndef IMOVEL_H
#define IMOVEL_H
#include "Endereco.h"
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

class Imovel
{
    public:
        //Imovel(string, Endereco);
        virtual string getDescricao()=0;
        Endereco getEndereco(){return im;}
        Imovel();
        virtual ~Imovel();
    protected:
        string descricao;
        Endereco im;
};

#endif // IMOVEL_H
