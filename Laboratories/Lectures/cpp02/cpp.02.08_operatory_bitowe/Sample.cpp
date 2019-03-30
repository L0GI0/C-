/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 27-09-2004
/// \brief Bitwise operators.
/////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

void dec2bin(int bin);

int main(int argc, char * argv[])
{
	int n = 8, m;

	cout << "n =           " << n << ", n(bin) = ";
	dec2bin(n);

	m = n << 1;
	cout << "m = n << 1 = " << m << ", m(bin) = ";
	dec2bin(m);	

	m = n >> 2;
	cout << "m = n >> 2 =  " << m << ", m(bin) = ";
	dec2bin(m);

	cout << endl;

	int k = 0xff0f;
	int l = 0x0ff0;

	cout << "k(bin) =       ";
	dec2bin(k);	

	cout << "l(bin) =       ";
	dec2bin(l);

	cout << "(k & l)(bin) = ";
	dec2bin(k & l);
	
	cout << "(k | l)(bin) = ";
	dec2bin(k | l);
	
	cout << "(k ^ l)(bin) = ";
	dec2bin(k ^ l);

	cout << "~k(bin) =      ";
	dec2bin(~k);	

	cout << endl;
	getchar();
}



void dec2bin(int bin)
{
	char str[17];
	unsigned i = 0;

  unsigned int mask;

	mask = 0x8000;

  while(mask)
  {
    if (bin & mask)
      str[i] = '1';
    else 
      str[i] = '0';
    i++;
    mask >>= 1;
  }
  str[i] = 0;

	cout << str << endl;
}
