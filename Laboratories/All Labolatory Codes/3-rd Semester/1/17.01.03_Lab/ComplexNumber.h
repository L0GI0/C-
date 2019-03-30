#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
/**
* Klasa opisujaca liczbe zespolona - twor posiadajacy czesc rzeczywista i czesc urojona
*/
class ComplexNumber {
private:
	int _re; //!< Czesc rzeczywista liczby zespolonej
	int _im; //!< Czesc urojona liczby zespolonej
public:
	/**
	* \param re Czesc rzeczywista
	*/
	ComplexNumber(int re); //!< Konstruktor tworzacy liczbe rzeczywista
	/**
	* \param re Czesc rzeczywista
	* \param im Czesc urojona
	*/
	ComplexNumber(int re, int im); //!< Konstruktor tworzacy liczbe zespolona
	void Print() const; //!< Wypisywanie liczby zespolonej
	/**
	* \param source Liczba z której kopiujemy wartości
	*/
	void Set(const ComplexNumber& source); //!< Funkcja do kopiowania wartosci z innej liczby (potrzebna w ComplexArray::Set)
	/**
	* \param added Dodawana liczba zespolona
	* \return Wynik dodawania
	*/
	ComplexNumber& Add(const ComplexNumber& added); //!< Dodawanie liczb zespolonych
};

#endif