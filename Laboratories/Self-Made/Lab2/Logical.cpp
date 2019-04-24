#include "Logical.h"

bool Logical::eval(const Logical & o, bool a, bool b){
	return o.result(a, b);
}

bool OR::result(bool a, bool b)const{
	return a || b;
}

bool AND::result(bool a, bool b)const{
	return a && b;
}


bool NOT::result(bool a, bool b)const{
	return !a;
}