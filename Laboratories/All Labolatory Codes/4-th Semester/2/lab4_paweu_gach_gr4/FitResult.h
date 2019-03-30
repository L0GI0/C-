#ifndef FITRESULT_H
#define FITRESULT_H

/**
*	Klasa wyswietlajaca rezultaty dopasowania do odpowiednich prostych
*/

class FitResult {
public:
	/** 
	*	Konstruuje rozwiazanie,
	*	\param name Rownanie opisujace dopasowanie
	*/
	FitResult(std::string name);
	// Wyswietlenie rownania opisujacego dopasowanie
	std::string expression() const;
	// Zwrocenie liczby parametrow liczonych w danym dopasowaniu
	unsigned int nParams() const;
	// Wyczyszczenie tabel przy ponownym liczeniu wspolczynnikow
	void clearTables();
	/**
	*	Dodanie obliczonego parametru
	*	\param name Nazwa parametru
	*	\param value Wartosc obliczonego parametru
	*/
	void addParam(std::string name, float value);
	/**
	*	Zwrocenie parametru w celu wypisania
	*	\param i ID parametru
	*	\return Nazwa parametru o ID i
	*/
	std::string parameterName(const int i) const;/**
	*	Zwrocenie wartosci parametru w celu wypisania
	*	\param i ID parametru
	*	\return Wartosc parametru o ID i
	*/
	float parameterValue(const int i) const;
private:
	// Rownanie opisujace dopasowanie
	std::string _expression;
	// Tablica parametrow
	std::vector <std::string> _params;
	// Wartosci obliczonych parametrow
	std::vector <float> _paramValues;
};

#endif