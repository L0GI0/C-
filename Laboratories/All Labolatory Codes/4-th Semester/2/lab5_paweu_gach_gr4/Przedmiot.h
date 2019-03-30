#ifndef PRZEDMIOT_H
#define PRZEDMIOT_H

/**
*	Klasa bazowa dla wszystkich przedmiotow
*/
class Przedmiot {
public:
	/**
	*	Konstruktor uzupelniajacy informacje o przedmiocie
	*	\param cena Cena przedmiotu
	*	\param nazwa Nazwa przedmiotu
	*/
	Przedmiot(float cena, std::string nazwa);
protected:
	/// Nazwa przedmiotu
	std::string _nazwa;
	/// Cena przedmiotu
	float _cena;
};



#endif