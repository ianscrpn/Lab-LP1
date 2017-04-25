#include "Apartamento.h"

Apartamento::Apartamento(string posicao,double valorDoComdominio, int numeroDeVagasDeGaragem,string descricao, Endereco im)
{
    this->posicao = posicao;
    this->valorDoComdominio = valorDoComdominio;
    this->numeroDeVagasDeGaragem = numeroDeVagasDeGaragem;
    this->descricao = descricao;
    this->im = im;
}


string Apartamento::getDescricao(){
    cout << " descricao do apartamento" << endl;
    return descricao;
}

Apartamento::Apartamento()
{
    //ctor
}

Apartamento::~Apartamento()
{
    //dtor
}
