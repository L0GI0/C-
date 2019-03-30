// stonewt.cpp -- Stonewt methods
#include <iostream>
using namespace std;
#include "stonewt.h"
// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
stone = int (lbs) / Lbs_per_stn;
// integer division
pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
pounds = lbs;
}
// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
stone = stn;
pds_left = lbs;
pounds = stn * Lbs_per_stn +lbs;
intPounds = (int) pounds; 
}
Stonewt::Stonewt()
// default constructor, wt = 0
{
stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt()
{
}
std::ostream & operator<<(std::ostream & os, Stonewt foo){
if (foo.mode == foo.STONE)
		os << foo.stone << " stone, " << foo.pds_left << " pounds.";
	if (foo.mode == foo.INTLBS)
		os << foo.intPounds << " integer pounds.";
	if (foo.mode == foo.FPLBS)
		os << foo.pounds << " floating point pounds.";
	return os;
};
// destructorAutomatic Conversions and Type Casts for Classes
// show weight in stones
