#include <iostream>


class FVec{
public:
	double & operator[](int i);
	FVec & operator=(FVec & other);
	FVec(int length);
	FVec(int begin, int end);
	FVec(const FVec &toCopy);
	FVec & set(int index, double value);
	void print(const char * message = "")const;
	int begin();
	int end();
	~FVec();
private:
	double *_vector; 
	int _first;
	int _last;
};