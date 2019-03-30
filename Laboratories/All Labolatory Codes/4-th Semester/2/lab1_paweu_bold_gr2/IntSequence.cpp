#include <iostream>
using namespace std;
#include "IntSequence.h"


IntSequence::IntSequence(): _n(0), _tab(NULL), _aktualny(0) {

}

IntSequence::~IntSequence() {
	if (_n)
		delete[] _tab;
}

IntSequence& IntSequence::operator << (const int num) {
	int* stare = _tab;
	_tab = new int[_n+1];
	for (int i=0; i < _n; ++i)
		_tab[i] = stare[i];
	_tab[_n++] = num;
	if (_n > 1)
		delete[] stare;
	return *this;
}

int IntSequence::operator () () const {
	return _tab[_aktualny];
}

IntSequence& IntSequence::operator ++ (int) {
	if (++_aktualny == _n)
		_aktualny = 0;
	return *this;
}

IntSequence& IntSequence::operator -- (int) {
	if (--_aktualny < 0)
		_aktualny = _n-1;
	return *this;
}

IntSequence::operator int() const {
	return _tab[_aktualny];
}

bool IntSequence::finished() const {
	return (_aktualny == _n-1);
}

ostream& operator << (ostream& output, const IntSequence& seq) {
	return output << seq.dajAktualny();
}