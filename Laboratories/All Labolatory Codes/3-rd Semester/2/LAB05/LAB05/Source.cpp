// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal sie
// i dzialal zgodnie z ponizszym opisem, a wynik jego dzialania byl
// taki sam jak podany na ko�cu tego pliku.

// Nalezy zaimplementowac klasy reprezentuj�ce osoby. Osoby mog�
// nale�e� do r�nych kategorii: kobieta, m�czyzna, pilot,
// kurier. Klasy maj� metody: pozwalaj�ce wypisa� wszystkie klasy
// bazowe oraz wiek i imie postaci.

// Po odkomentowaniu ktorejkolwiek z linii definiuj�cych makra ERROR_
// powinien pojawic sie blad kompilacji w uruchomionej linii i tylko w
// tej lnii. Jezeli taki blad sie nie pojawi kod zostanie uznany za
// niekompilujacy sie poprawnie, co bedzie rownoznaczne z otrzymaniem
// 0 punktow.

// UWAGA! W tym zadaniu wazne jest zarzadzanie pamiecia. Jakiekolwiek
// problemy z pamiecia oznaczaja -1.5 punktu za wykonanie programu.

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab06. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). Prosze utrzymac spojnosc
// nazewnictwa w programie oraz jezyka w komentarzach.

// Przy wykonaniu zadania nie wolno korzysta� z internetu, notatek,
// ani �adnych innych materia��w (w tym w�asnych wcze�niej
// przygotowanych plik�w)

// Kody �r�d�owe musz� znajdowa� si� w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu musz� by� r�wne 700 (tylko dost�p dla
// w�a�ciciela).

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// ~gach/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie

#include"Lab06.h"
#include<iostream>

//#define ERROR_FIRST
//#define ERROR_SECOND


int main()
{
	using namespace std;

	Leela* pierwszaLeela = Leela::Utworz(26);
	Leela drugaLeela(28);
	Pilot* pierwszyPilot = pierwszaLeela;
	Postac* pierwszaPostac = pierwszaLeela;

	cout << "========== PierwszaPostac ==========\n";
	pierwszaPostac->WypiszHierarchie();

	cout << "========== Pierwsza Leela ==========\n";
	pierwszaLeela->PrzedstawSie();
	pierwszaLeela->WypiszHierarchie();

	cout << "========== Druga Leela ==========\n";
	drugaLeela.WypiszHierarchie();

	cout << "========== Pierwszy Pilot ==========\n";
	pierwszyPilot->WypiszHierarchie();

	cout << "========== Pierwsza Kobieta ==========\n";
	Kobieta amy("Amy", 17);
	amy.WypiszHierarchie();

#ifdef ERROR_FIRST
	Leela nielegalnaLeela = 16;
#endif

	Fry* pierwszyKurier = Fry::Utworz(1030);
	Fry pierwszyFry(1030);
	pierwszyFry.PrzedstawSie();

#ifdef ERROR_SECOND
	Fry nielegalnyFry = 1030;
#endif

	cout << "========== Pierwszy Fry ==========\n";
	pierwszyKurier->WypiszHierarchie();

	Postac::Posprzataj();
	getchar();
	return 0;
}
/*
========== PierwszaPostac ==========
Leela
Pilot
Kobieta
Postac
========== Pierwsza Leela ==========
Jestem Leela mam 26 lat.
Leela
Pilot
Kobieta
Postac
========== Druga Leela ==========
Leela
Pilot
Kobieta
Postac
========== Pierwszy Pilot ==========
Leela
Pilot
Kobieta
Postac
========== Pierwsza Kobieta ==========
Kobieta
Postac
Jestem Fry mam 1030 lat.
========== Pierwszy Fry ==========
Fry
Kurier
Mezczyzna
Postac
*/
