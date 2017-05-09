#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#include <exception>


class SaldoNaoDisponivelException : public std::exception {

public:

	SaldoNaoDisponivelException(){};

	virtual const char * what(){
		
		return "Nao foi possivel realizar o saque, valor maior que saldo disponivel\n";
	}

};

#endif