#include "Terreno.h"
#include "Endereco.h"
#include <string>


Terreno::Terreno(double area, string descricao, Endereco im)
{
    this->area = area;
    this->descricao = descricao;
    this-> im = im;
}

string Terreno::getDescricao(){
    descricao = "Rua: " + im.getLogradouro()
    + "\nBairro: " + im.getBairro()
    + "\nNumero: " + std::to_string(im.getNumero())
    + "\nCidade: " + im.getCidade()
    + "\nCep: " + im.getCep()
    + "\nArea: " + std::to_string(area);
    return descricao;
}

Terreno::Terreno()
{
    //ctor
}

Terreno::~Terreno()
{
    //dtor
}
