#include "Casa.h"
#include "Terreno.h"
#include "Apartamento.h"
#include <string>
#include <iostream>

int main(){

	Imovel * rua7[2];

	rua7[0] = new Casa(2, 4, 52.5, 45,"",im("Edson Ramalho", "Jose Americo", 104, "Bahia", "583161-031") )
	rua7[1] = new Casa(4, 8, 85.5, 62,"",im("Maria Rosa", "Mandacaru", 104, "Sao Paulo", "5156512-544") )

	cout << "Descricao do Imovel 1" << rua7[0]->getDescricao() << endl;
	cout << "Descricao do Imovel 2" << rua7[1]->getDescricao() << endl;


	return 0;
}