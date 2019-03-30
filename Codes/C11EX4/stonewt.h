// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
private:
enum Mode {STONE, INTLBS, FPLBS};
enum {Lbs_per_stn = 14};
// pounds per stone
int stone;
// whole stones
double pds_left;
int intPounds;
// fractional pounds
double pounds;
Mode mode;
// entire weight in pounds
public:
Stonewt(double lbs);
// constructor for double pounds
Stonewt(int stn, double lbs); // constructor for stone, lbs
Stonewt();
// default constructor
~Stonewt();
// show weight in pounds format
void set_stone();
void set_int_lbs(){
	mode = INTLBS;
}
void set_dou_lbs(){
	mode = FPLBS;
};
friend std::ostream & operator<<(std::ostream & os, Stonewt foo);
// show weight in stone format
};
#endif