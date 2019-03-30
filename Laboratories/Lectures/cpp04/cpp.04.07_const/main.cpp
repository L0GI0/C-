/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 01-10-2004
/// \brief Classes: function with const attribute .
/////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

class CPunkt 
{
public :
	CPunkt (float a, float b)
	{ m_x = a ; m_y = b ; }

	void print(void) const;
	//void print(void);

  void move(float a, float b);

private:
	float  m_x ,m_y ;
};

void CPunkt::print() const
//void CPunkt::print()
{
	cout << "m_x, m_y = " << m_x << ", " << m_y << endl ;
}
/*******************************************************/
void CPunkt::move(float a, float b)
{
	m_x = a;
	m_y = b;
}
/*******************************************************/

int main()
{
	CPunkt aPunkt(1,1), bPunkt(2,2);
	const CPunkt cPunkt(10,10);

	aPunkt.print();
	bPunkt.print();
	cPunkt.print();
	
	aPunkt.move(10,10);
	bPunkt.move(20,20);
//	cPunkt.move(100,100); //BLAD
	getchar();
}
