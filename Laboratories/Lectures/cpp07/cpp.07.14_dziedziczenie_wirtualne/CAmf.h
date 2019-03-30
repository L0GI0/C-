#ifndef _CAMF_H_
#define _CAMF_H_

#include "CAuto.h"
#include "CLodz.h"

namespace OOP 
{
class CAmf : public CAuto, public CLodz 
{
public:
  CAmf(int d = 0) : CTrans(d)
	{}

	void printTraveled() 
	{
      std::cout << "Amfibia pokonala "
                << m_km << " km" << std::endl;
  }

	void travel(int d) 
	{	CAuto::travel(d);	}

	 virtual void travelAsAuto(int d) 
	{ CAuto::travel(d); }

	 virtual void travelAsLodz(int d) 
	{ CLodz::travel(d); }
};

}  // namespace OOP
#endif    // _CAMF_H_
