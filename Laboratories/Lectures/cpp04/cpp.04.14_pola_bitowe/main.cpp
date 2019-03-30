/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 04-10-2004
/// \brief Union.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
class CPort
{
public:
	unsigned read : 1;
	unsigned status : 1;
	unsigned data : 6;
};
/////////////////////////////////////////////////////////////////////////
class CPortInt
{
public:
	unsigned read;
	unsigned status;
	unsigned data;
};
/////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	CPort aPort;
	aPort.read = 1;
	aPort.status = 0;
	aPort.data = 63;	
	cout << aPort.read << ", " << aPort.status << ", " << aPort.data << endl;

	aPort.read = 0;
	aPort.status = 2;
	aPort.data = 562;	
	cout << aPort.read << ", " << aPort.status << ", " << aPort.data << endl;

	cout << "sizeof(CPort)    = " << sizeof(CPort) << endl;
	cout << "sizeof(CPortInt) = " << sizeof(CPortInt) << endl;


	getchar();
	return 0;
}
