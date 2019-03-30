//***************************************************
// Program z paragrafu   10.16.1 str 472
//***************************************************

// Sprawdzony na Linuksie, kompilator: GNU gcc version 3.3.3 (SuSE Linux)

// NIE DZIALA na Windows XP,  kompilator: Microsoft Visual C++ 6.0
//              ta mo¿liwoœæ nie jest tam zaimplementowana !!!!!!!


#include <iostream>
using namespace std ;

////////////////////////////////////////////////////////
class plansza_chinczyka
{
public:
    enum { max_pionow = 16, max_graczy = 4 };   // `1
    static const int ile_pol = 120;                              // `2
    static const int ile_kolorow = 4;   // `3

    // funkcje skladowe----------
    void jedna_kolejka()
    {
        for (int i = 0 ; i < max_graczy ; i++)
        {
            if ( gracz[ i ] )
                cout << "Twoj ruch...\n";
        }
    }
    //------------------------------------
private:
    bool gracz[ max_graczy ];  // `4
    double pole[ ile_pol ];        // `5

} ;
////////////////////////////////////////////////////////
const int plansza_chinczyka::ile_kolorow ;    // `6

//****************************************************
void wydrukuj_z_referencji( const int & ref )   // `7
{
    cout << "(wydruk z referencji)  wartosc:  " << ref << endl;
}
/*******************************************************/
void wydrukuj_ze_wskaznika( const int * wsk )  // `8
{
    cout << "(wydruk za pom. wskaznika) wartosc:  " << *wsk << endl;
}
/*******************************************************/
int main()
{
    // plansza_chinczyka   klubowa ;   // <-- nie musimy tu mieæ

    cout << "Zanim zagramy, pytamy  ile max graczy "      // `9
    << plansza_chinczyka::max_graczy
    << ", pol= " << plansza_chinczyka::ile_pol
    << ", kolorow= " << plansza_chinczyka::ile_kolorow
    << endl;

    //=================
    // ¿adnych problemów, jeœli jest osobna definicja sk³adnika
    // poza cia³em klasy
    cout << "Adres stalej plansza_chinczyka::ile_kolorow = "   // `10
    << &plansza_chinczyka::ile_kolorow << endl;

    wydrukuj_z_referencji( plansza_chinczyka::ile_kolorow );     // `11
    wydrukuj_ze_wskaznika( &plansza_chinczyka::ile_kolorow );  // `12

    //=================
    // W stosunku do typu wyliczeniowego poni¿sze instrukcje s¹ niemo¿liwe

    //   cout << "Adres stalej plansza_chinczyka::ile_pol = "
    //           << &plansza_chinczyka::ile_pol << endl;     // `13
    //     wydrukuj_z_referencji(plansza_chinczyka::ile_pol);   // `14

    //=================
    // Sk³adnik statyczny bez odrêbnej definicji - ma te same "wady", co enum

         cout << "Adres stalej plansza_chinczyka::max_pionow = "
         << &plansza_chinczyka::max_pionow << endl;    // `15
    //     wydrukuj_z_referencji(plansza_chinczyka::max_pionow);   // `16

}
