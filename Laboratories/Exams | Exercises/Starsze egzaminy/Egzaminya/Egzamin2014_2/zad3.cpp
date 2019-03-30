#include <iostream>

struct final;
class fin{
public:
    friend struct final;    //przyjazn z klasa final
private:
    fin(){}     //prywatny konstruktor
    ~fin(){}    //prywatny destruktor
};

struct final:virtual public fin{    //wirtualne dziedziczenie, mozna utworzyc obiekt bo klasa ma dostep
                                    //do prywatnych konstruktorowdzieki przyjazni
public:
    final(){}
    ~final(){}
};

class non_copyable{
public:
    non_copyable(){}
    ~non_copyable(){}
private:
    non_copyable(const non_copyable& non){}                 //prywatny konstruktor kopiujacy
    non_copyable& operator=(const non_copyable& non){}      //prywatny operator przypisania
                                                            //(nie potrzebny ale ja na egzaminie napisalem dla bezpieczenstwa)
};

/*UZUPE£NIJ*/
struct A: public final
{};
struct B: public non_copyable
{};
int main()
{
   final f;
   //A a;          //tu ma byæ blad bo klasa finalna i nie mozna po niej dziedziczyc *1*
   B b;
   //B __b = b; //tu ma byæ b³¹d bo nie wolno tworzyc kopii *2*

   return 0;
}

/*
*1* nie mozna utworzyc A bo nie ma dostepu do prywatnego konstruktora fin (przyjazn nie jest dziedziczona)
*2* prywatny konstruktor kopiujacy brak dostepu do niego
*/
