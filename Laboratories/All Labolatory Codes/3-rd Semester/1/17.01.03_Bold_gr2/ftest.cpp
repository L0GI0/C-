/**
 * Prosze napisac klase Factory i dopisac implementacje klasy TestObj.
 * Funkcjaonalnosc klasy TestObj jest w zasadzie zadna, 
 * sluzy ona do przechowania stalego napisu. Mozliwe konstruktory i ich funkcjonalnosc wynika
 * z pierwszego fragmentu kodu.
 * 
 * Klasa Factory pozwala na produkcje defaultowych obiektow klasy 
 * TestObj. Jesli jednak wywolamy metode prototype( X ) to od tej pory
 * metoda produce powinna dostarczac klony X storzone za pom. konstruktora kopiujacego.
 * Obiekty wyprodukowane powinny nalezec do Factory i powinny byc dopiero kasowane 
 * gdy wywolana zostanie metoda Factory::erase.
 *
 * UWAGI:
 * Nie uzywamy klasy std::string, w tym zadaniu mozna sie nawet obejsc bez 
 * tworzenia kopii napisow.
 */
#include <iostream>
#include "Factory.h"

int main() {
  using namespace std;
  { // test funkcjonalnosci kl. TestObj
    delete new TestObj();
    delete new TestObj("napisem");
    TestObj e("etam");
    delete new TestObj(e);
  }
  std::cout << "Fabryka\n" ;
    
  TestObj *o(0); 
  o = Factory::produce();
  cout << "1: " << o->name() << endl;
  o = Factory::produce();
  cout << "2: " << o->name() << endl;
  {
    TestObj newproto("inny prototyp");    
    Factory::prototype(newproto);
  } // tu newproto jest kasowany

  o = Factory::produce();
  cout << "3: " << o->name() << endl;
  o = Factory::produce();
  cout << "4: " << o->name() << endl;
  cout << "Sprzatanie" << std::endl;
  Factory::erase();
}
/* wynik
TestObj::TestObj z arg char: domniemany
TestObj::~TestObj domniemany
TestObj::TestObj z arg char: napisem
TestObj::~TestObj napisem
TestObj::TestObj z arg char: etam
TestObj::TestObj z arg TestObj: etam
TestObj::~TestObj etam
TestObj::~TestObj etam
Fabryka
TestObj::TestObj z arg char: domniemany
1: domniemany
TestObj::TestObj z arg char: domniemany
2: domniemany
TestObj::TestObj z arg char: inny prototyp
TestObj::TestObj z arg TestObj: inny prototyp
TestObj::~TestObj inny prototyp
TestObj::TestObj z arg TestObj: inny prototyp
3: inny prototyp
TestObj::TestObj z arg TestObj: inny prototyp
4: inny prototyp
Sprzatanie
TestObj::~TestObj domniemany
TestObj::~TestObj domniemany
TestObj::~TestObj inny prototyp
TestObj::~TestObj inny prototyp
TestObj::~TestObj inny prototyp
 */
   
