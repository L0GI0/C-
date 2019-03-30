/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-11-2004
/// \brief Exceptions handling - classes as types
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <memory>
using namespace std;

/////////////////////////////////////////////////////////////////////////
class Test1
{
public:
	Test1(string nazwa = "") : m_nazwa(nazwa)
	{  cout << "Konstruktor Test1(" << m_nazwa << ")\n"; }

	virtual ~Test1()
	{  cout << "Destruktor Test1(" << m_nazwa << ")\n"; }

	virtual void print() const
	{  cout << m_nazwa << "\n"; }

protected:
	string m_nazwa;
};

/////////////////////////////////////////////////////////////////////////
class Test2 : public Test1
{
public:
	Test2(string nazwa = "") : Test1(nazwa)
	{  cout << "Konstruktor Test2(" << m_nazwa << ")\n"; }

	virtual ~Test2()
	{  cout << "Destruktor Test2(" << m_nazwa << ")\n"; }
};

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
	typedef std::auto_ptr<Test1> Test1_ptr;

	Test1 a("aTest1");
	Test2 b("bTest2");

	try
	{
		int a = 0;
		Test1 c("cTest1");
		Test2 d("dTest2");

		std::auto_ptr<Test2> ptr_drugi(new Test2("ptr Test2*"));

		Test1_ptr ptr(new Test1("ptr Test1*"));

		cout << "\nRzucam\n";
		throw a;
	}
	catch(const int&)
	{
		cout << "\nPo zlapaniu wyjatku\n";
	}
}