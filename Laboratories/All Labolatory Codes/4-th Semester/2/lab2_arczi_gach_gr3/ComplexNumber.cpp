#include "ComplexNumber.h"
#include <cstdlib>

ComplexNumber** ComplexNumber::_tabOfPtrs = NULL;
int ComplexNumber::_counterOfDynamic = 0;
int ComplexNumber::_counter = 0;

ComplexNumber::ComplexNumber(const float re, const float im) : _re(re), _im(im) {
	cout << "Constructing " << _re << "+" << _im << "i" << endl;
	_counter++;
}

ComplexNumber::~ComplexNumber() {
	if(_counter >= 0) {
		for (int i = 0; i < _counterOfDynamic; ++i)
		{
			if(_tabOfPtrs[i] == this) {
				int k;
				for (int j = 0; j < _counterOfDynamic-1; j++)
					if(_tabOfPtrs[j] == this) {
						k = j;
						ComplexNumber* tmp = _tabOfPtrs[k];
						_tabOfPtrs[k] = _tabOfPtrs[_counterOfDynamic-1];
						_tabOfPtrs[_counterOfDynamic-1] = tmp;
					}
				ComplexNumber** oldTab = _tabOfPtrs;
				_tabOfPtrs = new ComplexNumber*[_counterOfDynamic-1];
				for (int j = 0; j < _counterOfDynamic-1; j++)
					_tabOfPtrs[j] = oldTab[j];
				delete [] oldTab;
				_counterOfDynamic--;
			}
		}
		cout << "Deleting " << _re << "+" << _im << "i" << endl;
		_counter--;
	} 

	if(_counter == -1) {
		if(_counterOfDynamic >=1) {
			_counterOfDynamic--;
			cout << "Deleting " << _tabOfPtrs[_counterOfDynamic]->_re << "+" << _tabOfPtrs[_counterOfDynamic]->_im << "i" << endl;
			delete _tabOfPtrs[_counterOfDynamic];
		} else {
			delete [] _tabOfPtrs;
		}
	}
}

void* ComplexNumber::operator new (size_t n) {
	ComplexNumber* ptr = (ComplexNumber*)malloc(n);
	if(!_tabOfPtrs) {
		_tabOfPtrs = new ComplexNumber*[1];
		_tabOfPtrs[0] = ptr;
	} else {
		ComplexNumber** oldTab = _tabOfPtrs;
		_tabOfPtrs = new ComplexNumber*[_counterOfDynamic+1];
		for (int i = 1; i < _counterOfDynamic+1; i++)
			_tabOfPtrs[i] = oldTab[i-1];
		delete [] oldTab;
		_tabOfPtrs[0] = ptr;
	}
	_counterOfDynamic++;
	_counter--;
	return ptr;
}

ostream& operator<< (ostream& os, const ComplexNumber& complex) {
	return os << complex.GetRe() << "+" << complex.GetIm() << "i";
}