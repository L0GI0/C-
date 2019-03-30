#ifndef _PUNKT_H_
#define _PUNKT_H_

class CPunkt
{
public:
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
#endif //_PUNKT_H_