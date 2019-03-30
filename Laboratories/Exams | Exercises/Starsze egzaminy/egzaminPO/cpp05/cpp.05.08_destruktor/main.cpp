/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 04-10-2004
/// \brief Classes: Situation when the destructor is needed
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////
class CPoint {
public :
  double *b;
  double *a;

  CPoint();
	//~CPoint();
};
/////////////////////////////////////////////////////////
CPoint::CPoint()
{
  b = new double[100000];
	a = new double[100000];

	for(int i = 0; i < 100000; i++) {
		b[i] = 0; a[i] = 0;
	}
}
/////////////////////////////////////////////////////////
/*
CPoint::~CPoint()
{
  delete [] b;
  delete [] a;
}
*/
/////////////////////////////////////////////////////////
int main()
{
	for(int i = 0; i < 2000; i++)
	{
		cout << "i = " << i << "\r";
		CPoint a;
	}
}
