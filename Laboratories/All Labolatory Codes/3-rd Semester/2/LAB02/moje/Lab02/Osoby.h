#ifndef OSOBY_H
#define OSOBY_H


class Fry: public Mezczyzna, public Kurier, public Postac, public Osoba {
public:
	Fry():Mezczyzna("Fry"), Kurier("Fry"), Postac("Fry"), Osoba("Fry")
	{};

};

class Hermes: public Mezczyzna, public Postac {
public:
	Hermes() : Mezczyzna("Hermes"), Postac("Hermes")
	{};

};


class Professor : public Mezczyzna, public Postac {
public:
	Professor() : Mezczyzna("Professor"), Postac("Professor")
	{};

};

class Leela: public Kobieta, public Pilot, public Postac {
public:
	Leela() : Kobieta("Leela"), Pilot("Leela"), Postac("Leela")
	{};

};

class Amy : public Kobieta, public Postac {
public:
	Amy() : Kobieta("Amy"), Postac("Amy")
	{};

};
#endif