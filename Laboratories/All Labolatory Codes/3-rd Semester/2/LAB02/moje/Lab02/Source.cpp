// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal sie
// i dzialal zgodnie z ponizszym opisem, a wynik jego dzialania byl
// taki sam jak podany na koñcu tego pliku.

// Nalezy zaimplementowac klasy reprezentuj¹ce osoby. Osoby mog¹
// nale¿eæ do ró¿nych kategorii: kobieta, mê¿czyzna, pilot,
// kurier. Je¿eli osoba nie nalezy do danej kategorii, to nie powinno
// byc mozliwosci dodania jej do tablicy przeznaczonej dla tej
// kategorii

// Po odkomentowaniu ktorejkolwiek z linii definiuj¹cych makra ERROR_
// powinien pojawic sie blad kompilacji. Jezeli taki blad sie nie
// pojawi kod zostanie uznany za niekompilujacy sie poprawnie, co
// bedzie rownoznaczne z otrzymaniem 0 punktow.

// Ostateczne klasy reprezentuj¹ce osoby np. Leela, Fry, mog¹ byæ
// zaimplementowane w jednym pliku.

// UWAGA! W tym zadaniu wazne jest zarzadzanie pamiecia. Jakiekolwiek
// problemy z pamiecia oznaczaja -1.5 punktu za wykonanie programu.

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab03. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). Prosze utrzymac spojnosc
// nazewnictwa w programie oraz jezyka w komentarzach.

// Przy wykonaniu zadania nie wolno korzystaæ z internetu, notatek,
// ani ¿adnych innych materia³ów (w tym w³asnych wczeœniej
// przygotowanych plików)

// Kody Ÿród³owe musz¹ znajdowaæ siê w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu musz¹ byæ równe 700 (tylko dostêp dla
// w³aœciciela).

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// ~gach/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie

#include"lab03.h"
#include<iostream>

//#define ERROR_FIRST
//#define ERROR_SECOND
//#define ERROR_THIRD
//#define ERROR_FOURTH
//#define ERROR_FIFTH




int main()
{
	// utworz tablice
	const int liczbaKobiet = 2 + 1;
	int licznikKobiet = 0;
	Kobieta* tablicaKobiet[liczbaKobiet];

	const int liczbaMezczyzn = 3 + 1;
	int licznikMezczyzn = 0;
	Mezczyzna* tablicaMezczyzn[liczbaMezczyzn];

	const int liczbaKurierow = 1 + 1;
	int licznikKurierow = 0;
	Kurier* tablicaKurierow[liczbaKurierow];

	const int liczbaPilotow = 1 + 1;
	int licznikPilotow = 0;
	Pilot* tablicaPilotow[liczbaPilotow];

	const int liczbaPostaci = liczbaKobiet + liczbaMezczyzn + liczbaPilotow + liczbaKurierow;
	int licznikPostaci = 0;
	Postac* tablicaPostaci[liczbaPostaci];


	// dodaj obiekty do tablicy kobiet
	tablicaKobiet[licznikKobiet++] = new Leela;
	
	tablicaKobiet[licznikKobiet++] = new Amy;

	#ifdef ERROR_FIRST
	tablicaKobiet[licznikKobiet++] = new Fry;
	#endif

	std::cout<<"----- Kobiety -----\n";
	for (int i = 0; i < licznikKobiet; ++i) {
	std::cout<<"Imie: "<<tablicaKobiet[i]->imie<<"\n";
	delete tablicaKobiet[i];
	}

	// dodaj obiekty do tablicy mezczyzn
	std::cout << "FRYYYY" << std::endl;
	tablicaMezczyzn[licznikMezczyzn++] = new Fry;
	std::cout << "HERMEEES" << std::endl;
	tablicaMezczyzn[licznikMezczyzn++] = new Hermes;
	tablicaMezczyzn[licznikMezczyzn++] = new Professor;

	#ifdef ERROR_SECOND
	tablicaMezczyzn[licznikMezczyzn++] = new Leela;
	#endif

	std::cout<<"----- Mezczyzni -----\n";
	for (int i = 0; i < licznikMezczyzn; ++i) {
	std::cout<<"Imie: "<<tablicaMezczyzn[i]->imie<<"\n";
	delete tablicaMezczyzn[i];
	}

	// dodaj obiekty do tablicy kurierow
	tablicaKurierow[licznikKurierow++] = new Fry;

	#ifdef ERROR_THIRD
	tablicaKurierow[licznikKurierow++] = new Leela;
	#endif

	std::cout<<"----- Kurierzy -----\n";
	for (int i = 0; i < licznikKurierow; ++i) {
	std::cout<<"Imie: "<<tablicaKurierow[i]->imie<<"\n";
	delete tablicaKurierow[i];
	}

	// dodaj obiekty do tablicy pilotow
	tablicaPilotow[licznikPilotow++] = new Leela;

	#ifdef ERROR_FOURTH
	tablicaPilotow[licznikPilotow++] = new Fry;
	#endif

	std::cout<<"----- Piloci -----\n";
	for (int i = 0; i < licznikPilotow; ++i) {
	std::cout<<"Imie: "<<tablicaPilotow[i]->imie<<"\n";
	delete tablicaPilotow[i];
	}


	// dodaj obiekty do tablicy postaci
	tablicaPostaci[licznikPostaci++] = new Leela;
	tablicaPostaci[licznikPostaci++] = new Amy;
	tablicaPostaci[licznikPostaci++] = new Fry;
	tablicaPostaci[licznikPostaci++] = new Hermes;
	tablicaPostaci[licznikPostaci++] = new Professor;

	#ifdef ERROR_FIFTH
	tablicaPostaci[licznikPostaci++] = new Postac;
	#endif

	std::cout<<"----- Postacie -----\n";
	for (int i = 0; i < licznikPostaci; ++i) {
	tablicaPostaci[i]->PrzedstawSie();
	std::cout<<"Imie: "<<tablicaPostaci[i]->imie<<"\n";
	delete tablicaPostaci[i];
	}
	
	getchar();

	return 0;
}
/*
----- Kobiety -----
Imie: Leela
Imie: Amy
----- Mezczyzni -----
Imie: Fry
Imie: Hermes
Imie: Professor
----- Kurierzy -----
Imie: Fry
----- Piloci -----
Imie: Leela
----- Postacie -----
Nazywam sie Leela jestem pilotem
Imie: Leela
Nazywam sie Amy
Imie: Amy
Nazywam sie Fry jestem chlopcem na posylki
Imie: Fry
Nazywam sie Hermes
Imie: Hermes
Nazywam sie Professor
Imie: Professor
*/
