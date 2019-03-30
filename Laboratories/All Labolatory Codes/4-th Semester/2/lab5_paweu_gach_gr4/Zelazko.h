#ifndef ZELAZKO_H
#define ZELAZKO_H


/**
*	Klasa bazowa dla obiektow typu zelazko
*/
class Zelazko: public Przedmiot {
public:
	/**
	*	Konstruktor obiektu typu zelazko
	*	\param cenaZelazka Cena zelazka
	*	\param producent Nazwa producenta zelazka
	*/
	Zelazko(float cenaZelazka, std::string producent);
	/**
	*	Ustawianie temperatury prasowania
	*	\param temperatura Ustawiana temperatura
	*/
	void UstawTemperature(int temperatura);
	/**
	*	Zwrocenie wartosci temperatury dla danego zelazka
	*	\return Aktualna temperatura
	*/
	int Temperatura() const { return _temperatura; }
	/**
	*	Wypisywanie wlasciwosci zelazka
	*	wypisywana jest jego cena oraz temperatura
	*/
	void WypiszWlasciwosci() const;

protected:
	/// Nazwa producenta zelazka
	std::string _nazwaProducenta;
	/// Cena zelazka
	float _cenaZelazka;
	/// Temperatura zelazka
	int _temperatura;
};

#endif