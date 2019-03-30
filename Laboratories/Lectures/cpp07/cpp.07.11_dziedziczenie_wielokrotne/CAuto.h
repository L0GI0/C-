#ifndef _CAUTO_H_
#define _CAUTO_H_

#include <iostream>

namespace OOP {
class CAuto 
{
public:
  CAuto(int d = 0) : m_km(d) 
	{ }

  virtual ~CAuto() 
	{ }

  virtual void travel(int d) {
      m_km += d;
  }

	virtual void printTraveled() 
	{
      std::cout << "CAuto przejechalo "
                << m_km << " km " << std::endl;
  }

protected:
  int m_km;
};

}  // namespace OOP

#endif    // _CAUTO_H_
