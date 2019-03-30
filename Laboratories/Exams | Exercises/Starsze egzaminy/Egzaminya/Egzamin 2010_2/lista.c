#include <iostream>
#include <list>
#include <algorithm>

class Person
{
public:
    Person(std::string nazwisko, std::string imie)
    {
        this->imie=imie;
        this->nazwisko=nazwisko;
    }

    std::string getImie()
    {
        return imie;
    }

    std::string getNazwisko()
    {
        return nazwisko;
    }

    friend std::ostream & operator<<(std::ostream &o, Person &p)
    {
        o<<p.getImie()<<" "<<p.getNazwisko();
        return o;
    }
private:
    std::string imie;
    std::string nazwisko;
};



int main ()
{
    typedef list<Person> kontener_typ;
    kontener_typ c;
    c.insert(Person("Nowak","Jan"));
    c.insert(Person("Nowak","Adam"));
    c.insert(Person("Kowalski","Jan"));
    c.insert(Person("Nowak","Adam"));
    c.insert(Person("Iksinski","Adam"));
    std::copy (c.begin(), c.end(), ostream_iterator<Person>(std::cout, ','));
    return 0;
}

