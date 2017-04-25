#ifndef CASA_H
#define CASA_H
#include "Imovel.h"

class Casa : Imovel
{
    public:
        string getDescricao();
        Casa(int,int,double,double,string,Endereco);
        Casa();
        virtual ~Casa();
    protected:
    private:
        int numeroDePavimentos;
        int quantidadeDeQuartos;
        double areaDoTerreno;
        double areaConstruida;
};

#endif // CASA_H
