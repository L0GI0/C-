/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 30-09-2004
/// \brief Classes: function defination outside class.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class CPunkt
{
public:
	void SetX(float x);
	void SetY(float y);
	float GetX(void) const;
	float GetY(void) const;

private:
	float m_x;
	float m_y;
};
/////////////////////////////////////////////////////////////////////////
 void CPunkt::SetX(float x)
{
	m_x = x;
}
/////////////////////////////////////////////////////////////////////////
 void CPunkt::SetY(float y)
{
	m_y = y;
}
/////////////////////////////////////////////////////////////////////////
float CPunkt::GetX(void) const
{
	return m_x;
}
/////////////////////////////////////////////////////////////////////////
float CPunkt::GetY(void) const
{
	return m_y;
}
/////////////////////////////////////////////////////////////////////////

int main(int argc, char * argv[])
{
	CPunkt aPunkt;

	aPunkt.SetX(10.0);
	aPunkt.SetY(10.0);

	cout << "a.m_x, a.m_y = " << aPunkt.GetX() << ", " << aPunkt.GetX() << endl;

	getchar();

}
