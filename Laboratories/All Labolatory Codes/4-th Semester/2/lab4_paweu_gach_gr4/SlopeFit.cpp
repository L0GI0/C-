#include "SlopeFit.h"

SlopeFit::SlopeFit(std::string name): Fit(name, "y = a * x") {
	
}

void SlopeFit::appendPoint(float x, float y) {
	_xxSum += x*x;
	_xySum += x*y;
}

FitResult SlopeFit::result() {
	_result.clearTables();
	float a = _xySum / _xxSum;
	_result.addParam("a", a);
	return _result;
}