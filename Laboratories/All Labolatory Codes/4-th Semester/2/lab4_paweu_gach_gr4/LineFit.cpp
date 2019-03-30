#include "LineFit.h"

LineFit::LineFit(std::string name): Fit(name, "y = a * x + b") {

}

void LineFit::appendPoint(float x, float y) {
	_xxSum += x*x;
	_xySum += x*y;
	_xSum += x;
	_ySum += y;
	_pointCounter++;
}

FitResult LineFit::result() {
	_result.clearTables();
	float a = (_xySum - _xSum * _ySum / _pointCounter)/(_xxSum - _xSum * _xSum / _pointCounter);
	_result.addParam("a", a);
	float b = (_ySum - a * _xSum) / _pointCounter;
	_result.addParam("b", b);
	return _result;
}