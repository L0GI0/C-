#ifndef _CPUNKT_H_
#define _CPUNKT_H_

class CPunkt
{
public:
	CPunkt();
	CPunkt(float x, float y);
	~CPunkt();

	void SetX(float x);
	void SetY(float y);
	float GetX(void) const;
	float GetY(void) const;
	static int GetN(void)
	{	 return n;	}

	static void SetN(int value)
	{
		//m_x = value; //B£¥D
		n = value;
	}
private:
	float m_x;
	float m_y;
	static int n; //tylko deklaracja, nie definicja

};
/////////////////////////////////////////////////////////////////////////
inline void CPunkt::SetX(float x)
{
	m_x = x;
	//n = x; //ALE TO NIE JEST BLAD
}
/////////////////////////////////////////////////////////////////////////
inline void CPunkt::SetY(float y)
{
	m_y = y;
}
#endif //_CPUNKT_H_