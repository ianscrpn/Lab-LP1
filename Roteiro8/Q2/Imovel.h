#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>

class Imovel{

protected:
	Endereco endereco;
	std::string descricao;

public: 
	std::string getEndereco(){return endereco;}
	virtual std::string getDescricao()=0;
	Imovel(std::string);
	~Imovel();

}
	
#endif