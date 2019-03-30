#ifndef _CAMF_H_
#define _CAMF_H_

#include "CAuto.h"
#include "CLodz.h"

namespace OOP 
{
class CAmf : public CAuto, public CLodz 
{
public:
  CAmf(int k = 0, int s = 0) : CAuto(k), CLodz(s) 
	{}

  virtual ~CAmf() 
	{}

	virtual void printTraveled() 
	{
      std::cout << "Amfibia pokonala "
                << m_km << " km i " << m_sm << " mil " << std::endl;
  }
};

}  // namespace OOP
#endif    // _CAMF_H_
