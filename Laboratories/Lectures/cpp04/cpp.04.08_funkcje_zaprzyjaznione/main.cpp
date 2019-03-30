/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 01-10-2004
/// \brief Classes: friend function.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

class CPunkt 
{
public :
	friend void raport(const CPunkt &pPunkt);

	CPunkt (float a, float b)
	{ m_x = a ; m_y = b ; }

	void print(void) const;
  void move(float a, float b);

private:
	float  m_x ,m_y ;
};

void CPunkt::print() const
{
	std::cout << "m_x, m_y = " << m_x << ", " << m_y << std::endl ;
}
/*******************************************************/
void CPunkt::move(float a, float b)
{
	m_x = a;
	m_y = b;
}
/*******************************************************/

void raport(const CPunkt &pPunkt)
{
	std::cout << "Prywatne skladowe CPunkt: m_x, m_y = " << pPunkt.m_x << ", " << pPunkt.m_y << std::endl;
}

int main()
{
	CPunkt aPunkt(1,1);
	raport(aPunkt);
	aPunkt.print();
	
	aPunkt.move(10,10);
	raport(aPunkt);
	aPunkt.print();

}
