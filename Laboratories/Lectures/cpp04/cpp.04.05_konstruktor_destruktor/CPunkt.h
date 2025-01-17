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

private:
	float m_x;
	float m_y;
};
/////////////////////////////////////////////////////////////////////////
inline void CPunkt::SetX(float x)
{
	m_x = x;
}
/////////////////////////////////////////////////////////////////////////
inline void CPunkt::SetY(float y)
{
	m_y = y;
}
#endif //_CPUNKT_H_