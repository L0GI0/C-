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


void multi(double tab[], unsigned size, double val);

/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	using namespace std;

	typedef vector<double> VecDbl;
	typedef vector<double>::const_iterator VecDblIter;
	
	VecDbl col;
	VecDblIter iter;

	for(unsigned i = 0; i < 10; ++i)
		col.push_back(i * 1.1);
	
	for(iter = col.begin(); iter != col.end(); ++iter)
		cout << *iter << ' ';
		
	
	multi(&col[0], col.size(), 2.0);
	
	cout << "\nPo mulit" << endl;
	
	for(iter = col.begin(); iter != col.end(); ++iter)
		cout << *iter << ' ';
	
}

void multi(double tab[], unsigned size, double val)
{
	for(unsigned i = 0; i < size; ++i)
		tab[i] *= val;
}