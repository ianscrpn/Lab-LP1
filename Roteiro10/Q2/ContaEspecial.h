#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta{

public:
	void definirLimite(void);
	ContaEspecial(std::string, double, std::string, double);
	void tipoDeConta(void);
	double getSaldo(){return saldo +1;}
};

#endif