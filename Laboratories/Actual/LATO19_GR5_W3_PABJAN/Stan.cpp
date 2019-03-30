#include "Stan.h"


void ZbieranieDanych::operator()(){
	// Prosze podac dana: Adres email = ?, podano 'Nowak@mail.com'
	_data = "Nowak@mail.com";
	std::cout << "Prosze podac dana: " << _type << "= ? , podano " << _data << std:: endl;
}

void Podsumowanie::operator()(){
	// Podsumowanie: 
 // * Adres email = Nowak@mail.com
	
	std::cout << "Podsumowanie: " << std::endl;

}

void ZbieranieDanych::podsumowanie() const {
	// * Adres email = Nowak@mail.com
		std::cout << "* " << _type << " = " << _data << std::endl;
	}

void Podsumowanie::podsumowanie() const{

}