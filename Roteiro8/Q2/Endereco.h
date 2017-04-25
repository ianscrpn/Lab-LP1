#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>
using namespace std;

class Endereco
{
    private:
        string logradouro;
        string bairro;
        int numero;
        string cidade;
        string cep;
    public:
        void setLogradouro(string);
        void setBairro(string);
        void setNumero(int);
        void setCidade(string);
        void setCep(string);

        string getLogradouro(){return logradouro;}
        string getBairro(){return bairro;}
        int getNumero(){return numero;}
        string getCidade(){return cidade;}
        string getCep(){return cep;}

        Endereco();
        Endereco(string,string,int,string,string);
        virtual ~Endereco();

};

#endif // ENDERECO_H
