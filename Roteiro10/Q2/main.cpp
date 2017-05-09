#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include "SaldoNaoDisponivelException.h"
#include <exception>
#include <string>
#include <iostream>

using namespace std;

void tipo(Conta &x){
	x.tipoDeConta();	
}

void saldo(Conta &x){
	cout << x.getSaldo() << endl;
}

int main(){

	Conta c1("Ian", 30000, "003268-3", 500000);
	ContaEspecial c2("Bidu", 10000, "004355-8", 32.50);

	cout << "Saldo inicial: " << c1.getSaldo() << "\n\nSacando...\n" <<endl;
	c1.sacar(500);
	cout << "Saldo atual: " << c1.getSaldo() << "\n\nDepositando...\n" << endl;
	c1.depositar(70);
	cout << "Saldo final: "<< c1.getSaldo() << endl;

	try{
		cout << "\n\nSaldo inicial: " << c2.getSaldo() << "\n\nSacando...\n" <<endl;
		c2.sacar(250);
		cout << "Saldo atual: " << c2.getSaldo() << "\n\nDepositando...\n" << endl;
		c2.depositar(700);
		cout << "Saldo final: "<< c2.getSaldo() << "\n" << endl;
	}catch(SaldoNaoDisponivelException &ex){
		cout << ex.what() << endl;
	}

	saldo(c1);
	saldo(c2);

	tipo(c1);
	tipo(c2);

	return 0;
}