#include <vector>
#include <set>

class Person
{
public:
	Person(const std::string n1, const std::string n2):name(n1), sname(n2){};
private:
	std::string name;
	std::string sname;
};


typedef std::set<Person> kontener_typ;

int main()
{

kontener_typ c;
c.insert(Person("Nowak","Jan"));
c.insert(Person("Nowak","Adam"));
c.insert(Person("Kowalski","Jan"));
c.insert(Person("Nowak","Adam"));
c.insert(Person("Iksinski","Adam"));
std::copy (c.begin(), c.end(), /*UZUPEŁNIĆ*/);
}
Wynika działania:
Iksinski Adam, Kowalski Jan, Nowak Adam, Nowak Jan,