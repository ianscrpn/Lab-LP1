    #include "Casa.h"

Casa::Casa(int numeroDePavimentos, int quantidadeDeQuartos, double areaDoTerreno, double areaConstruida, string descricao, Endereco im)
{
    this->numeroDePavimentos = numeroDePavimentos;
    this->quantidadeDeQuartos = quantidadeDeQuartos;
    this->areaDoTerreno = areaDoTerreno;
    this->areaConstruida = areaConstruida;
    this->descricao = descricao;
    this->im = im;
}

string Casa::getDescricao(){
    cout << " descricao da casa" << endl;
    return descricao;
}

Casa::Casa()
{
    //ctor
}

Casa::~Casa()
{
    //dtor
}
