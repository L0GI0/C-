#include "golf.h"
#include <cstring>
#include <iostream>

using namespace std;

Golf::Golf(const char * name, int hc){
	strncpy(this->fullname, name, Len);
	this->handicapValue = hc;
}

Golf::Golf(){
	cout << "Please enter fullname: ";
	cin.getline(this->fullname, Len);
	cout << "Please enter handicap value: ";
	cin >> this->handicapValue;
	cin.ignore();	
}

extern void Golf::handicap(int hc){
	this->handicapValue = hc;
}

extern void Golf::showGolf() const{
	cout << "Name " << this->fullname << " hc: " << this->handicapValue << endl;
}

