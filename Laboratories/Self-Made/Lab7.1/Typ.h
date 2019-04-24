#pragma once 

#include <iostream>

class ObiektMiotajacy;

class Typ{
public:

	virtual void PrzedstawSie() const = 0;
	virtual char getType() const = 0;
};


class typ1: public Typ{
public:

	void PrzedstawSie() const;
	char getType() const;

};


class typ2: public Typ{
public:

	void PrzedstawSie() const;
	char getType() const;

};


class typ3: public Typ{
public:

	void PrzedstawSie() const;
	char getType() const;

};


class typ4: virtual public Typ, public typ1{
public:
	typ4();
	typ4(ObiektMiotajacy * o);
	void PrzedstawSie() const;
	char getType() const;

private:

	ObiektMiotajacy * m_o;
};