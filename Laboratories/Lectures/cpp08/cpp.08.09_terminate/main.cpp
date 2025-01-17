/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-11-2004
/// \brief Exceptions handling - terminate function
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>

using namespace std;

/////////////////////////////////////////////////////////////////////////
class Test1
{
public:
	Test1(string nazwa = "") : m_nazwa(nazwa)
	{  cout << "Konstruktor Test1(" << m_nazwa << ")\n"; }

	Test1(const Test1& K)
	{ 
		m_nazwa = K.m_nazwa;
		cout << "Konstruktor kopiujacy Test1(" << m_nazwa << ")\n"; 
	}

	virtual ~Test1()
	{  cout << "Destruktor Test1(" << m_nazwa << ")\n";}

	virtual void print() const
	{  cout << m_nazwa << "\n"; }

protected:
	string m_nazwa;
};

void MyTerm()
{
	cout << "Wlasna funkcja terminate\n";
	exit(-1);
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{

	void (*fun)() = MyTerm;

	set_terminate(fun);

	try
	{
		Test1 a("aTest1");
		cout << "\nRzucam\n";

		throw a;
	}
	catch(int)
	{
		cout << "\nPo zlapaniu wyjatku\n";
	}

	cout << "\nZa 1. blokiem catch\n";
}