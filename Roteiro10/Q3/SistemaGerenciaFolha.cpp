#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(){

}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *x[]){
	int i;

	for(i = 0; i<TAM; i++){
		funcionarios[i] = x[i];
	}
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(int x){

	if(x>TAM){
		throw FuncionarioNaoExisteException();
	}else{
		return funcionarios[x-1]->calcularSalario();
	}

}

double SistemaGerenciaFolha::calcularValorTotalFolha(void){
	int i;
	double valor = 0;

	for(i = 0; i<TAM; i++){
		valor += funcionarios[i]->calcularSalario();
	}
	return valor;
}