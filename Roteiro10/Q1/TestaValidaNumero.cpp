#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
#include "TestaValidaNumero.h"
#include <iostream>
#include <exception>

using namespace std;

void TestaValidaNumero::validaNumero(int num){
	if(num <= 0)
		throw ValorAbaixoException();
	if(num > 100 && num < 1000)
		throw ValorAcimaException();
	if(num >= 1000)
		throw ValorMuitoAcimaException();
}