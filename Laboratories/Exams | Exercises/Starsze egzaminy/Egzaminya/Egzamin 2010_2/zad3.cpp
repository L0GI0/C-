#include <iostream>
#include <set>
#include <iterator>
#include <cstring>
using namespace std;
class Person{
public:
    Person(string n="", string i=""):nazwisko(n),imie(i){}
    friend ostream& operator<<(ostream& o, const Person& p){
        o << p.nazwisko << " " << p.imie;
        return o;
    }
    bool operator<(const Person& p)const{
        if(this->nazwisko == p.nazwisko && this->imie < p.imie)
            return true;
        if(this->nazwisko < p.nazwisko)
            return true;
    }
private:
    string imie;
    string nazwisko;
};
int main ()
{
    typedef /* UZUPE£NIÆ */set<Person> kontener_typ;
    kontener_typ c;
    c.insert(Person("Nowak","Jan"));
    c.insert(Person("Nowak","Adam"));
    c.insert(Person("Kowalski","Jan"));
    c.insert(Person("Nowak","Adam"));
    c.insert(Person("Iksinski","Adam"));
    std::copy (c.begin(), c.end(), ostream_iterator<Person>(cout,", ")/*UZUPE£NIÆ*/);
}//Iksinski Adam, Kowalski Jan, Nowak Adam, Nowak Jan,
