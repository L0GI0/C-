#ifndef COMPLEXARRAY_H
#define COMPLEXARRAY_H

/**
* Tablica liczb zespolonych
*/
class ComplexArray {
private:
	int _size; //Rozmiar tablicy
	ComplexNumber** _tab; //Tablica
public:
	/**
	* \param size Rozmiar tablicy
	*/
	ComplexArray(int size); //!< Konstruktor tworzacy tablice liczb zespolonych
	~ComplexArray(); //!< Destruktor (dealokacja pamieci)
	/**
	* \param at Numer pozycji w tablicy do zwrocenia
	* \return Obiekt na pozycji at
	*/
	ComplexNumber& At(int at); //!< Zwrocenie konkretnej komorki w tablicy
	/**
	* \param at Pozycja do nadpisania
	* \param number Liczba do nadpisania na pozycji at
	*/
	void Set(int at, const ComplexNumber& number); //!< Nadpisywanie konkretnej pozycji w tablicy
	void Print() const; //!< Wypisywanie tablicy
};

#endif