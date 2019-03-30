/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 19-10-2004
/// \brief Inheritance.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "CShape.h"
#include "CRec.h"

using namespace std;
using namespace OOP;

/////////////////////////////////////////////////////////////////////////
void funRef(CShape& K)
{
	cout << K.GetX() << ", " << K.GetX() << endl;
}
/////////////////////////////////////////////////////////////////////////
CShape& funRef(CShape& K, double x, double y)
{
	K.SetX(x);
	K.SetY(x);
	return K;
}
/////////////////////////////////////////////////////////////////////////
void funPtr(CShape* K)
{
	cout << K->GetX() << ", " << K->GetX() << endl;
}
/////////////////////////////////////////////////////////////////////////
CShape* funPtr(CShape* K, double x, double y)
{
	K->SetX(x);
	K->SetY(x);
	return K;
}
/////////////////////////////////////////////////////////////////////////
void funTab(CShape K[], int size)
{
	for(int i = 0; i < size; i++)
		cout << K[i].GetX() << ", " << K[i].GetX() << endl;
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
	CRec aRec;
	CRec* ptrRec;

	aRec.SetX(1);
	aRec.SetY(1);

	cout << "----------------------------------\n";
	funRef(aRec);
	funRef(funRef(aRec, 2, 2));
	cout << "----------------------------------\n";
	
	CShape& aShape = aRec;
	funRef(aShape);

	ptrRec = &aRec;
	funPtr(ptrRec);
	funPtr(funPtr(ptrRec, 3, 3));
	cout << "----------------------------------\n";

	CShape bShape = *ptrRec;
	funRef(bShape);

	CShape tabShape[2] = {CShape(1, 1), CShape(2, 2)};
	CRec tabRec[2] = {CRec(3,3), CRec(4,4)};

	funTab(tabShape,2);
	cout << "----------------------------------\n";
	funRef(tabRec[0]);
	funRef(tabRec[1]);
	cout << "----------------------------------\n";
	//powoduje problem
	funTab(tabRec,2);

	getchar();
	return 0;
}


