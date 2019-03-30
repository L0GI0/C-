#include "rozdzielacz.h"
#include <iostream>
#include <cstring>

using namespace std;


Rozdzielacz skonstruuj(const char * lancuch, char divider){
	Rozdzielacz *nowyRozdzielacz = new Rozdzielacz;
	nowyRozdzielacz->string = (char *) malloc(sizeof(lancuch));
	strcpy(nowyRozdzielacz->string, lancuch);
	nowyRozdzielacz->rozdzielacz = divider;
	//nowyRozdzielacz->previous = nowyRozdzielacz->string;
	//cout << "Rozdzielacz string " << nowyRozdzielacz->string << endl;
	return *nowyRozdzielacz;
}

 
void wypisz(const Rozdzielacz *divider){
	std::cout << divider->string << std::endl;
}


int nastepny(Rozdzielacz *divider){
	cout << endl;
	if((divider->string = strchr(divider->string, divider->rozdzielacz))){
		if((divider->string++) != NULL);
		return 1;
	}
	return 0;
}

 
void kopiuj(Rozdzielacz *r1, char *buffor ){
	//int howMany = r1->string - r1->previous;
	//cout << "How many:  " << howMany;
	strcpy(buffor, r1->string);
}
