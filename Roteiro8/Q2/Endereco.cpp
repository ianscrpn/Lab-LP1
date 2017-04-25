#include "Endereco.h"
#include <string>

using namespace std;

Endereco::Endereco(){

}


Endereco::Endereco(string logradouro, string bairro, int numero, string cidade, string cep )
{
    this->logradouro = logradouro;
    this->bairro = bairro;
    this->numero = numero;
    this->cidade = cidade;
    this->cep = cep;

}
Endereco::~Endereco()
{
    //dtor
}



void Endereco::setLogradouro(string logradouro)
{
    this->logradouro = logradouro;
}

void Endereco::setBairro(string bairro)
{
    this->bairro = bairro;
}

void Endereco::setNumero(int numero)
{
    this->numero = numero;
}

void Endereco::setCidade(string cidade)
{
    this->cidade = cidade;
}
void Endereco::setCep(string cep)
{
    this->cep = cep;
}
