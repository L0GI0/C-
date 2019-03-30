#include "Fit.h"
#include "FitResult.h"

FitResult::FitResult(std::string name): _expression(name), _params(), _paramValues() {

}

std::string FitResult::expression() const {
	return _expression;
}

unsigned int FitResult::nParams() const {
	return _params.size();
}

void FitResult::clearTables() {
	_params.clear();
	_paramValues.clear();
}

void FitResult::addParam(std::string name, float value) {
	_params.push_back(name);
	_paramValues.push_back(value);	
}

std::string FitResult::parameterName(const int i) const {

	return _params[i];
}

float FitResult::parameterValue(const int i) const {

	return _paramValues[i];
}