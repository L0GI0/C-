/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-11-2004
/// \brief Exceptions handling. Unexpected function.
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

	virtual ~Test1()
	{}

	virtual void Test() throw()
	{ throw m_nazwa;}

	virtual void print() const
	{  cout << m_nazwa << "\n"; }

protected:
	string m_nazwa;
};

/////////////////////////////////////////////////////////////////////////
void MyUnExpec()
{
	cout << "Wlasna funkcja unexpected\n";
	exit(-1);
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
	void (*fun)() = MyUnExpec;
	set_unexpected(fun);

	try
	{
		Test1 a("aTest1");
		cout << "\nRzucam\n";

		a.Test();
	}
	catch(string &K)
	{
		cout << "\nPo zlapaniu wyjatku " << K << "\n";
	}
}