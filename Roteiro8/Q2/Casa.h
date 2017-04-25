#ifndef CASA_H
#define CASA_H 
#include "Terreno.h"

class Casa:public Terreno{
private:
	int numeroDePavimentos;
	int quantidadeDeQuartos;
	double areaDoTerreno;
	double areaConstruida;
public:
	void setNumeroDePavimentos(int);
	void setQuantidadeDeQuartos(int);
	void setAreaDoTerreno(double);
	void setAreaContruida(double);
	int getNumeroDePavimentos(){return numeroDePavimentos;}
	int getQuantidadeDeQuartos(){return quantidadeDeQuartos;}
	double getAreaDoTerreno(){return areaConstruida;}
}

#endif