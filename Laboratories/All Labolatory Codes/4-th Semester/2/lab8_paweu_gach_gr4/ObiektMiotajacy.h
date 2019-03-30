#pragma once

/**
*	Obiekt ktory wyrzuca wyjatek
*/
class ObiektMiotajacy {
public:
	/**
	*	Metoda wyrzucajaca wyjatek
	*	Zapisuje w wyjatku informacje o miotaczu wyjatkow, celem pozniejszej dealokacji pamieci
	*/
	void Rzuc() { typ2* wyjatek = new typ2; wyjatek->UstawMiotacz(this); throw wyjatek; }
};