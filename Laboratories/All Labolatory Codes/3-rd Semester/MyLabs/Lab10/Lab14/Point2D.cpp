#include "Point2D.h"


Point2D::Point2D(float x, float y):X(x), Y(y){

}

// ostream & operator<<(ostream &o,const char *text, const MyString &p){
ostream & operator<<(ostream &o, const Point2D &p){
	o << "(" << p.X << "," << p.Y << ")" << endl;
	return o;
}

Point2D &Point2D::operator--(){
	--X;
	--Y;
	*this;
}

Point2D &Point2D::operator ++(int value){
	++X;
	++Y;
	return *this;
}

Point2D operator+(double val, const Point2D &p){
	Point2D tmp;
	tmp.X = p.X + val;
	tmp.Y = p.Y + val;
	return tmp;
}

Point2D Point2D::operator+(const Point2D &p){
	Point2D tmp;
	tmp.X = X + p.X;
	tmp.Y = Y + p.Y;
	return tmp;
}


