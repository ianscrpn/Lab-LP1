#include "Conta.h"
#include <string>
#include <iostream>

using namespace std;

Conta::Conta(string nom, double sal, string num, double s){
	nomeCliente = nom;
	salarioMensal = sal;
	numeroConta = num;
	saldo = s;
}

void Conta::setNomeCliente(string nom){
	nomeCliente = nom;
}

void Conta::setSalarioMensal(double sal){
	salarioMensal = sal;
}

void Conta::setNumeroConta(string num){
	numeroConta = num;
}

void Conta::setSaldo(double s){
	saldo = s;
}

void Conta::setLimite(double lim){
	limite = lim;
}

void Conta::definirLimite(void){
	limite = 2*salarioMensal;
}

void Conta::sacar(double x){
	if(saldo>x){
		saldo -= x;
	}else{
		cout << "Nao foi possivel realizar o saque, valor maior que saldo disponivel\n" << endl;
	}
}

void Conta::depositar(double x){
	saldo += x;
}

void Conta::tipoDeConta(void){
	cout << "\nConta Padrao\n" << endl;
}