/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 18-10-2004
/// \brief Classes: Overloaded operator=
/////////////////////////////////////////////////////////////////////////

#include <iostream>

/////////////////////////////////////////////////////////
class CPoint {
public :
  double *b;
  double *a;

  CPoint(double a = 0, double b = 0);
	~CPoint();

	const CPoint& operator=(const CPoint& K);
};
/////////////////////////////////////////////////////////
CPoint::CPoint(double aa, double bb)
{
  a = new double(aa);
	b = new double(bb);
}
/////////////////////////////////////////////////////////
CPoint::~CPoint()
{
  delete a;
  delete b;
}

/////////////////////////////////////////////////////////
const CPoint& CPoint::operator=(const CPoint& K)
{
	//sprawdzenie czy nie jest wywo³anie np: a = a;
	if(&K == this) 
		return *this;
	
	//czeœæ destruktorowa
	delete a;
	delete b;
	
	//czeœæ konstruktorwa
  a = new double(*K.a);
	b = new double(*K.b);
	

	// pozwala na wielokrotne wywo³anie operatora, 
	// poniewa¿ zwaraca referencjê do obiektu 
	// na rzecz którego operator zosta³ wywo³any
	return *this;
}

/////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	CPoint aPoint(10, 10);
	CPoint bPoint;
	CPoint cPoint;
	
	cPoint = bPoint = aPoint;//cPoint.operator=(bPoint.operator=(aPoint));

	cout << "aPoint = " << (*aPoint.a) << ", " << (*aPoint.b) << endl;
	cout << "bPoint = " << (*bPoint.a) << ", " << (*bPoint.b) << endl;
	cout << "cPoint = " << (*cPoint.a) << ", " << (*cPoint.b) << endl << endl;
	
	(*aPoint.a) = (*aPoint.b) = 20;

	cout << "aPoint = " << (*aPoint.a) << ", " << (*aPoint.b) << endl;
	cout << "bPoint = " << (*bPoint.a) << ", " << (*bPoint.b) << endl;
	cout << "cPoint = " << (*cPoint.a) << ", " << (*cPoint.b) << endl;
}
