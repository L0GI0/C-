#ifndef _CAUTO_H_
#define _CAUTO_H_

#include <iostream>
#include "CTrans.h"

namespace OOP {
class CAuto : virtual public CTrans
{
public:
  CAuto(int d = 0) : CTrans(d) 
	{ std::cout << "Konstruktor CAuto\n"; }

	~CAuto()
  { std::cout << "Destruktor CAuto\n"; }

  void travel(int d) 
	{
      m_km += d;
  }

	void printTraveled() 
	{
      std::cout << "CAuto przejechalo "
                << m_km << " km " << std::endl;
  }
};

}  // namespace OOP

#endif    // _CAUTO_H_
