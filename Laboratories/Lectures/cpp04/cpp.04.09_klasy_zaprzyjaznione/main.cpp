/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 04-10-2004
/// \brief Classes: friend class.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

//Deklaracja wyprzedzaj¹ca. 
class CPointCollection; 

class CPoint 
{ 
public: 
	friend class CPointCollection; 

	CPoint()
	{m_x = 0.0;  m_y = 0.0; }

private: 
	double m_x; 
	double m_y; 
}; 
/////////////////////////////////////////////////////////////////////////
class CPointCollection 
{ 
public: 
	CPointCollection(const int nSize)
	{ f = new CPoint[nSize]; this->nSize = nSize; } 

	~CPointCollection(void)
	{ delete [] f; }
	
	void Set(const double x, const double y); 
	void print(void);

private: 
	CPoint *f; 
	int nSize;
}; 
/////////////////////////////////////////////////////////////////////////
void CPointCollection::Set(const double x, const double y) 
{ 
	for(int i=0; i < nSize; i++) 
	{ 
		(f+i)->m_x = x*i;
		(f+i)->m_y = y*i;
	} 
} 
/////////////////////////////////////////////////////////////////////////
void CPointCollection::print(void) 
{ 
	for(int i=0; i < nSize; i++) 
		std::cout << "m_x = " << (f+i)->m_x << ", m_y = " <<  (f+i)->m_y << std::endl;
} 
/////////////////////////////////////////////////////////////////////////
int main()
{
	CPointCollection aCPointCollection(20);
	aCPointCollection.Set(1, 2);
	aCPointCollection.print();
	getchar();
}
