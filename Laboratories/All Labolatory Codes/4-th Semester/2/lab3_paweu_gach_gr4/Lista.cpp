#include "Main.h"

Lista::Lista(): _start(NULL) {

}

Lista::Lista(int* tablica, int rozmiarTablicy) {
	_start = new Element(tablica[0]);
	Element* tymczasowy = _start;
	int i=0;
	while (++i < rozmiarTablicy) {
		tymczasowy->ZmienNastepny() = new Element(tablica[i]);
		tymczasowy = tymczasowy->DajNastepny();
	}
}

// Lista::~Lista() {
	// std::cout << "Destruktor\n";
	// Element* tmp;
	// while (_start != NULL) {
	// 	tmp = _start->DajNastepny();
	// 	delete _start;
	// 	_start = tmp;
	// }
// }

Lista::Lista(const Lista& lista) {
	if (!(lista._start)){
		_start = NULL;
	}
	else {
		_start = new Element(lista._start->DajWartosc());
		Element* tymczasowy = _start;
		Element* tymczasowyKopia = lista._start;
		while (tymczasowyKopia->DajNastepny() != NULL) {
			tymczasowy->ZmienNastepny() = new Element(tymczasowyKopia->DajNastepny()->DajWartosc());
			tymczasowy = tymczasowy->DajNastepny();
			tymczasowyKopia = tymczasowyKopia->DajNastepny();
		}
	}
}

Lista Lista::operator + (int nowyElement) const {
	Lista nowaLista(*this);
	if (!_start)
		nowaLista._start = new Element(nowyElement);
	else {
		Element* tymczasowy = nowaLista.koniec();
		Element* dodawanyElement = new Element(nowyElement);
		tymczasowy->ZmienNastepny() = dodawanyElement;
	}
	return nowaLista;
}

Lista Lista::operator + (const Lista dodawanaLista) const {
	Lista nowaLista(*this);
	// Lista dodawana(dodawanaLista);
	Element* tymczasowy = nowaLista.koniec();
	tymczasowy->ZmienNastepny() = dodawanaLista._start;
	dodawanaLista.koniec()->ZmienNastepny() = NULL;
	return nowaLista; 
}

int& Lista::operator [] (int indeks) {
	Element* tymczasowy = _start;
	int i=0;
	while (i++ < indeks)
		tymczasowy = tymczasowy->DajNastepny();
	return tymczasowy->DajWartosc();
}

Lista& Lista::operator += (int nowyElement) {
	Element* tymczasowy = koniec();
	tymczasowy->ZmienNastepny() = new Element(nowyElement);
	return *this;
}

Element* Lista::koniec() const {
	Element* tymczasowy = _start;
	while (tymczasowy->DajNastepny() != NULL)
		tymczasowy = tymczasowy->DajNastepny();
	return tymczasowy;
}

Element* Lista::poczatek() const {
	return _start;
}

std::ostream& operator << (std::ostream& wyjscie, const Lista& lista) {
	Element* tymczasowy = lista.poczatek();
	while (tymczasowy != NULL) {
		wyjscie << tymczasowy->ZwrocWartosc() << " ";
		tymczasowy = tymczasowy->DajNastepny();
	}
	return wyjscie;
}