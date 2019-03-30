#ifndef _CTRANS_H_
#define _CTRANS_H_

namespace OOP 
{
class CTrans
{
public:
	CTrans(int d = 0) : m_km(d)
	{}
	virtual ~CTrans()
	{}

	virtual void travel(int d) = 0;
	virtual void printTraveled() = 0;
protected:
	int m_km;
};
}//namespace OOP 
#endif