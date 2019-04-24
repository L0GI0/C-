#include "ObiektMiotajacy.h"
#include "Typ.h"

void Przetworz (Typ * wyjatek){
	std::cout << "Przetworz - wyjatek typu " << wyjatek->getType() << " o adresie .. " << std::endl;
	throw;
}