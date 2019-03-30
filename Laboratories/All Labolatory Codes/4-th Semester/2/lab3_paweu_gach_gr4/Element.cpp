#include "Main.h"

Element::Element(int wartosc): _nastepny(NULL), _wartosc(wartosc) {

}

std::ostream& operator << (std::ostream& wyjscie, const Element& element) {
	return wyjscie << element.ZwrocWartosc();
}