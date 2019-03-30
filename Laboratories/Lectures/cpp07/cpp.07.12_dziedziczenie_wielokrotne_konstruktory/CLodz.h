#ifndef _CLODZ_H_
#define _CLODZ_H_

#include <iostream>

namespace OOP {

class CLodz 
{
public:
  CLodz(int d = 0) : m_sm(d) 
	{ std::cout << "Konstruktor CLodz\n"; }
	
  virtual ~CLodz()
	{ std::cout << "Destruktor CLodz\n"; }
	
  virtual void travel(int d) 
	{
      m_sm += d;
  }
  
	virtual void printTraveled() 
	{
      std::cout << "CLodz przeplynela "
                << m_sm << " mil " << std::endl;
  }

protected:
  int m_sm;
};

}  // namespace OOP

#endif    // _CLODZ_H_
