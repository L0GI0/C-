/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 04-10-2004
/// \brief Classes: Pointers to classes.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

class CPoint 
{ 
public: 
	CPoint(double x = 0.0, double y = 0.0)
	{m_x = x;  m_y = y; }
	
	void SetX(double x)
		{m_x = x;}

	void SetY(double y)
		{m_y = y;}

	double GetX() const
		{ return m_x; }

	double GetY() const
		{ return m_y; }

	void printOut() const
		{std::cout << m_x << ", " << m_y;}

private: 
	double m_x; 
	double m_y; 
}; 
/////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;
	
	unsigned n;
	cout << "Podaj liczbe elementow klasy do stworzenia: ";
	cin >> n;

	if (n < 1)
		return 0;

/* Nie moøna w ten sposÛb
	CPoint *f = new CPoint = {CPoint(1, 1),
										CPoint(2, 2),
										CPoint(3, 3)};
*/
	
	//wskaønik do nowych obiektÛw CPoint
	CPoint *fPoint = new CPoint[n];

	//ustawienie wartoúci
	for(unsigned i = 0; i < n; ++i)
		(fPoint+i)->SetX(i), (fPoint+i)->SetY(i+1);

	//wypisanie
	for(unsigned i = 0; i < n; ++i)
		cout << i << "; ", (fPoint+i)->printOut(), cout << endl;

	//nowy obiekt CPoint
	cout << "---------- fPointA -----------------\n";
	CPoint *fPointA = new CPoint(2, 2);

	fPointA->printOut();
	//Zapis oznaczajπcy dok≥adnie to samo
	//(*fPointA).printOut();

	cout << endl;

	//kasacja obiektu pokazywanego przez fPointA
	delete fPointA;

	cout << "----- fPointA = fPoint -------------\n";

	//przypisanie wskaünikÛw
	fPointA = fPoint;

	//uzycie innego wskaünika 
	for(unsigned i = 0; i < n; ++i)
		cout << i << "; ", (fPointA+i)->printOut(), cout << endl;

	delete [] fPointA;
	//fPoint->SetX(1); //BLAD

	unsigned Row = 4;
	unsigned Col = 2;

	//Tablica wskaünikÛw do wskaünika typu CPoint
	CPoint **fPointTab = new CPoint*[Row];

	//Wype≥nienie tablicy wskaünikÛw tablicami 'Col' elementowymi
	for(unsigned i = 0; i < Row; i++)
		fPointTab[i] = new CPoint[Col];

	for(unsigned i = 0; i < Row; i++)
		for(unsigned j = 0; j < Col; j++)
		{
			fPointTab[i][j].SetX(i);
			fPointTab[i][j].SetY(j);
		}

	//wypisanie
	cout << "----- **fPointTab ----------------\n";
	for(unsigned i = 0; i < Row; i++)
	{
		cout << i << ": ";
		for(unsigned j = 0; j < Col; j++)
		{
//			cout << i << "," << j << ": ";
			cout << "(";
			fPointTab[i][j].printOut();
			cout << ")\t";
		}
		cout << endl;
	}

	//usuniÍcie tablic
	for(unsigned i = 0; i < Row; i++)
		delete [] fPointTab[i];

	delete [] fPointTab;
	getchar();
	getchar();
	return 0;
}
