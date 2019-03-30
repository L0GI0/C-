#ifndef ELEMENT_H
#define ELEMENT_H
/**
*	Klasa reprezentujaca element listy
*/
class Element {
public:
	// Tworzenie elementu o zadanej wartosci
	Element(int wartosc);
	// Zwrocenie adresu nastepnego elementu
	Element* DajNastepny() const { return _nastepny; }
	// Ustawianie nastepnego elementu
	Element*& ZmienNastepny() { return _nastepny; }
	// Nadpisanie wartosci
	int& DajWartosc() { return _wartosc; }
	// Zwrocenie wartosci
	int ZwrocWartosc() const { return _wartosc; }
	
private:
	// Wskaznik na nastepny element
	Element* _nastepny;
	// Wartosc elementu
	int _wartosc;
};
//Wypisywanie elementu na ekran
std::ostream& operator << (std::ostream& wyjscie, const Element& element);

#endif