#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"


class Apartamento : public Imovel
{
    public:
        string getDescricao();
        Apartamento(string,double,int,string,Endereco);
        Apartamento();
        virtual ~Apartamento();
    protected:
    private:
        string posicao;
        double valorDoComdominio;
        int numeroDeVagasDeGaragem;
};

#endif // APARTAMENTO_H
