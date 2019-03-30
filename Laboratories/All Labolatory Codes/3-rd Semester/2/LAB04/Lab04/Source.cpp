// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na koncu tego
// pliku.

// Prosze klasy PrzedmiotKuchenny i PrzedmiotPokojowy oraz klasê
// Mieszkanie. Gdy do obiektu klasy mieszkanie dodawane s¹ obiekty, s¹
// one sortowane na pokojowe i kuchenne. Sortowanie ma byæ
// uniwersalne, a nie dzia³aæ tylko w tym jednym przypadku.

// Klasa przedmiot jest zaimplementowana w pliku Przedmiot.h. Te klase
// wolno modyfikowac, ale nie wolno dodawac do niej pol, metod (w tym
// konstruktorow) ani przodkow.

// Pliku lab5.cpp nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab05. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystaæ z internetu, notatek,
// ani ¿adnych innych materia³ów (w tym w³asnych wczeœniej
// przygotowanych plikow)

// Kody Ÿród³owe musz¹ znajdowaæ siê w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu musz¹ byæ równe 700 (tylko dostêp dla
// w³aœciciela).

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// ~gach/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_05

#include<iostream>

#include"lab05.h"
#include"Przedmiot.h"

int main()
{
	Przedmiot* tablica[] = { new PrzedmiotKuchenny("patelnia"),
		new PrzedmiotPokojowy("telwizor"),
		new PrzedmiotKuchenny("durszlak"),
		new PrzedmiotPokojowy("komoda"),
		new PrzedmiotPokojowy("akwarium")
	};
	const int rozmiarTablicy = sizeof(tablica) / sizeof(Przedmiot*);

	Mieszkanie kawalerka;
	for (int i = 0; i < rozmiarTablicy; ++i)
		kawalerka += tablica[i];

	std::cout << "=============== KAWALERKA ===============\n";
	kawalerka.wypisz_przedmioty_kuchenne();
	kawalerka.wypisz_przedmioty_pokojowe();

	Mieszkanie dwupokojowe;
	dwupokojowe << tablica[4] << tablica[2] << tablica[0] << tablica[3] << tablica[1];

	std::cout << "=============== DWUPOKOJOWE ===============\n";
	std::cout << dwupokojowe;

	for (int i = 0; i < rozmiarTablicy; ++i)
		delete tablica[i];
	getchar();
	return 0;
}
/*
=============== KAWALERKA ===============
*** kuchnia ***
patelnia
durszlak
*** pokoj ***
telwizor
komoda
akwarium
=============== DWUPOKOJOWE ===============
*** kuchnia ***
patelnia
durszlak
*** pokoj ***
akwarium
telwizor
komoda
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
DO ZADANIA BY£A DODANA TE¯ KLASA <Przedmiot.h>
Gach powiedzia³ ¿e kolejnoœæ w  >>>DWUPOKOJOWE<<<
jest b³edna powinna byæ:

=============== DWUPOKOJOWE ===============
*** kuchnia ***
durszlak
patelnia
*** pokoj ***
akwarium
komoda
telwizor
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
