#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>

class Conta : public IConta {

protected:

	std::string nomeCliente, numeroConta;
	double salarioMensal, saldo, limite;

public:

	void setNomeCliente(std::string);
	void setSalarioMensal(double);
	void setNumeroConta(std::string);
	void setSaldo(double);
	void setLimite(double);
	std::string getNomeCliente(){return nomeCliente;}
	std::string getNumeroConta(){return numeroConta;}
	double getSalarioMensal(){return salarioMensal;}
	virtual double getSaldo(){return saldo;}
	double getLimite(){return limite;}

	void sacar(double);
	void depositar(double);

	virtual void definirLimite(void);

	Conta(std::string, double, std::string, double);

	virtual void tipoDeConta(void);
};

#endif