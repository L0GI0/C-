#pragma once

class Jacht: public StatekSilnikowy, public Zaglowiec {
public:
	Jacht(const float masa): Statek(masa), StatekSilnikowy(masa), Zaglowiec(masa) {}
};