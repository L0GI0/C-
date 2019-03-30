#include <iostream>
//#define GEN_ERROR     //jesli zakomentowane to dziala

class NonInheritable;

class Final{
private:
    Final(){}
    ~Final(){}
public:
    friend class NonInheritable;
};

#ifdef GEN_ERROR
class NonInheritable: virtual public Final{};
#else
class NonInheritable: public Final{};
#endif
class Tester: public NonInheritable{};

int main(){
    NonInheritable test; //Klasa po której mo¿na ocziedziczyc
    Tester t; //blad kompilacji tylko jesli zdefiniowana zmnienna preprocesora GEN_ERROR
}



Konstruktor klasy Bazowa jest prywatny (!) co oznacza że wywolać go może tylko ktoś zaprzyjaźniony.
Po to też klasa Pochodna jest deklarowana jako friend, żeby mogła ten konstruktor wywołać (a musi, tworząc swój obiekt).
Problem w tym ze konstruktory są wołane niejako po kolei. Tzn konstruktor klasy nizej woła ten wyższy itd.
W takim razie cały ten zabieg z prywatnym konstruktorem psu na budę, bo i tak to Pochodna zawsze będzie wołać konstruktor Bazowej.
Po to właśnie mamy dziedziczenie wirtualne. Proponuje poczytać o tym jak ono właściwie działa ;)
W skrócie polega to na tym że obiekt klasy dziedziczonej wirtualnie jest tworzony na początku (!) konstruowania obiektu
który z takiej klasy dziedziczy wirtualne. Czyli nie ma wężyka Pochodna3->Pochodna2->Pochodna1->Bazowa tylko Bazowa jest tworzona
od razu na poziomie Pochodna3 (w ten sposób wykluczamy sytuację że ten sam kod pojawi się wiecej niz raz).
Co nam to daje? Otóz jedyna (!) klasa która moze wywołać konstruktor Bazowej to Pochodna. Żadna inna.
W szczególności nie moze tego zrobić klasa dziedzicząca z Pochodnej (bo "przyjaźni" się nie dziedziczy).
