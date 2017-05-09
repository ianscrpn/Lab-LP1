#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <exception>

class FuncionarioNaoExisteException : public std::exception{

public:
	FuncionarioNaoExisteException(){}

	virtual const char * what(){

		return "Funcionario nao existe\n";
	}
};

#endif