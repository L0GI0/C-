#ifndef _CSHAPE_GRUP_H_
#define _CSHAPE_GRUP_H_
		
#include <iostream>
#include <vector>
#include <algorithm>
#include "CShape.h"

namespace OOP
{
class CShapeGrup : public CShape
{
public:
	virtual void Add(CShape& K)
	{ elem.push_back(&K); }

	virtual void Remove(CShape& K);
	
	virtual void Rys() const;

	virtual double Pole() const
	{ return CShape::Pole(); }

protected:
	std::vector<CShape*>elem;
};

void CShapeGrup::Remove(CShape& K)
{ 
	std::vector<CShape*>::iterator pos;
	pos = std::find(elem.begin(), elem.end(), &K);
	if(pos != elem.end())
		elem.erase(pos);
}

void CShapeGrup::Rys() const
{
	for(unsigned i=0; i < elem.size(); ++i)
		elem[i]->Rys();
}
} //namespace OOP
#endif
