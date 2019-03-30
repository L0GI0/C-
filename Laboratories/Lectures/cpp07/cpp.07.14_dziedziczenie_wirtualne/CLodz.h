#ifndef _CLODZ_H_
#define _CLODZ_H_

#include <iostream>
#include "CTrans.h"

namespace OOP {
class CLodz : virtual public CTrans
{
public:
  CLodz(int d = 0) : CTrans(d) 
	{ }

  void travel(int d) 
	{
      m_km += d;
  }
  
	void printTraveled() 
	{
      std::cout << "CLodz przeplynela "
                << m_km << " km " << std::endl;
  }
};

}  // namespace OOP

#endif    // _CLODZ_H_
