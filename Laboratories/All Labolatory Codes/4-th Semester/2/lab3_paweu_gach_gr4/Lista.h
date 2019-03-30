#ifndef LISTA_H
#define LISTA_H

/**
*	Klasa reprezentujaca liste
*/

class Lista
{
public:
	// Tworzenie pustej listy
	Lista();
	// Tworzenie listy z zadanej tablicy
	Lista(int* tablica, int rozmiarTablicy);
	// Destruktor listy
	// ~Lista();
	// Kopiowanie listy, na potrzeby dodawania
	Lista(const Lista& lista);
	// Dodawanie elementu do listy (liczby)
	Lista operator + (int nowyElement) const;
	// Dodawanie dwoch list do siebie
	Lista operator + (const Lista dodawanaLista) const;
	// Zwrocenie elementu o zadanym indeksie
	int& operator [] (int indeks);
	// Przypisanie do listy elementu na sam koniec (pracuje na oryginale)
	Lista& operator += (int nowyElement);
	// Zwraca koniec listy
	Element* koniec() const;
	// Zwraca poczatek listy
	Element* poczatek() const;
	// Klasa sluzaca do poruszania sie po liscie
	class Iterator {
		public:
			// Ustawienie iteratora na poczatkowa wartosc
			Iterator(Element* wezel): _aktualny(wezel) {}
			// Operator dereferencji
			int operator * () { return _aktualny->ZwrocWartosc(); }
			// Poruszanie sie w gore listy
			void operator++ () { _aktualny = _aktualny->DajNastepny(); }
			// Operator sprawdzajacy czy dotarlismy na koniec listy
			bool operator != (const Iterator& drugi) { return (_aktualny != drugi._aktualny); }
		private:
			Element* _aktualny;
	};
private:
	// Wskaznik na poczatek listy
	Element* _start;
};

// Wypisywanie listy na ekran
std::ostream& operator << (std::ostream& wyjscie, const Lista& lista);


#endif