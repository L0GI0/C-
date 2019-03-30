// golf.h -- for pe9-1.cpp
#ifndef _GOLF_
#define _GOLF_
const int Len = 40;
class Golf{
private:
	char fullname[Len];
	int handicapValue;
public:
// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
Golf(const char * name, int hc);
// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
Golf();
// function resets handicap to new value
void handicap(int hc);
// function displays contents of golf structure
void showGolf() const;
};
#endif