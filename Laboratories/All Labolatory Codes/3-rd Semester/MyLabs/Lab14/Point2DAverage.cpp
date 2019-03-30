#include "Point2DAverage.h"

void Point2DAverage::reset(){
	Xa = 0;
	Ya = 0;
}

Point2DAverage &Point2DAverage::operator()(const Point2D &p){
	Xa += p.X;
	Ya += p.Y;
	pointCount++;
	return (*this);
}


ostream &operator<<(ostream &o, const Point2DAverage &pa){
	o << "(" << (pa.Xa / pa.pointCount) << "," << (pa.Ya / pa.pointCount) << ")" << endl;
	return o;
}
