#ifndef finalLIB
#define finalLIB
#include "kobieta.h"
#include "mezczyzna.h"
#include "postac.h"
#include "kurier.h"
#include "pilot.h"
/*
 * @brief klasy reprezentujace konkretne osoby dziedzicza po kategoriach do ktorych naleza
 */
class Leela:public Kobieta, public Pilot, public Postac{
public:
  Leela():Kobieta("Leela"),Pilot("Leela"),Postac("Leela"){};
};
class Amy:public Kobieta, public Postac{
public:
  Amy():Kobieta("Amy"),Postac("Amy"){};
};
class Fry:public Mezczyzna, public Kurier, public Postac{
public:
  Fry():Mezczyzna("Fry"),Kurier("Fry"),Postac("Fry"){};
};
class Hermes:public Mezczyzna, public Postac{
public:
  Hermes():Mezczyzna("Hermes"),Postac("Hermes"){};
};
class Professor:public Mezczyzna,public Postac{
public:
  Professor():Mezczyzna("Professor"),Postac("Professor"){};
};




#endif