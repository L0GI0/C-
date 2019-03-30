#include "rozdzielacz.h"
#include <iostream>
#include <cstring>

using namespace std;


Rozdzielacz skonstruuj(const char * lancuch, char divider){
	static Rozdzielacz nowy; 
	nowy.string = (char *) lancuch;
	nowy.previous = nowy.string;
	nowy.rozdzielacz = divider;
	return nowy;
}

 
void wypisz(const Rozdzielacz *divider){
	std::cout << divider->string << std::endl;
}


int nastepny(Rozdzielacz *divider){
	cout << endl;
	divider->previous = divider->string;
	//cout << endl << "Divider string:" << divider->string << endl;
	divider->string = strchr(divider->string, divider->rozdzielacz);
	if(*divider->string == divider->rozdzielacz)
		return 1;

	return 0;
}

 
void kopiuj(Rozdzielacz *r1, char *buffor ){
	int howMany = r1->string - r1->previous - 1;
	//cout << endl;
	//cout << "How many:  " << howMany << endl;
	//cout << endl;
	strncpy(buffor, r1->previous, howMany);
	while(*r1->string == r1->rozdzielacz)
			++r1->string;
}
