#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <iostream>
#include <exception>


class ValorAbaixoException: public std::exception{

public:
	ValorAbaixoException(void){}

	virtual const char* what(){
		return "Valor Abaixo";
	}

};

#endif