#include <iostream>
#include <algorithm>
#include <string>
#include <list>

using namespace std;

class Person { 
public:
  Person (string f="", string n="") : m_fn(f), m_ln(n) {}
  string firstname () const {
  return m_fn;
  }
  string lastname () const {
  return m_ln;
  }
private: 
  string m_fn; 
  string m_ln;
};

class Szukajek {
public:
  Szukajek(Person p): szukane(p) {
  }
  bool operator()(const Person &person){
    if((person.firstname() == szukane.firstname()) && (person.lastname() == szukane.lastname()))
      return true;
    else
      return false;
  }
private:
  Person szukane;
};

int main () { 
  list <Person> coll;
    Person osoba("Jan", "Kowalski");
    Person osoba1("Janusz", "Kowalski");
    Person osoba2("Jan", "Kwiecien");
    Person osoba3("Jan1", "Kowalski1");
    Person osoba4("Jan2", "Kowalski2");
    coll.insert(coll.end(), osoba);
    coll.push_back(osoba);
    coll.push_back(osoba1);
    coll.push_back(osoba2);
    coll.push_back(osoba3);
    coll.push_back(osoba4);

    Szukajek op(osoba3);
    list<Person>::iterator it;
    it = find_if(coll.begin(),coll.end(), op); 
    int i = -1;
    if(it == coll.end()) {
      std::cout << "Elementu nie znaleziono!" << std::endl;
    } else {
      for(list<Person>::iterator beg = coll.begin(); beg != coll.end(); beg++) {
        i++;
        if (it == beg) {
         break;
        }
      }
      std::cout << i << std::endl;
      cout << "The distance is: " << distance(coll.begin(),it) << endl;
    }
    return 0;
}
