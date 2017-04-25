#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"
#include "Endereco.h"

class Terreno : public Imovel
{
    public:
        string getDescricao();
        Terreno(double area, string descricao, Endereco im);
        Terreno();
        virtual ~Terreno();
    private:
        double area;
};

#endif // TERRENO_H
