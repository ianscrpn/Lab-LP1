#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H
#include <iostream>
#include <exception>

class ValorAcimaException: public std::exception{
public:
	ValorAcimaException(void){}

	virtual const char* what(){
		return "Valor Acima";
	}

};
#endif