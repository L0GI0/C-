#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

class Person
{
public:
    Person(std::string nazwisko, std::string imie)
    {
        this->imie=imie;
        this->nazwisko=nazwisko;
    }

    std::string getImie() const
    {
        return imie;
    }

    std::string getNazwisko() const
    {
        return nazwisko;
    }

    bool operator<(const Person &p) const
    {
        if(nazwisko==p.nazwisko)
            return imie<p.imie;
        return nazwisko<p.nazwisko;

    }

    friend std::ostream & operator<<(std::ostream &o, const Person &p)
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
    typedef std::set<Person> kontener_typ;
    kontener_typ c;
    c.insert(Person("Nowak","Jan"));
    c.insert(Person("Nowak","Adam"));
    c.insert(Person("Kowalski","Jan"));
    c.insert(Person("Nowak","Adam"));
    c.insert(Person("Iksinski","Adam"));
    std::copy (c.begin(), c.end(), std::ostream_iterator<Person>(std::cout, ","));
    return 0;
}

