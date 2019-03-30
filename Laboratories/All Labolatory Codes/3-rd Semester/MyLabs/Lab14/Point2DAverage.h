#pragma once
#include <iostream>
#include "Point2D.h"
using namespace std;

class Point2DAverage{
public:
	Point2DAverage():Xa(0), Ya(0), pointCount(0){};
	Point2DAverage & operator()(const Point2D &p);
	void reset();
	friend ostream &operator<<(ostream &o,const Point2DAverage &pa);
	// friend ostream &operator<<(ostream &o,const *text, Point2DAverage pa);
private:
	float Xa;
	float Ya;
	int pointCount;
};