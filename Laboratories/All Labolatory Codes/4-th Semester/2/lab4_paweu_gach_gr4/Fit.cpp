#include "Fit.h"

Fit::Fit(std::string name, std::string expression): _result(expression), _name(name), _xxSum(0), _xySum(0), _xSum(0), _ySum(0), _pointCounter(0) {

}

void Fit::print() const {
	std::cout << "This is " << _name << "\n";
}

void Fit::appendPoint(float x, float y) const {
	std::cout << "Cannot add point (" << x << ", " << y << "), to const object.\n";
}