#pragma once 
#include "Miotacz.h"
#include "Type.h"


void HandleExcept(Type * p){
	 std::cout << "Przetworz wyjatek"  << p->getName() << std::endl;
	 throw;
}