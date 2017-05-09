#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H
#include <iostream>
#include <exception>


class ValorMuitoAcimaException: public std::exception{
public:
	ValorMuitoAcimaException(void){}

	virtual const char* what(){
		return "Valor Muito Acima";
	}
};

#endif