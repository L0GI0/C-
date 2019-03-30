/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-12-2004
/// \brief STL. Vector.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>

/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	using namespace std;
	typedef vector<double> VecDbl;

	//tworzenie
	VecDbl c1;
	VecDbl c2(10, 3.14159);
	VecDbl c3(c2.begin(), c2.end() - 2 );

	//info
	cout << "c1(info): " << c1.max_size() << ' ' << c1.size() << ' ' << c1.capacity() << '\n'
		<< "c2(info): " << c2.max_size() << ' ' << c2.size() << ' ' << c2.capacity() << '\n'
		<< "c3(info): " << c3.max_size() << ' ' << c3.size() << ' ' << c3.capacity() << '\n';

	//przypisanie 
	//c1[0]=3;
	c1.assign(2, 2.2);

	cout << "c1: " << c1.at(0) << ' ' << c1[1] << endl;

	//c2.assign(8, 5);
	for(unsigned i = 0; i < 10; ++i)
		cout << c2[i] << ' ';
		
	cout << endl;

	//ustawienie
	for(unsigned i = 0; i < 10; ++i)
		c2[i] = i * 3.14159;

	//wypisanie
	cout << "c2: " << c2.front() << ' ' << c2.back() << endl;

	swap(c1, c2);
	
	cout << "c2: " << c2.front() << ' ' << c2.back() << endl;
	
		cout << "c1(info): " << c1.max_size() << ' ' << c1.size() << ' ' << c1.capacity() << '\n'
		<< "c2(info): " << c2.max_size() << ' ' << c2.size() << ' ' << c2.capacity() << '\n'
		<< "c3(info): " << c3.max_size() << ' ' << c3.size() << ' ' << c3.capacity() << '\n';
}
