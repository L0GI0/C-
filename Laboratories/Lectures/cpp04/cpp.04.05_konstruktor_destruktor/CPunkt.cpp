#include <iostream>
#include "CPunkt.h"

using std::cout;
using std::endl;

CPunkt::CPunkt()
{
	m_x = 0;
	m_y = 0;
	cout << "Dziala konstruktor\n";
}
/////////////////////////////////////////////////////////////////////////
CPunkt::CPunkt(float x, float y)
{
	m_x = x;
	m_y = y;
	cout << "Dziala konstruktor z inicjalizacja "
		   << "m_x, m_y = " << m_x << ", " << m_y << endl;
}
/////////////////////////////////////////////////////////////////////////
CPunkt::~CPunkt()
{
	cout << "Dziala destruktor\n";
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
