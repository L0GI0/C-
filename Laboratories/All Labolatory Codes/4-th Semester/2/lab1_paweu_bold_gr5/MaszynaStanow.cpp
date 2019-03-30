#include <iostream>
#include "MaszynaStanow.h"

using namespace std;

MaszynaStanow::MaszynaStanow(): _liczbaStanow(0), _tablicaStanow(NULL), _aktualnyStan(0) {

}

MaszynaStanow::~MaszynaStanow() {
	if (!_liczbaStanow)
		return;
	for (int i=0; i < _liczbaStanow; ++i)
		delete _tablicaStanow[i];
	delete[] _tablicaStanow;
}

void MaszynaStanow::start() {

}

MaszynaStanow& MaszynaStanow::operator += (Stan* dodawanyStan) {
	Stan** stareStany = _tablicaStanow;
	_tablicaStanow = new Stan*[_liczbaStanow+1];
	for (int i=0; i < _liczbaStanow; ++i)
		_tablicaStanow[i] = stareStany[i];
	_tablicaStanow[_liczbaStanow++] = dodawanyStan;
	if (stareStany)
		delete[] stareStany;
	return *this;
}

MaszynaStanow& MaszynaStanow::operator ++ () {
	if (_aktualnyStan < _liczbaStanow-1)	
		_aktualnyStan++;
	return *this;
}

MaszynaStanow& MaszynaStanow::operator -- () {
	if (_aktualnyStan > 0)
		_aktualnyStan--;
	return *this;
}

MaszynaStanow MaszynaStanow::operator () () {
	MaszynaStanow tmp;
	if (_tablicaStanow)
		cout << "Wykonanie w stanie: " << _tablicaStanow[_aktualnyStan]->_stan << "\n";
	return tmp;
}

std::ostream& operator << (std::ostream& output, const MaszynaStanow& maszyna) {
	cout << "MaszynaStanow:\n";
	Stan** dostepneStany = maszyna.PrzekazStany();
	for (int i=0; i < maszyna.LiczbaStanow(); ++i) {
		cout << i << " " << dostepneStany[i]->_stan << ((i == maszyna.AktualnyStan()) ? " <" : "") << "\n";
	}

	return output;
}