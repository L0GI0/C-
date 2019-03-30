/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 04-10-2004
/// \brief Classes: Default copy constructor, which works in wrong way.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////
class CCard {
public :
  char *nazw;
  char *imie;

  CCard(const char * na, const char * im);
	CCard(const CCard &K);

  ~CCard();

  void print() 
	{ cout << imie << " " << nazw << endl; }

  void SetName(const char *nowe)
  { strcpy(nazw, nowe); }
};
/////////////////////////////////////////////////////////
CCard::CCard(const char *im, const char *na)
{
  nazw = new char[80];
  strcpy(nazw, na);

  imie = new char[80];
  strcpy(imie, im);
}
/////////////////////////////////////////////////////////
CCard::CCard(const CCard &K)
{
  nazw = new char[80];
	strcpy(nazw, K.nazw);

  imie = new char[80];
	strcpy(imie, K.imie);
}
/////////////////////////////////////////////////////////
CCard::~CCard()
{
  delete [] nazw;
  delete [] imie;
}
/////////////////////////////////////////////////////////
int main()
{
	CCard aCard( "Jan", "Kowalski");
	CCard bCard = aCard;

  cout << "Po utworzeniu kopii obiektu oba zwieraja nazwiska\n";

  aCard.print();
  bCard.print();

  bCard.SetName("Nowak");

  cout << "\nPo zmianie nazwiska bCard brzmi ono: ";
  bCard.print();

  cout << "Niemodyfikowany aCard nazywa sie: ";
  aCard.print();

  getchar();
  return 0;
}
