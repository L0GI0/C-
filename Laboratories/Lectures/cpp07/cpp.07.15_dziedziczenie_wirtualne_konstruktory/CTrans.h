#ifndef _CTRANS_H_
#define _CTRANS_H_

namespace OOP 
{
class CTrans
{
public:
	CTrans(int d = 0) : m_km(d)
	{ std::cout << "Konstruktor CTrans\n"; }
	virtual ~CTrans()
	{ std::cout << "Destruktor CTrans\n"; }

	virtual void travel(int d) = 0;
	virtual void printTraveled() = 0;
protected:
	int m_km;
};
}//namespace OOP 
#endif