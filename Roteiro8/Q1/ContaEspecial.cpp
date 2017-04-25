#include "ContaEspecial.h"
#include <string>
#include <iostream>

ContaEspecial::ContaEspecial(std::string nom, double sal, std::string num, double s):Conta(nom, sal, num, s){
	setNomeCliente(nom);
	setSalarioMensal(sal);
	setNumeroConta(num);
	setSaldo(s);
}

void ContaEspecial::definirLimite(){
	int x;
	x = getSalarioMensal()*3;
	setLimite(x);
}

void ContaEspecial::tipoDeConta(void){
	std::cout << "\nConta Especial \n" << std::endl;
}