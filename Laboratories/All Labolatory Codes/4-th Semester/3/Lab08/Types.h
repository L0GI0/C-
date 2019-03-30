#pragma once

#include "Main.h"
#include <string>

/*klasa typu 1*/
class typ1
{
	protected:
	
	public:
	typ1() {}
	void PrzedstawSie(); //zwraca komunikat co to za typ

};

/*klasa typu 2*/
class typ2
{
	public:
	typ2() {}
	void PrzedstawSie();	//zwraca komunikat co to za typ

};

/*klasa typu 3*/
class typ3
{
	public:
	void PrzedstawSie();	//zwraca komunikat co to za typ

};

/*klasa typu 4*/
class typ4
{
	public:
	void PrzedstawSie();	//zwraca komunikat co to za typ

};

void Przetworz1(typ1 * t1); //przetwarza wyjatek z klasy typu 1

void Przetworz1(typ2 * t2); //przetwarza wyjatek z klasy typu 2 i determinuje kolejny
