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

double SistemaGerenciaFolha::consultaSalarioFuncionario(int m){

	int i, f=0;
	for(i=1;i<=TAM;i++){
		if(funcionarios[i-1]->getMatricula() == m){
			f=i;
		}
	}
	if(f==0){
		throw FuncionarioNaoExisteException();
	}else{
		return funcionarios[f-1]->calcularSalario();
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