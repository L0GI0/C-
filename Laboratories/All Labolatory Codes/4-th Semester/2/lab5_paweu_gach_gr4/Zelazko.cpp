#include "Main.h"

Zelazko::Zelazko(float cenaZelazka, std::string producent): Przedmiot(cenaZelazka, producent), _temperatura(0) {

}

void Zelazko::UstawTemperature(int temperatura) {
	_temperatura = temperatura;
}

void Zelazko::WypiszWlasciwosci() const {
	std::cout << _nazwa << " cena: " << _cena << ". temperatura: " << _temperatura << std::endl;
}
